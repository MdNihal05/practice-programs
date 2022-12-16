class Solution {
public:
    int searchInsert(vector<int>& a, int val) {
        int i=0,j=a.size()-1;
        while(i<j){
             
            int m=i+(j-i)/2;
            if(a[m]==val){
                return m;
            }
            else if(a[m]>val){
                j=m-1;
            }
            else i=m+1;
           
        }
        if(a[i+(j-i)/2]<val) return i+1;
        else return i;

    }
};
