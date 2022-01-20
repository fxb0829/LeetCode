/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-20 14:42:18
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-20 15:12:13
 */
/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class MyLinkedList {
public:

    //定义链表节点结构
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x):val(x),next(nullptr){};
    };
    
    //初始化链表
    MyLinkedList() {
        //头结点初始化
        dummyHead = new ListNode(0);
        _size = 0;
    }
    //获取节点值
    int get(int index) {
        if(index >(_size-1) || index < 0){
            return -1;
        }
        ListNode *cur = dummyHead->next;
        while (index--){
            cur = cur->next;
        }
        return cur->val;
    }
    
    //在头结点位置添加
    void addAtHead(int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = dummyHead->next;
        dummyHead->next = newNode;
        _size++;
    }
    
    //在末尾添加节点
    void addAtTail(int val) {
        ListNode *newNode = new ListNode(val);
        ListNode *cur = dummyHead;
        while (cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }
    
    //在指定位置插入节点
    void addAtIndex(int index, int val) {
        if(index < 0 || index > _size){
            return;
        }
        ListNode *newNode = new ListNode(val);
        ListNode *cur = dummyHead;
        while (index--){
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    
    //删除指定位置的节点
    void deleteAtIndex(int index) {
        if(index < 0 || index > (_size-1)){
            return;
        }
        ListNode *cur = dummyHead;
        while (index--){
            cur = cur->next;
        }
        //拿到要删除的节点
        ListNode *delNode = cur->next;
        //重新连接
        cur->next = delNode->next;
        delete delNode;
        _size--;
    }

private:
    ListNode *dummyHead;  //虚拟头结点
    int _size;            //大小
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

