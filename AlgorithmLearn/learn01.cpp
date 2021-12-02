//
//  learn01.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/1.
//

#include "learn01.hpp"

vector<int>twoSum(vector<int>inputNums ,int target){
    for (int i = 0; i != inputNums.size(); i++)
    {
        for (int j = i+1; j < inputNums.size(); j++)
        {
            if (inputNums[i]+inputNums[j] == target)
            {
                return {i,j};
            }
        }
    }
    return {};
}

string defangIPaddr(string address){
    
    string newStr;
    for (size_t i=0; i!=address.size(); i++) {
        if ('.' == address[i]) {
            newStr += "[.]";
        }else{
            newStr += address[i];
        }
    }
    return newStr;
}


void reverseString(vector<char>& s){

    size_t count = s.size();
    for (size_t i = 0; i!=count/2; i++) {
        char temp = s[i];
        s[i] = s[count - i - 1];
        s[count - i - 1] = temp;
    }
}

string reverseWords(string s){
    string newStr;

    
    
    
    return newStr;
}
