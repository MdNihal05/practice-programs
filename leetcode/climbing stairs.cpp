class Solution {
public:
    int climbStairs(int n) {
        vector<int>v;
        v.push_back(0);
        v.emplace_back(1);
        v.emplace_back(2);
        v.emplace_back(3);
        for(auto i=4;i<=45;++i)
        {
            v.emplace_back(v[i-2]+v[i-1]);
        }
        return v[n];
    }
};
