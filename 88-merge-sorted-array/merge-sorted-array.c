void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
   
    int mS = 0;
    int nS = 0;
    m = m-1;
    n = n-1;
    int nums3[nums1Size];
    for (int i =0; i < nums1Size; i++){
        nums3[i] = nums1[i];
    }
    for(int i = 0; i < nums1Size; i++){
            if(mS > m){
                nums1[i] = nums2[nS];
                nS++;
            }
            else if (nS > n){
              nums1[i] = nums3[mS];
              mS++;
            } else {
                if (nums3[mS] <= nums2[nS]){
                    nums1[i] = nums3[mS];
                    mS ++;
                } else {
                    nums1[i] = nums2[nS];
                    nS++;
                }
            }
    }
  
}