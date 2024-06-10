//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution
{
public:
    bool classArrangement(int n, vector<int> &a)
    {
        vector<int>st=a;
        sort(st.begin(),st.end());
        int mm=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=st[i])
            {
                ++mm;
            }
        }

        if (mm == 2)
        {
            return true;
        }
        else if(mm==0)
        {
            bool flag=false;
            for(int i=0; i<a.size()-1; i++)
            {
                if(a[i]==a[i+1])
                {
                    flag=true;
                }
            }
            return flag;
        }
        return false;
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

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        bool res = obj.classArrangement(n, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends
