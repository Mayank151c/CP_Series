int maxSubArray(vector<int>& nums) {
    
    int max_result = nums[0];
    
    // store the maximum value from nums which will be the minimum desired result.
    for(int i=0;i<nums.size();i++) {
        
        if(max_result<nums[i]) {
            max_result=nums[i];
        }
    }
    
    
    int min = 0;
    
    for(int i=0; i<nums.size(); i++) {
        
        min += nums[i];
        
        if(min <= 0) {
            min = 0;
        }
        else if(l < min) {
            max_result = min;
        }
    }
    
    return max_result;
}