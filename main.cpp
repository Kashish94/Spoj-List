#include "stdafx.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//comparator function
bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    vector<int> A = {11, 2, 3, 14};

    //Accessing vector elements
    cout << A[1] << endl;

    sort(A.begin(), A.end()); //Merge Sort-O(NlogN)

    //2,3,11,14
    //binary search in O(log N)
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      //false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true

    //2,3,11,14,100
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //2,3,11,14,100,100,100,100,100
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100,123

    //  vector<int>::iterator it = lower_bound(A.begin(), A.end(),100);
    auto it = lower_bound(A.begin(), A.end(), 100);  // >=
    auto it2 = upper_bound(A.begin(), A.end(), 100); // >
    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //5 O(1) time

    sort(A.begin(), A.end(), f); //to sort in decreasing order

    vector<int>::iterator it3;

    //to print the elements of vector
    //Method-1

    //  for(it3 = A.begin(); it3 != A.end(); it3++)
    //  {
    //      cout << *it3 << " ";
    //  }
    //  cout << endl;

    //Method-2
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;

    //iterating by reference to update the values of vector
    for (int &x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
}
/* Vectors can perform operation only in sorted array where as in sets at any time the complete collection is sorted and you don't have to perform
a sort operation explicitly whenever you are inserting some new number which is in the case of vector and sorting is in (NlogN) time*/
void setDemo()
{
    //set internally maitains the ascending order sequence in thse numbers
    set<int> S;
    S.insert(1); // O(logN)
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    S.erase(1);

    for (int x : S)
        cout << x << " ";
    cout << endl;
    //-10,-1,2

    auto it = S.find(-1);
    if (it == S.end())
    {
        cout << "not present\n";
    }
    else
    {
        cout << "present\n";
        cout << *it << endl;
    }
    auto it2 = S.lower_bound(-1); // <= O(log N)
    auto it3 = S.upper_bound(0);  // <
    cout << *it2 << " " << *it3 << endl;

    auto i4 = S.upper_bound(2);
    if (i4 == S.end())
    {
        cout << "ooops!sorry can't find something like this!\n";
    }
}

void mapDemo()
{
    map<int, int> A;
    A[1] = 100; //O(log N)
    A[2] = -1;
    A[3] = 200;
    A[100000232] = 1;
    // A.find(key)
    // A.erase(key)

    map<char, int> cnt;
    string x = "Kashish Singh";

    for (char c : x)
    {
        cnt[c]++;
    }

    cout << cnt['a'] << " " << cnt['z'] << endl;
}
void PowerOfStl()
{
    // [x,y]
    /*add[2,3] 
    add [10,20]
    add [401,450]
    give me the interval 401*/
    set<pair<int, int>> S;

    S.insert({401, 450});
    S.insert({10, 20});
    S.insert({2, 3});
    S.insert({30, 400});

    //to compare two pairs {a,b} and {c,d} -- (a<c) or (a == c and b<d)

    //2,3
    //10,20
    //30,400
    //401,450

    int point;
    cin >> point;
    auto it = S.upper_bound({point, INT_MAX});
    if (it == S.begin())
    {
        cout << "The given point is not lying in any interval..\n";
        return;
    }
    it--;
    pair<int, int> current = *it;
    if (current.first <= point && point <= current.second)
    {
        cout << "yes,it's present:" << current.first << " " << current.second << endl;
    }
    else
    {
        cout << "The given point is not lying in any interval..\n";
    }
}

int main()
{
    //C++ STL
    setDemo();
}