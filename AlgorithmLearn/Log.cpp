//
//  Log.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/2.
//

#include "Log.hpp"
#include "iostream"



void kStringPrintf(string s){
    printf(" string = %s\n",s.c_str());
}

void kCharPrintf(char s){
    printf(" char = %c\n",s);
}

void kIntPrintf(int value){
    printf("int = %d\n",value);
}

void kFloatPrintf(float value){
    printf("float = %f\n",value);
}

void kVectorIntPrintf(vector<int> nums){
    string str = "vector = {";
    for (int i=0; i!=nums.size(); i++) {
        str+= to_string(nums[i]);
        if (i!=nums.size()-1) {
            str+=", ";
        }
    }
    str+="} ";
    printf("%s\n",str.c_str());
}

void kNodePrintf(ListNode *head){
    printf("\n");
    string str = "";
    while(head){
        str += std::to_string(head->val);
        str += "->";
        printf("%d\n",head->val);
        head = head->next;
    }
    str += "NULL";
    printf("%s\n",str.c_str());
}

void kIntArrayPrintf(int array[],int len){
    
    printf("\n");
    string str = "[";
    for (int i=0; i!=len; i++) {
        str += std::to_string(array[i]);
        if(i<len-1){
            str += "、";
        }
    }
    str += "]";
    printf("%s\n",str.c_str());
}
