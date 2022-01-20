/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-20 15:14:34
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-20 15:45:16
 */
/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    //迭代法
    // ListNode* reverseList(ListNode* head) {
    //     ListNode *dummyHead = new ListNode(0);
    //     ListNode *cur = dummyHead->next;
    //     while (head != nullptr){
    //         ListNode *tmp = head->next;
    //         head->next = cur;
    //         dummyHead->next = head;
    //         cur = head;
    //         head = tmp;
    //     }
    //     head = dummyHead->next;
    //     delete dummyHead;
    //     return head;
    // }

    //递归
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode *newHead = reverseList(head->next);
        //改变指针的指向
        head->next->next = head;
        //将当前节点的next指向置空
        head->next = nullptr;

        return newHead;
    }
};
// @lc code=end

