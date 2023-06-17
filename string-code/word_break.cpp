#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>dp;
int solve(string A, vector<string> &B)
{
    int size = A.length();
    if(size==0)return 1;
    if(dp[A]!=0)return dp[A];
    
    for(int i=1;i<=size;i++)
    {
        int f=0;
        string substring = A.substr(0,i);
        for(int j=0;j<B.size();j++)
        {
            if(substring.compare(B[j])==0)
            {
                f=1;
                break;
            }
        }
        if(f==1 and solve(A.substr(i,size-i),B)==1)return dp[A]=1;
    }
    return dp[A]=-1;
}
int main()
{
    string A="ilike";
    
    // string B[]= 
vector<string>B={ "like", "sam",
"sung", "samsung", "mobile",
"ice","cream", "icecream",
"man", "go", "mango" };
 int ans=solve(A,B);
if(ans==1)cout<<"1";
else  cout<<"0";
}
