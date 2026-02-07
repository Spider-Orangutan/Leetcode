void moveZeroes(int* nums, int numsSize) {
    if (numsSize==0) return;
    if (numsSize==1) return;
    int i = 0, j = 1;
    while (j < numsSize && i < numsSize){
        if (nums[i]==0){
            while (j < numsSize && nums[j] == 0) {
                j++;
            }
            if (j != numsSize){
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                j++;
            }
        }
        else {
            i++;
            if (j<=i) j=i+1;
        }
    }
}
