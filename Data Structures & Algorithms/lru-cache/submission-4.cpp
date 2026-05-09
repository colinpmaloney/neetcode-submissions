class Node{
    public:
        int key;
        int val;
        Node* prev;
        Node* next;

        Node(int key, int val){
            this->key = key;
            this->val = val;
            this->prev = nullptr;
            this->next = nullptr;
        }
};

class LRUCache {
private:
    int capacity;
    Node* head = nullptr;
    Node* tail = nullptr;
    unordered_map<int, Node*> umap;

    Node* Create(int key, int val){
        Node* node = new Node(key, val);
        node->next = head;
        if(head)
            head->prev = node;
        head=node;
        
        if(!tail)
            tail = head;

        umap[key] = node;
        return node;
    }

    void Delete(Node* node){
        if(!node) return;
        umap.erase(node->key);

        if(node->next)
            node->next->prev = node->prev;
        if(node->prev)
            node->prev->next = node->next;

        if(node == head)
            head = node->next;
        if(node == tail)
            tail = node->prev;

        delete(node);
    }
    
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(umap.count(key)){
            int val = umap[key]->val;
            Delete(umap[key]);
            Create(key, val);
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(umap.count(key))
            Delete(umap[key]);

        if(umap.size() + 1 > capacity)
            Delete(tail);

        Create(key, value);
    }
};
