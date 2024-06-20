#include<iostream>
#include<vector>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* node = head;
        ListNode* nexthead;
        vector<long> v;
        int max = 0;
        while(node != nullptr){
            v.push_back(node->val);
            node = node->next;
        }
        for(int i = v.size()-1; i >=0; i--){
            if(v[i]>=max)
                max = v[i];
            else
                v.erase(v.begin()+i);
        }
        int i = 0;
        node = head;
        while(node != nullptr){
            if(node->val == v[i]){
                if(i == 0)
                    head = node;
                else if(i == 1){
                    nexthead = node;
                    head->next = nexthead;
                }
                else{
                    nexthead->next = node;
                    nexthead = node;
                }
                if(i != v.size()-1)
                    i++;
            }
            node = node->next;
        }
        return head;
    }
};