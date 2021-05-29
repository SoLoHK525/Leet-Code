/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int ni, nj;
    for(int i = 0; i < numsSize - 1; ++i) {
        ni = nums[i];
        for(int j = i + 1; j < numsSize; ++j) {
            nj = nums[j];
            if(ni + nj == target) {
                int* ret = malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    
    return NULL;
}