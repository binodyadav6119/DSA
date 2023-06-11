#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="abcd";
    string s2="dbac";
    // cout<<"test";
    int l1=s1.size();
    int l2=s2.size();
    if(l1!=l2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string s=s1+s1;
    // abcddabc  dabc
    cout<<s<<endl;
    cout<<s.find(s2)<<endl;
    if(s.find(s2)!=string::npos)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}