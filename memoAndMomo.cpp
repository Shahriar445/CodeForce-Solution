#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, k;
    cin >> a;
    cin >> b;
    cin >> k;
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both" << endl;
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo" << endl;
    }
    else if (b % k == 0 && a % k != 0)
    {
        cout << "Momo" << endl;
    }
    else
    {
        cout << "No One" << endl;
    }
    return 0;
}