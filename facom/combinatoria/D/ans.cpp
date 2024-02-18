#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string s1, s2;

    cin >> N;

    while (N--)
    {
        cin >> s1 >> s2;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2)
        {
            printf("sim\n");
        }
        else
        {
            printf("nao\n");
        }
    }

    return 0;
}
