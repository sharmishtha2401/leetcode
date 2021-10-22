class RandomizedSet {
public:
       
    unordered_map<int, int> mp;
    vector<int> v;
    int size=0;
    
   RandomizedSet() {
       
   }
    
    bool insert(int val) {
        if(find(v.begin(), v.end(), val)!=v.end())
            return false;
        
        v.push_back(val);
        mp[val]=size;
        size++;
        return true;
        
    }
    
    bool remove(int val) {
        if(find(v.begin(), v.end(), val)==v.end())
            return false;
        
        int i=mp[val];
        v[i]=v[size-1];
        v.pop_back();
        mp[v[i]]=i;
        mp.erase(val);
        size--;
        return true;
    }
    
    int getRandom() {
        return v[rand()% size];
    }
    
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */