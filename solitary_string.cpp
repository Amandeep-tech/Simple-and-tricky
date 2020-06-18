// given a string find the maximum no.of characters b/w 2 same characters
// ip = aba, op = 1
// ip = bxbacddc , op = 2(cddc) The maximum


# include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while(t--)
            {
                string s;
                cin>>s;
                int res = -1;
                int freq[26];
                memset(freq, -1, sizeof(freq));
                for(int i=0; i<s.size(); i++)
                    {
                        if(freq[s[i] - 'a'] == -1)
                            freq[s[i] - 'a'] = i;
                        else
                            res = max(res, i - freq[s[i] - 'a'] - 1);
                    }
                cout<<res<<"\n";

            }
        return 0;
    }