class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>maps;
        for(int i = 0; i  < nums.size(); i++){
            int complement = target - nums[i];
            if(maps.find(complement) != maps.end()){
                return {maps[complement],i};
            }
            else{
                maps[nums[i]] = i;
            }
        }
        
        
    }
};