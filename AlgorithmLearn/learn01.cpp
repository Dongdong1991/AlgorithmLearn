//
//  learn01.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/1.
//

#include "learn01.hpp"
#include "Log.hpp"



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


bool isPalindrome(string s) {
    string temp;
    for(auto c:s)
    {
        if(islower(c)||isdigit(c)){
            temp+=c;
        }else if(isupper(c)){
            temp+=tolower(c);
        }
    }
    string newstr(temp.rbegin(),temp.rend());
    
    return !newstr.compare(temp);
}


bool isPalindrome(int x) {
    
    if (x<0) {
        return false;
    }
    int tempValue = 0;
    int y = x;
    while (x!=0) {
        
        int va1 = x % 10;
        //溢出处理
        if(tempValue > INT_MAX / 10 || (tempValue == INT_MAX / 10 && va1 > (INT_MAX % 10))) return 0;
        if(tempValue < INT_MIN / 10 || (tempValue == INT_MIN / 10 && va1 < (INT_MIN % 10))) return 0;
        tempValue = tempValue * 10 + va1;
        x/=10;
        
    }
    return tempValue == y ? true : false;
}

int lengthOfLastWord(string s){
    
    int lend = 0;
    int count = (int)s.length();
    for (int i = count; i>=0; i--) {
        char c = s[i];
        if (lend>0) {
            if (c == ' ') {
                break;
            }
            lend ++;
        }else{
            if (c != ' ' && c != '\0') {
                lend ++;
            }
        }
    }
    return lend;
}

string replaceSpace(string s) {
    string str = "";
    for (auto c:s){
        if (c == ' ') {
            str += "%20";
        }else{
            str += c;
        }
    }
    return str;
}


string reverseLeftWords(string s, int n) {
    
    string str = s.substr(0,n);
    s.insert(s.size(), str);
    str = s.substr(n,s.size()-n);
    return str;
}

int removeDuplicates(vector<int>& nums) {
    int len = (int)nums.size();
    if (len==0) {
        return 0;
    }
    //定义快慢指针。
    int fast = 1; int low = 1;
    while (fast<len) {
        //如果不想等则填充。
        if (nums[fast] != nums[fast-1]) {
            nums[low] = nums[fast];
            low ++ ;
        }
        fast ++;
    }
    return low;
}
