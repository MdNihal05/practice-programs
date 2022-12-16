class Solution {
public:
    string toLowerCase(string s) {
       for(auto i=0;s[i];++i)
       {
           //using ascii value to change the characters
           if(s[i]>=65 && s[i]<91) s[i]+=32;
       } 
       return s;
    }
};
