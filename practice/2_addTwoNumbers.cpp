#include<iostream>

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

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> num1;
        ListNode* node = l1;
        while (node != nullptr){
            num1.push_back(node->val);
            node = node->next;
        }
        vector<int> num2;
        node = l2;
        while (node != nullptr){
            num2.push_back(node->val);
            node = node->next;
        }
        
        int num = num1[0] + num2[0];
        int rest = num>=10 ? 1: 0;
        ListNode* l3 = new ListNode(num%10);
        node = l3;
        for(int i =1; i< max(num1.size(), num2.size()); i++){
            if(i<num1.size()&&i<num2.size())
                num = num1[i] + num2[i] + rest;
            else if(i<num1.size())
                num = num1[i] + rest;
            else
                num = num2[i] + rest;
            
            rest = num>=10 ? 1: 0;
            node->next = new ListNode(num%10);
            node = node->next;
        }
        if(rest) node->next = new ListNode(rest);
        return l3;
    }

    ListNode* addTwoNumbers_old(ListNode* l1, ListNode* l2) {
        long long num1 =0, counter = 0;
        ListNode* node = l1;
        while (node != nullptr){
            num1+= node->val * pow(10,counter++);
            node = node->next;
        }
        long long num2 =0;
        node = l2;counter=0;
        while (node != nullptr){
            num2+= node->val * pow(10,counter++);
            node = node->next;
        }
        long long num = num1+num2;
        int temp = num%10;
        num /=10;
        ListNode* l3 = new ListNode(temp, nullptr) ;
        node = l3;
        while(num!=0){
            temp = num%10;
            node->next = new ListNode(temp, nullptr);
            num/=10;
            node = node->next;
        }
        return l3;
    }
};
