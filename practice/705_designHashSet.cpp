#include<vector>
using namespace std;

class MyHashSet {
public:
    vector<int> data;
    MyHashSet() {
    }
    
    void add(int key) {
        if (contains(key)){return;}
        data.push_back(key);
    }
    
    void remove(int key) {
        if (!contains(key)){return;}
        data.erase(find(data.begin(),data.end(),key));
    }
    
    bool contains(int key) {
        if(find(data.begin(),data.end(),key)==data.end()){return false;}
        return true;
    }
};
