#include<stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    
    return 0.0;
}

int Compare(double expect, double real, char* s){
    if(expect - real < 0.0001){
        printf("%s，比较通过！预期值 = 实际值：%f\n", s, expect);
        return 0;
    }
    else{
        printf("%s，比较失败！预期值：%f；实际值：%f\n", s, expect, real);
        return -1;
    }
}

int main(){
    int testNums1_1[2] = {1, 3};
    int testNums2_1[1] = {2};
    double real = findMedianSortedArrays(testNums1_1, 2, testNums2_1, 1);
    Compare(2, real, "测试用例1");

    return 0;
}
