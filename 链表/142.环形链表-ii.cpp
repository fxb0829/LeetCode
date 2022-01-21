/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-21 20:40:22
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-21 20:49:51
 */
/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr){
            return head;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                //此时快慢指针相遇，开一个新指针指向头节点
                ListNode *cur = head;
                //新指针与当前慢指针相遇的点就是入口节点
                while (slow != cur)
                {
                    slow = slow->next;
                    cur = cur->next;
                }
                return cur;
            }
        }
        return nullptr;
    }
};
// @lc code=end

