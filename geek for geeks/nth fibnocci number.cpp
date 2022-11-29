//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int nthFibonacci(long long int n){
         long long int fib=0,a=0,b=1;
    for(auto i=1;i<n;++i)
            {
                fib=(a+b)%1000000007;
                a=b;
                b=fib;
            }
            return fib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
