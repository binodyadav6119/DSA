#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="dodsaasdk";
    int start=0,len1=1;
    for(int i=1;i<s.length();i++)
    {
        //even substring
        int l=i-1,h=i;
        while(l>=0 && h<s.length() && s[l]==s[h])
        {
            int len = h-l+1;
            if(len>len1)
            {
                start=l;
                len1=len;
            }
            l--,h++;
        }
    }


    for(int i=1;i<s.length();i++)
    {
        //odd substring
        int l=i-1,h=i+1;
        while(l>=0 && h<s.length() && s[l]==s[h])
        {
            int len = h-l+1;
            if(len>len1)
            {
                start=l;
                len1=len;
            }
            l--,h++;
        }
    }
    cout<<len1;
    cout<<start<<endl;
    cout<<s.substr(start,len1);
}