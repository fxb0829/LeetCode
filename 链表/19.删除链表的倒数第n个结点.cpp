/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-20 15:48:10
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-20 16:27:31
 */
/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define CESHI_LISTNODE

#ifdef CESHI_LISTNODE
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#endif

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    //双指针法
    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     //使用快慢指针的思想
    //     ListNode *dummyHead = new ListNode(0,head);
    //     ListNode *slow = dummyHead;
    //     ListNode *fast = dummyHead;
    //     n = n + 1; //需要多走一步
    //     while (n--){
    //         fast = fast->next;
    //     }
    //     while (fast != nullptr){
    //         slow = slow->next;
    //         fast = fast->next;
    //     }
    //     //拿到要删除的节点
    //     ListNode *delNode = slow->next;
    //     slow->next = slow->next->next;
    //     delete delNode;

    //     return dummyHead->next;
    // }

    //递归
    int count = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //先到底，然后反向计数
        if(head == nullptr){
            return head;
        }
        head->next = removeNthFromEnd(head->next,n);
        count++;
        if(count == n){
            return head->next;
        }
        return head;
    }
};
// @lc code=end

