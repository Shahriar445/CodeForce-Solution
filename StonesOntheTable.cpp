#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;

    char s[100];

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            x++;
    }
    cout << x;
}