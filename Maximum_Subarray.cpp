int maxSubArray(int* nums, int numsSize) {
    if (!nums) return 0;
    if(numsSize==1) return nums[0];
    
    int prev = nums[0];
    int curr = prev;
    
    int i; 
    int max=prev;
    
    for(i=1;i<numsSize;i++){
        curr = nums[i] + (prev<0?0:prev);
        if(curr>max) max = curr;
        prev = curr;
    }
    return max;
}
