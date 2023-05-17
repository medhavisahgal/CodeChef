#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                v.push_back(0);
            }
            else if (a[i] == 0)
            {
                v.push_back(1);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
