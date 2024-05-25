// C hello world program 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int * returnArray = malloc(2 *sizeof(int)); 
    int count = 0;
    for (int i = 0; i < nums1Size; i++){
        for (int j = 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                count++;
                break;
            }
        }
    }
      returnArray[0] = count;
      count = 0;
      for (int i = 0; i < nums2Size; i++){
        for (int j = 0; j < nums1Size; j++){
            if(nums1[j] == nums2[i]){
                count++;
                break;
            }
        }
    }
    *returnSize = 2;
    returnArray[1] = count;
    return returnArray;
}