
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution
{
public:
    string trafficLights(int n, int q, vector<vector<int>> &queries)
    {
        // code here
        string s(n, 'R');
        vector<int> prefixSum(n, 0);
        for (auto x : queries)
        {
            int start = x[0] - 1;
            int end = x[1] - 1;
            prefixSum[start]++;
            if (end + 1 < n)
            {
                prefixSum[end + 1]--;
            }
        }

        for (int i = 1; i < n; ++i)
        {
            prefixSum[i] += prefixSum[i - 1];
        }

        for (int i = 0; i < n; ++i)
        {
            if (prefixSum[i] % 3 == 1)
            {
                s[i] = 'Y';
            }
            else if (prefixSum[i] % 3 == 2)
            {
                s[i] = 'G';
            }
        }

        return s;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        int q;
        scanf("%d", &q);

        vector<vector<int>> queries(q, vector<int>(2));
        Matrix::input(queries, q, 2);

        Solution obj;
        string res = obj.trafficLights(n, q, queries);

        cout << res << "\n";
    }
}

// } Driver Code Ends
