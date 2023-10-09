#define ll long long
class MyHashMap {
    vector<ll> res;
public:
      
    MyHashMap() {
      res = vector<ll> (1000001, -1);
    }
    
    void put(int key, int value) {
     res[key] = value;
    }
    
    int get(int key) {
      return res[key];
    }
    
    void remove(int key) {
      res[key] = -1;
    }
};
