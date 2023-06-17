#include<bits/stdc++.h>
using namespace std;
// int n=4;
void print1(int space[][5],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<space[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printp(int p[],int n)
{
    if(p[n==1])
    {
        cout<<p[n]<<" "<<n<<" ";
    }
    else
    {
        printp(p,p[n]-1);
        cout<<p[n]<<" "<<n<<" ";
    }
}
int main()
{
    int a[4];
    for(int i=1;i<=4;i++)cin>>a[i];
    int m=6;
    int n = sizeof(a)/sizeof(a[0]);
    
    int space[n+1][n+1];
    int inf = INT_MAX;
    for(int i=1;i<=n;i++)
    {
        space[i][i]=m-a[i];
        for(int j=i+1;j<=n;j++)
        {
            space[i][j]=space[i][j-1]-a[j]-1;
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<space[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // print1(space,n);

    int ls[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(space[i][j]<0)
            {
                ls[i][j]=inf;
            }
            else if(j==n && space[i][j]>=0)
            {
                ls[i][j]=0;
            }
            else
            {
                ls[i][j]=space[i][j]*space[i][j];
            }
        }
    }

    int cost[n+1];
    int p[n+1];
    cost[0]=0;
    for(int i=1;i<=n;i++)
    {
        cost[i]=inf;
        for(int j=1;j<=i;j++)
        {
            if(cost[j-1]!=inf and ls[j][i]!=inf and cost[j-1]+ls[j][i]<cost[i])
            {
                cost[i]=cost[j-1]+ls[j][i];
                p[i]=j;

            }
        }
    }
    printp(p,n);


}