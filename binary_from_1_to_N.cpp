// Given a number, print all the binary forms from 1 to N...
// Naive approach would be loop from 1 to N and call decimal_to_binary function
// but thats time cumbersome
// An efficient approach would be to use an QUEUE :)
# include <bits/stdc++.h>
using namespace std;
int main()
    {
        queue<string> q;

        int n;
        cin>>n;
        q.push("1");
        while(n--)
            {
                string s1 = q.front();
                cout<<s1<<"\n";
                q.pop();

                string s2 = s1;
                q.push(s1.append("0"));

                q.push(s2.append("1"));

            }
        return 0;

    }