#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};




class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        string str = "";
        int num = 0, remainder = 0, limit= 0;
        ListNode* node = head;
        vector<int> v2, v;
        
        while(node != nullptr){
            v2.push_back(node->val);
            node = node->next;
        }
        
        for(int i = v2.size()-1; i >= 0; i--){
            num = (v2[i])*2;
            v.push_back(num%10 + remainder);
            if(num>=10)
                remainder = 1;
            else
                remainder = 0;
            limit++;
        }
        if(remainder==1){
            v.push_back(remainder);
            limit++;
        }

        node = head;
        int last = limit-1, counter =0;
        
        while(counter < limit){
            node->val = v[last--];
            counter++;
            if(node->next == nullptr && counter != limit){
                ListNode *hi = new ListNode();
                node->next = hi;
            }
            node = node->next;
        }

        return head;
    }
};


int main (){

    ListNode three(9);
    ListNode two(8, &three);
    ListNode head(1, &two);

    Solution Sol;

    ListNode* answer = Sol.doubleIt(&head);
    while(answer != nullptr){
        cout<<answer->val<<", ";
        answer = answer->next;
    }

}