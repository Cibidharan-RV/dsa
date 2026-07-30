class TimeMap {
    unordered_map< string, map<int, string> > map;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {        
        map[key][timestamp] = value;        
    }
    
    string get(string key, int timestamp) {
        auto un_map = map.find(key);
        if (un_map == map.end()) return "";

        const auto& omap = un_map->second;
        auto it = omap.upper_bound(timestamp);

        if (it == omap.begin()) return "";

        --it;
        return it->second;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */