class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        vector<int>v;
        int k=a.size();
        for(auto i=0;i<a.size();++i)
        {
            if(a[i]==val) k--;
            else{
                v.push_back(a[i]);
            }
        }
        for(auto i=v.size();i<a.size();++i){
            v.push_back(val);
        }
        a=v;
        return k;
    }
};
