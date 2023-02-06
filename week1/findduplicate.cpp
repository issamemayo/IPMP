class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dupl;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                dupl=nums[i];
                return nums[i];
            }

        }
        return dupl;
    }
};