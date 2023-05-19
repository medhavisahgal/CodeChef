#include <iostream>
#include <vector>
using namespace std;

bool ap(vector<int>& a)
{
    int n = a.size();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] - a[i] == a[k] - a[j])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            a.push_back(b);
        }
        if (ap(a) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
