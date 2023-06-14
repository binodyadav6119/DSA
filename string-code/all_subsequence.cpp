#include<bits/stdc++.h>
using namespace std;
void func(string t,int i,int n,string s)
{
    if(i==n)
    {
        cout<<t<<endl;
    }
    else
    {
        func(t,i+1,n,s);
        func(t+s[i],i+1,n,s);
    }
}
int main()
{
    string s ="abc";
    string s2="abcd";
    cout<<"all substring of string:"+s<<endl;
    func("",0,s.length(),s);
    cout<<"all substring of string:"+s2<<endl;
    func("",0,s2.length(),s2);
}
