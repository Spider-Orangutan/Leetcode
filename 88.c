void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m, j = n, k = nums1Size;
    while (k && i && j){
        if (nums1[i-1] > nums2[j-1]){
            nums1[--k] = nums1[--i];
        }
        else {
            nums1[--k] = nums2[--j];
        }
    }
    while (k && j) {
        nums1[--k] = nums2[--j];
    }
}
