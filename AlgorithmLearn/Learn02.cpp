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
    tempNode->next = head;
    ListNode *preNode = tempNode;
    
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

