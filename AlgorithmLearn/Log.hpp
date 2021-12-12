//
//  Log.hpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/2.
//

#ifndef Log_hpp
#define Log_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "Learn02.hpp"

using namespace std;

void kStringPrintf(string s);

void kCharPrintf(char s);

void kIntPrintf(int value);

void kFloatPrintf(float value);

void kVectorIntPrintf(vector<int> nums);

void kNodePrintf(ListNode *head);

#endif /* Log_hpp */
