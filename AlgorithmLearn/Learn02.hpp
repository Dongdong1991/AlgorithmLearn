//
//  Learn02.hpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/6.
//

#ifndef Learn02_hpp
#define Learn02_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* removeElementsUseVirtualHeader(ListNode* head, int val);

ListNode* removeElements(ListNode* head, int val);

ListNode* middleNode(ListNode* head);


#endif /* Learn02_hpp */
