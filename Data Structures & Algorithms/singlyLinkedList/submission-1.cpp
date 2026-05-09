class LinkedList {
public:
    vector<int> lst;
    LinkedList() {
        
    }

    int get(int index) {
        if(index > -1 && index < lst.size())
            return lst[index];
        return -1;
    }

    void insertHead(int val) {
        lst.insert(lst.begin(), val);
    }
    
    void insertTail(int val) {
        lst.emplace_back(val);
    }

    bool remove(int index) {
        if(index > -1 && index < lst.size()){
            lst.erase(lst.begin() + index);
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        return lst;
    }
};
