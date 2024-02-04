#include <bits/stdc++.h>

using namespace std;

int dist(int X1, int Y1, int X2, int Y2)
{
    int d = pow(X2 - X1, 2) + pow(Y2 - Y1, 2);

    return d;
}

int main()
{
    int N, X1, Y1, X2, Y2, X3, Y3;
    int d1, d2, d3;

    cin >> N;

    while (N--)
    {
        cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

        if ((X1 == X2 and Y1 == Y2) || (X1 == X3 and Y1 == Y3) || (X3 == X2 and Y3 == Y2))
        {
            cout << "nao" << endl;
        }
        else
        {
            d1 = dist(X1, Y1, X2, Y2);
            d2 = dist(X1, Y1, X3, Y3);
            d3 = dist(X2, Y2, X3, Y3);

            if (d1 + d2 == d3 || d2 + d3 == d1 || d1 + d3 == d2)
            {
                cout << "sim" << endl;
            }
            else
            {
                cout << "nao" << endl;
            }
        }
    }

    return 0;
}
