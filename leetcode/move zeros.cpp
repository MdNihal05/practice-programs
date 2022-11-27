class Solution {
public:
    void moveZeroes(vector<int>& v) {
           int n=v.size(),j=0;
        vector<int>t(n,0);
     
        for(auto i=0;i<n;++i)
        {
            if(v[i]!=0)
            {
                t[j++]=v[i];
            }
        }
        v=t;
    }
};
