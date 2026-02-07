//Best solution 
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

//My first attempt
int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    if (numsSize==0) return count;
    if (numsSize==1) return (nums[0]==val?0:1);
    int i = 0, j = 1;
    while (j < numsSize && i < numsSize){
        if (nums[i]==val){
            while (j < numsSize && nums[j] == val) {
                j++;
            }
            if (j != numsSize){
                nums[i] = nums[j];
                nums[j] = val;
                i++;
                j++;
                count++;
            }
        }
        else {
            i++;
            if (j<=i) j=i+1;
        }
    }
    return count;
}


