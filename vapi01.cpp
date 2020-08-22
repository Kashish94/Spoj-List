#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,ans=0,key[26];
    string s="";
    cin >> t;
    while(t--)
    {
        cin >> n;
        while (s == "")
        cin >> s;
        for(int i = 0;i < 26; i++)
        key[i] = 0;
        for(int i = 0;i < s.length(); i++)
        {
            if(i % 2 == 0)
            {
                key[((int) s[i]) - 97]++;
            }
            else
            {
                if (key[((int) s[i]) - 65] == 0)
                ans++;
                else
                key[((int) s[i]) - 65]--;
            }
        }
        cout << ans << endl;
    }
}