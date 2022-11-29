class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        if(n<2) return n;
        int t=log2(n);
        int ans=t*pow(2,t-1)+1;
        int j=n-pow(2,t);
        ans+=(j);
        countSetBits(j);
        return ans;
    }
};
