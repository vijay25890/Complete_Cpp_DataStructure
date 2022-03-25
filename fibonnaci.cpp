#include <iostream>
using namespace std;

int main()
{
      int n, t1 = 0, t2 = 1, nextTerm = 0;

      cout << "Enter the number of terms";
      cin >> n;

      cout << "Fiboncii Series:";

      for (int i = 1; i <= n; i++)
      // print the first two terms
      {
            if (i == 1)
            {
                  cout << t1 << " ";
                  continue;
            }
            if (i == 2)
            {
                  cout << t2 << " ";
                  continue;
            }
            nextTerm = t1 + t2; // netterm=1,1,3
            t1 = t2;            // t1=0,1,1
            t2 = nextTerm;      // t2=1,1,2

            cout << nextTerm << " "; // 1,2,3
      }
      return 0;
}