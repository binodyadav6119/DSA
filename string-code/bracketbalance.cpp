class Solution {
public:
    int minSwaps(string s) {
        vector<int>v;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
                v.push_back(i);
        }
        int count=0;
        int idx=0;
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
            {
                idx++;
                count++;
            }
            else
            {
                count--;
                if(count<0)
                {
                    ans+=(v[idx]-i);
                    swap(s[i],s[v[idx]]);
                    
                    count=1;
                    idx++;
                }
            }
        }
        return ans;
        
    }
};