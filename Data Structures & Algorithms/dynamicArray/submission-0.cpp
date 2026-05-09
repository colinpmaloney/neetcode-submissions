class DynamicArray {
public:

    int* arr = nullptr;
    size_t capacity;
    size_t size;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        arr = (int *) calloc(capacity, sizeof(int));
    }

    int get(int i) {
        return *(arr + i);
    }

    void set(int i, int n) {
        *(arr + i) = n;
    }

    void pushback(int n) {
        if(size >= capacity){
            resize();
        }
        *(arr + size) = n;
        size++;
    }

    int popback() {
        if(size > 0) size--;
        return *(arr + size);
    }

    void resize() {
            capacity *= 2;
            realloc(arr, capacity * sizeof(int));
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
