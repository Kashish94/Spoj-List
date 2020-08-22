#include <bits/stdc++.h>

using namespace std;

int main()
{
    // map<char, int> M;
    // unordered_map<char, int> U;

    // string s = "Kashish Singh";
    // //add(key, value) - (map)logN, (um)O(1)
    // //erase(key) - logN, O(1)
    // for(char c : s) M[c]++; //O(NlogN) N=|s|

    // for(char c : s) U[c]++; //O(N)

    int n;
    cin >> n;
    vector<int> A(n + 5, 0);
    long long S = 0;
    for (int i = 0; i < n; i++)
        cin >> A[i], S += A[i];
    unordered_map<long long, int> first, second;
    if (S & 1)
    {
        cout << "NO" << endl;
        return 0;
        ṁ
    }
    first[A[0]] = 1;

    for (int i = 1; i < n; i++)
        second[A[i]]++;

    long long sdash = 0;
    for (int i = 0; i < n; i++)
    {
        sdash += A[i]; //sum of first i numbers
        if (sdash == S / 2)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (sdash < S / 2)
        {
            long long x = S / 2 - sdash;
            //delete element from second half,and insert into first half
            if (second[x] > 0)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            long long y = sdash - S / 2;
            if (first[y] > 0)
                cout << "YES" << endl;
            return 0;
        }
    }
    //i+1
    first[A[i + 1]]++;
    second[A[i + 1]]--;
    cout << "NO" << endl;
}
