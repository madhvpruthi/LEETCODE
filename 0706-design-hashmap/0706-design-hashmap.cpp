class MyHashMap {
private:
    int size = 1000;
    vector<vector<pair<int,int>>> table;
    int hash(int key){
        return key % size;
    }

public:
    MyHashMap() {
        table.resize(size);
    }

    
    
    void put(int key, int value) {
        int index = hash(key);
        for(auto &p : table[index]){
            if(p.first == key ){
                p.second = value;
                return;
            }
        }
        table[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = hash(key);
        for(auto &p: table[index]){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);

        for(int i =0; i<table[index].size(); i++){
            if(table[index][i].first == key){
                table[index].erase(table[index].begin()+i);
                return;
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