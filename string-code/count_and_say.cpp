#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    if(n==1)cout<<"1"<<endl;
    if(n==2)cout<<"11"<<endl;
    string s="11";
    // int c=1;
    for(int i=3;i<=n;i++)
    {
        string t="";
        s=s+"$";
        // cout<<"inside if:"<<s;
        int c=1;
        for(int j=1;j<s.length();j++)
        {
            if(s[j]!=s[j-1])
            {
                t=t+to_string(c);
                t=t+s[j-1];
                c=1;
            }
            else
            {
                c++;
            }
            // cout<<t<<endl;
            
        }
        s=t;
        

    }
    cout<<s<<endl;
}