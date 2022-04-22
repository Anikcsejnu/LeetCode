class MyHashSet {
public:
    int set[1000001];
    MyHashSet() {
        for(int i = 0;i < 1000001;i++) set[i] = -1;
    }
    
    void add(int key) {
        set[key] = 1;
    }
    
    void remove(int key) {
        set[key] = -1;
    }
    
    bool contains(int key) {
        return set[key] != -1;
    }
};
