class Solution {
public:
    vector<int> searchRange(vector<int>& a, int val) {
        vector<int>v;
        int i=0,j=a.size()-1,pos1=-1,pos2;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(a[mid]==val)
            {
                pos1=mid;
                j=mid-1;
            }
            else if(val>a[mid]) i=mid+1;
            else j=mid-1;
        }
         i=0,j=a.size()-1,pos2=-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(a[mid]==val)
            {
                pos2=mid;
                i=mid+1;
            }
            else if(val>a[mid]) i=mid+1;
            else j=mid-1;
        }
        if(pos1!=-1) 
        {
            v.push_back(pos1);
            v.push_back(pos2);
        }
        else{
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};
