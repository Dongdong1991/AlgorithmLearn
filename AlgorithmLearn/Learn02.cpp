//
//  Learn02.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/6.
//

#include "Learn02.hpp"


ListNode* removeElementsUseVirtualHeader(ListNode* head, int val){
    
    if (head->next == NULL) {
        return NULL;
    }
    
    //借住虚拟头结点
    ListNode *tempNode = new ListNode();
    //虚拟头节点的next 指向链表的指针
    tempNode->next = head;
    //记录上一个节点
    ListNode *preNode = tempNode;
    
//    原始链表
//    header -->【A1 * next】-->【A2 * next】-->【A3 * next】-->【A4 * next】-->【A5 * next】-->【A6 * next】-->null
//    借住虚拟头结点后
//   【tempNode】-->header -->【A1 * next】-->【A2 * next】-->【A3 * next】-->【A4 * next】-->【A5 * next】-->【A6 * next】-->null

//    如果第一个元素刚好是要被删除的话，那是可以直接被删除的。直接是 preNode->next = preNode->next->next。
//    如果不借住虚拟头结点，在while 中是没办法删除到第一个节点。因为 preNode->next 指向的是下一个节点。
    
    while (preNode->next != NULL) {
        if (preNode->next->val == val) {
            //删除重复节点
            preNode->next = preNode->next->next;
        }else{
            preNode = preNode->next;
        }
    }
    return tempNode->next;
}

ListNode* removeElements(ListNode* head, int val){
    
    ListNode *preNode = head;
    if (head == nullptr) {
        return nullptr;
    }
    while (preNode->next != NULL) {
        
        if (preNode->next->val == val) {
            
            //当前不是尾结点
            if (preNode->next->next != NULL) {
                //删除重复节点
                preNode->next = preNode->next->next;
            }else{
                preNode->next = NULL;
            }
            
        }else{
            preNode = preNode->next;
        }
    }
    
    if (head->val == val) {
        head = head->next;
    }
    return head;
}


ListNode* middleNode(ListNode* head) {
    
    ListNode *cur = head;
    int count = 0;
    
    while (cur != NULL) {
        cur = cur->next;
        count ++;
    }
    
    int k = 0;
    cur = head;
    while (k < count/2) {
        k++;
        cur = cur->next;
    }
    return cur;
}


ListNode* middleNodeFastLow(ListNode* head){
    
    //基于快慢指针实现
    ListNode *fastNode = new ListNode();
    ListNode *lowNode = new ListNode();

    fastNode = head;
    lowNode = head;

    while (fastNode != NULL && fastNode->next != NULL) {
        
        fastNode = fastNode->next->next;
        lowNode = lowNode->next;
    }
    
    return lowNode;
}


ListNode* deleteDuplicates(ListNode* head) {
    
    if (head==NULL) {
        return head;
    }
    ListNode *cur = head;
    while (cur->next) {
        if (cur->val == cur->next->val) {
            cur->next = cur->next->next;
        }else{
            cur = cur->next;
        }
    }
    return head;
}
