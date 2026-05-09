class TimeMap {
public:
    unordered_map<string, unordered_map<int, string>> mp;

    TimeMap() {
        
    }
    
    // Does overriding a key remove all previous timestamps?
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;   
    }
    
    // Returns most recent value of key if set was called on it
    // Returns the 
    string get(string key, int timestamp) {
        // If the Key exist
        if(mp.count(key)){
            while(mp[key].count(timestamp) == 0 && timestamp > 0)
                timestamp--;
            if(timestamp != 0)
                return mp[key][timestamp];
        }
        return "";
    }
    
};

// We are going to map the Name to Map 2
// Map 2 will Map a time to a feeling
// Map<Name, Map<Time, Feeling>
// if Map2<Time> doesn't exist, then decrement and check again while it is greater than 0