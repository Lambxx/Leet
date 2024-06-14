int removeDuplicates(int* nums, int numsSize) {

   if (numsSize ==1){
        return 1;
   }
   // Check all unique 
    int Uniq = -1;
    for(int i = 0 ; i < numsSize -1;i++){
        if (nums[i] == nums[i+1]){
            Uniq = 0;
        }
    }
    if (Uniq == -1){
        return numsSize;
    }
    int p =1; // Value in array to be "filled in"
    int i = 1;
    int k = -1;
    for(p = 1; p< numsSize; p++){
       
        while( (i != numsSize) &&  (nums[i] == nums[i-1]) ){
            i++;
        }
         if (i == numsSize ){ // Case where at end of array
            nums[p] = -1;
            if( k == -1){
                k = p;
            }
        } else{
        nums[p] = nums[i];
        i++;
    }
    }
    return k;
}