class MyHashMap {
public:
    vector<vector<int>> vec;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        vector<int> temp;
        temp.push_back(key);
        temp.push_back(value);
        int flag = 0;
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i][0] == key)
            {
                flag = 1;
                vec[i][1] = value;
            }
        }
        if(flag == 0)
            vec.push_back(temp);
    }
    
    int get(int key) {
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i][0] == key)
            {
               return vec[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i][0] == key)
            {
                vec[i][1] = -1;
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */