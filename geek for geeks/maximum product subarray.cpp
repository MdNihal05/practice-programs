//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> a, int n) {
	   long long maxi=INT_MIN,pro1=1,pro2=1,j=n-1;
	   for(auto i:a)
	   {
	       pro1*=i;
	       pro2*=a[j--];
	       maxi=max(maxi,max(pro1,pro2));
	       if(pro1==0) pro1=1;
	       if(pro2==0) pro2=1;
	   }
	   return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
