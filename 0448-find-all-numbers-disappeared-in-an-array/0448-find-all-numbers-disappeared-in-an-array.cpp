class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(auto i:nums){
            while(nums[i-1]!=i) swap(i,nums[i-1]);
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1) res.push_back(i+1);
        }
        return res;
    }
};