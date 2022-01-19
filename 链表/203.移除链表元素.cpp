/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-19 21:38:08
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-19 21:57:39
 */
/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define CESHI_LISTNODE

#ifdef CESHI_LISTNODE
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
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
    ListNode* removeElements(ListNode* head, int val) {
        //虚拟头结点
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        //定义一个指针
        ListNode *cur = dummyHead;
        while (cur->next != nullptr){
            if(cur->next->val == val){
                //删除节点--实际上是指针重新指向下下个节点
                //将要删除的节点存起来，便于delete
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }else{
                //指针移动
                cur = cur->next;
            }
        }
        //将头结点还原
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};
// @lc code=end

