#include <iostream>
using namespace std;

int t, n, m, k, a, Freq[101];

int main()
{
    cin >> t;

    while (t--)
    {
        cin >> n >> m >> k;

        int notk = 0;
        for (int i = 0; i <= n; i++)
            Freq[i] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a != k)
                notk++;
            Freq[a]++;
        }

        if ((notk < m) || (m < k))
        {
            cout << "no\n";
            continue;
        }

        int poss = 1;
        for (int i = 0; i < k; i++)
        {
            if (Freq[i] == 0)
            {
                poss = 0;
                break;
            }
        }

        if (poss == 0)
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }

    return 0;
}