// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        // code here
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
            {
                vc.push_back(arr[i]);
            }
        }
        return vc;
    }
};

// { Driver Code Starts.
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.valueEqualToIndex(arr, n);
    if (ans.empty())
    {
        cout << "Not Found";
    }
    else
    {
        for (int x : ans)
        {
            cout << x << " ";
        }
    }
    cout << "\n";
    return 0;
}
// } Driver Code Ends