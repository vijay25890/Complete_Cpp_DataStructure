// print ulternate array values

#include <bits/stdc++.h>
using namespace std;

void print(int ar[], int n)
{
    // code here
    for (int i = 0; i < n; i = i + 2)
    {
        cout << ar[i] << " ";
    }
}

// { Driver Code Starts.
int main()
{
    int ar[100001] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    print(ar, n);
    cout << endl;
    return 0;
}
