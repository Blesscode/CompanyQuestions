#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Century(int n)
{
    n = n / 100;

    return n;
}
int main()
{
    int n;
    cin >> n;
    cout << Century(n);
}