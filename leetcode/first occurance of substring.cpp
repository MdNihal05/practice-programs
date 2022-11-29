class Solution {
public:
    int strStr(string s, string a) {
        for(auto i=0;i<s.length();++i)
        {
            string b=s.substr(i,a.length());
            if(b==a) return i;
        }
        return -1;
    }
};
