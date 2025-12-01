#include <bits/stdc++.h>

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
         int count_odd = 0;
    int count_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    int opration=0;
    if(count_even==count_odd)
    {
        return 0;
    }
    }
   

    return 0;
}