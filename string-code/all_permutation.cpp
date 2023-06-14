#include<bits/stdc++.h>
using namespace std;
void permutation(string t,int i,int n,string s)
{
    if(i==n-1)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int j=i;j<n;j++)
        {
            swap(s[i],s[j]);
            permutation(t,i+1,n,s);
            swap(s[i],s[j]);
        }
    }
}
int main()
{
    string s ="abc";
    string s2="abcd";
    cout<<"all permutation of string:"+s<<endl;
    permutation("",0,s.length(),s);
    cout<<"all permutation of string:"+s2<<endl;
    permutation("",0,s2.length(),s2);
}
