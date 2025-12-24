class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    for (int t = 0; t < nums.size(); t++){
     for (int r = t + 1; r < nums.size(); r++){
          if ( nums[t] + nums[r]== target){
            return {t , r};
        }   
     }  
    }
    return {};
    }  
}; 
