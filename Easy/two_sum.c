/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int returnSize;
    twoSum(nums,4,target,&returnSize);
    printf("[%d, %d]\n", nums[0], nums[1]);
    return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//  int i,j;
 int static ans[2];
 for(int i=0;i<numsSize;i++){
    for(int j=i+1;j<numsSize;j++){
        if(nums[i]+nums[j] == target){
            nums[0] = i;
            nums[1] = j;
            *returnSize = 2;
            return nums;
        }
    }
  }
  return NULL;
}
