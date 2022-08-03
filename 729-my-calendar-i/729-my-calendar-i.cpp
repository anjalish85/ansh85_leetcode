class MyCalendar {
            vector <pair <int, int >> v;
public:
    MyCalendar() {
        vector <pair <int, int >> v;
        
    }
    
    bool book(int start, int end) {
        for (pair<int, int> temp: v){
            if(max(temp.first, start) < min(end, temp.second)){
                return 0;
            }
        }
        v.push_back({start, end});
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */