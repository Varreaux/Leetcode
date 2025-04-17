#include<vector>
#include<unordered_map>

using namespace std;

class Node{
public:
	int key, value;
	Node* next;
	Node* prev;

	Node(int k, int v){
		key = k;
		value = v;
		next = nullptr;
		prev = nullptr;
	}
};

class LRUCache {
public:

	unordered_map<int, Node*> m;
	Node* head = nullptr;
	Node* tail = nullptr;
	int c = 0;

	LRUCache(int capacity) {
		c = capacity;
	}

	void moveToFront(Node* node){
		if(node == head) return;

		if(node->prev) node->prev->next = node->next;
		if(node->next) node->next->prev = node->prev;
		if(node == tail) {
			node->prev->next = nullptr;
			tail = node->prev;
		}
		head->prev = node;
		node->next = head;
		node->prev = nullptr;
		head = node;
	}
	
	int get(int key) {
		if(m.count(key)){
			moveToFront(m[key]);
			return m[key]->value;
		} 
		return -1;
	}
	
	void put(int key, int value) {
		if(m.count(key)){
			moveToFront(m[key]);
			m[key]->value = value;
		} 
		else{
			if(m.size()==c){
				m.erase(tail->key);
				if(c>1){
					tail = tail->prev;
					delete tail->next;
					tail->next = nullptr;
				}
			}
			Node* node = new Node(key, value);
			if (m.size()==0){
				head = node;
				tail = node;
			}
			else{
				moveToFront(node);
			}
			m[key]=node;

		}
	}
};