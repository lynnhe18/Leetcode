//
//  main.cpp
//  addTwoNumbers
//
//  Created by HeLynn on 2020/6/8.
//  Copyright © 2020年 HeLynn. All rights reserved.
//

#include <iostream>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l3 = new ListNode();
        ListNode * curr = l3;
        int carry = 0;
        while (l1||l2){
            int v1 = (!l1) ? 0 : l1->val;
            int v2 = (!l2) ? 0 : l2->val;
            curr->val = (v1 + v2 + carry) % 10;
            carry = (v1 + v2 + carry) / 10;
            
            l1 = (l1) ? l1->next : l1;
            l2 = (l2) ? l2->next : l2;
            if(l1||l2){
                curr->next = new ListNode();
                curr=curr->next;
            }
        }
        if(l1==nullptr  && l2==nullptr){
            if(carry > 0) {
                curr->next = new ListNode(carry);
            }
        }
        return l3;
    }
};
int main (){
    ListNode k1(3);
//    ListNode k2(4, &k1);
    ListNode l1(5, &k1);
//    
//    ListNode k3(6);
//    ListNode k4(1, &k3);
    ListNode l2(5);
    Solution sol;
    ListNode * l3 = sol.addTwoNumbers(&l1, &l2);
    while (l3!=nullptr){
        cout << l3->val << endl;
        l3 = l3->next;
    }
    return 0;
}
