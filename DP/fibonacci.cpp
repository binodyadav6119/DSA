#include<bits/stdc++.h>
using namespace std;
int fib_rec(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans1=fib_rec(n-1);
    int ans2=fib_rec(n-2);
    int ans=ans1+ans2;
    return ans;
}
int main()
{
    // 0 1 2 3 4 5 6 7  8  9  10
    // 0 1 1 2 3 5 8 13 21 34 55
    int ans=fib_rec(8);
    cout<<ans<<endl;
    int f=0,s=1;
    for(int i=2;i<=10;i++)
    {
        //f s 
        //0 1 1
        int sum = f+s;
        f=s;
        s=sum;
    }
    cout<<s<<endl;

    int dp[11];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=10;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[10]<<endl;

    
}