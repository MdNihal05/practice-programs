class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(auto i=0;i<nums.size();++i) m[nums[i]]++;
        vector<int>v;
        for(auto &i:m){
             if(i.second>=2) {
                 v.push_back(i.first);
                 v.push_back(i.first);
             }
             else{
                 v.push_back(i.first);
             }
             }
        nums=v;
        return nums.size();
    }
};
