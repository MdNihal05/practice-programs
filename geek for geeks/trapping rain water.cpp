//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        // code here
        long long water=0,i=0,j=n-1;
        int maxi=INT_MIN,maxj=INT_MIN;
        while(i<j)
        {
            if(a[i]<=a[j])
            {
                maxi=max(a[i],maxi);
                water+=maxi;
                i++;
            }
            else
            {
                maxj=max(a[j],maxj);
                water+=maxj;
                j--;
            }
        }
       water+=max(a[i],a[j]);
       for(auto i=0;i<n;++i)
       water-=a[i];
        return water;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
