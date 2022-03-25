class MyHashSet {
public:
     int siz;
    vector <int> m;
   
    MyHashSet() {
        siz=1e6+1;
        //vector <int> m[siz];
        m.resize(siz);      //since vector was not declared with size hence here we are declaring it
    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
        m[key]=0;
    }
    
    bool contains(int key) {
        if(m[key]) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */