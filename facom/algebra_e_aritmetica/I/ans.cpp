#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    long double V;
    int I;

    cin >> V >> I;

    if (I <= 5)
    {
        cout << V / 2;
    }
    else if (I < 18)
    {
        cout << V * 0.95;
    }
    else if (I < 60)
    {
        cout << V * 1.1;
    }
    else
    {
        cout << V * 0.85;
    }

    cout << endl;

    return 0;
}
