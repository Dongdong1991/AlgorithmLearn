//
//  Learn03.cpp
//  AlgorithmLearn
//
//  Created by 东东 on 2021/12/29.
//

#include "Learn03.hpp"
#include "Log.hpp"

//冒泡排序，小的在前面。大的在后面。每次遍历，都会把大的往后面塞
void bubbleSort(int a[],int n){
    for (int i=0; i!=n; i++){
        bool isChange = false;
        for (int j=0; j!=n-i-1; j++){
            if (a[j]>a[j+1]) {
                //交换数据
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isChange = true;
            }
        }
        //不存在数据要交互 说明排序完成
        if (!isChange) {
            break;
        }
    }
}


//插入排序
//【已排序区间】+【未排序区间】 = 总数组区间长度
//拿第一个数据来做比较。有找到小于的，交换数据，然后跳去循环，以此循环。然后插入数据
//确保已排序区间都是有序的。
void insertionSort(int a[],int n){
    
    for (int i=1; i<n; i++){
        //默认【0,i) 是排序的
        int value = a[i];
        int j = i-1;

        for (; j>=0; --j) {
            if (a[j] > value) {
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = value;//找到插入的位置
        kIntArrayPrintf(a, n);
    }
}

//选择排序
//【已排序区间】+【未排序区间】 = 总数组区间长度
//遍历一次原数组，找到最小的，然后把最小的放在已排序区间。以此循环进行。
//确保已排序区间都是有序的。
void selectionSort(int a[],int n){
    
    for (int i=0;i < n; i++){
        
        int index = i;
        int value = a[i];
        for (int j=i; j<n; j++) {
            if (value>a[j]) {
                value = a[j];
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
        kIntPrintf(i);
        kIntPrintf(index);
        kIntArrayPrintf(a, n);
    }
}
