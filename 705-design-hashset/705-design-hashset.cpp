class MyHashSet {
    vector <int> m;
    int s;
public:
    MyHashSet() {
        s=1e6+1;
m.resize(s);
    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
         m[key]=0;
    }
    
    bool contains(int key) {
        if(m[key])  return true;
        else    return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */