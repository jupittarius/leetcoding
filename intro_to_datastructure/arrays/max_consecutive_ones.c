// Description: 
//     Input: nums = [1,1,0,1,1,1]
//     Output: 3
//     Explanation: The first two digits or the last three digits are consecutive 1s. 
//                 The maximum number of consecutive 1s is 3.

#include<stdio.h>
#include<malloc.h>
int findMaxConsecutiveOnes(int* nums, int size){
    int i = 0;
    int j = 0;
    int cnt = 0;
    
    while(j < size){
        if (nums[j] == 1)
        {
            cnt++;
            j++;
            nums[i] = cnt;
        }
        else if (nums[j] == 0){
            cnt = 0;
            i = j;
            j++;
        }
        
    }

    i = 0;
    int max=0;
    while(i < size){
        if (nums[i] > max) max = nums[i];
        i++;
    }
    return max;
    
}

int main(){
    int nums[6] = {1,1,0,1,1,1};
    int ret = findMaxConsecutiveOnes(nums, 6);
    printf("%d\n", ret);
    return 0;
}