//
//  main.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/1.
//

#include <iostream>
#include <vector>
#include "learn01.hpp"
#include "Log.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int>temp = {1,1,1,2,2,3,3,3,3,3,4,5,6,7,7,7,7,7,9};
    int s = removeDuplicates(temp);
        
    kIntPrintf(s);
    
    
    return 0;
}



