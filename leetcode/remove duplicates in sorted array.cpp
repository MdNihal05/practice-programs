class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(auto i=0;i<nums.size();++i)
        {
            if(v.back()!=nums[i])
            v.push_back(nums[i]);
        }
        nums=v;
        return v.size();
    }
};
