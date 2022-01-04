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
#include "Learn03.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    

    int nums[]{11,4,9,3,12,1};
    kStringPrintf("未排序前数据");
    kIntArrayPrintf(nums, 6);
    kStringPrintf("开始选择排序------>");
    insertionSort(nums, 6);
    kStringPrintf("完成选择排序------>");
    kIntArrayPrintf(nums, 6);

    return 0;
}



