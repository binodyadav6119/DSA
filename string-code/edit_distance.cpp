class Solution {
public:
    int dp[1001][1001];
    int func(string s,string t,int m,int n)
    {
        if(m==-1)return n+1;
        if(n==-1)return m+1;

        if(dp[m][n]!=-1)
        {
            return dp[m][n];
        }
        if(s[m]==t[n])
        {
            return dp[m][n]=func(s,t,m-1,n-1);
        }
        int a =func(s,t,m-1,n-1);
        int b=func(s,t,m-1,n);
        int c=func(s,t,m,n-1);
        return dp[m][n]=1+min(a,min(b,c));

    }
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        memset(dp,-1,sizeof(dp));
        return func(word1,word2,m-1,n-1);
        
    }
};