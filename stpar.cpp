#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int order[n];
    for(int i = 0; i < n; i++)
        {
            cin >> order[i];
        }
        int x;
        cin >> x;
        stack<int> lane;
        int need = 1;
        int state = true;
        for(int i = 0; i < n; i++)
        {
            while(!lane.empty() && lane.top() == need)
            {
                need++;
                lane.pop();
            }
            if(order[i] == need)
            {
                need++;
            }
            else if(!lane.empty() && order[i] > lane.top())
            {
                state = false;
                break;
            }
            else
            {
                lane.push(order[i]);
            }
        }
        if(state == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        return 0;
        }