class MyHashMap {
public:
    vector <int> m;
    int s;
    MyHashMap() {
        s=1e6+1;
        m.resize(s);
        fill(m.begin(),m.end(),-1);
    }
    
    void put(int key, int value) {
        m[key]=value;
    }
    
    int get(int key) {
        if(m[key]!=-1)  return (m[key]);
        else return -1;
    }
    
    void remove(int key) {
        m[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */