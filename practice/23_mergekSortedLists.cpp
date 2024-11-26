#include<vector>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        for(auto& list : lists){
            ListNode* temp = list;
            while(temp!=nullptr && temp->next!=nullptr){
                vec.push_back(temp->val);
                temp = temp -> next;
            }
            if(temp!=nullptr)vec.push_back(temp->val);
        }
        if(vec.size()==0)return nullptr;
        sort(vec.begin(), vec.end());
        ListNode* root = new ListNode(vec[0]);
        ListNode* temp = root;
        for(int i = 1; i < vec.size(); i++){
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        return root;
    }
};