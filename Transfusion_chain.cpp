#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int a = 0, b = 0, ab = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == "A")
                a++;
            else if (v[i] == "B")
                b++;
            else if (v[i] == "AB")
                ab++;
            else if (v[i] == "O")
                o++;
        }

        int chain = o + max(a, b) + ab;
        cout << chain << endl;
    }

    return 0;
}
