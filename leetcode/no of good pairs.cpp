class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        int sum=0;
        for(auto i=0;i<nums.size();++i) sum+=m[nums[i]]++;
        return sum;
    }
};
