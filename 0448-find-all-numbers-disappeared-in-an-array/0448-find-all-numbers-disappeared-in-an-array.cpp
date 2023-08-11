class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size()+1;
        vector<int> a(n,0);
        for(int i=0;i<n-1;i++) a[nums[i]]=1;
        vector<int> res;
        for(int i=1;i<n;i++){
            if(a[i]==0) res.push_back(i);
        }
        return res;
    }
};