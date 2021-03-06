//
//  learn01.hpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/1.
//

#ifndef learn01_hpp
#define learn01_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;


vector<int>twoSum(vector<int>inputNums ,int target);

string defangIPaddr(string address);

void reverseString(vector<char>& s);

string reverseWords(string s);

bool isPalindrome(string s);

bool isPalindrome(int x);

int lengthOfLastWord(string s);

string replaceSpace(string s);

string reverseLeftWords(string s, int n);

int removeDuplicates(vector<int>& nums);

int strToInt(string str);

void setZeroes(vector<vector<int>>& matrix);

bool isStraight(vector<int>& nums);

vector<int> divingBoard(int shorter, int longer, int k);





#endif /* learn01_hpp */
