/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *a=(int*)malloc(2*sizeof(int));
    int i=0,j=0;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            int sum=nums[i]+nums[j];
            if(sum==target) { 
                a[0]=i;
                a[1]=j;
                
                *returnSize=2;
                return a;
                }
            else continue;
        }
    }
    return a;//必须有
}
