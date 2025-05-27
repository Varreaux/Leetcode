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


int main () {
	Solution sol;

	return 0;
}
