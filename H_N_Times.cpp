#include <bits/stdc++.h>

using namespace std;
void print(int n,char z)
{
    for(int i=0;i<n;i++)
    {
        cout<<z;
        if(i!=n-1)
        cout<<" ";
    }
    cout<<endl;
}
int main()

{
int t;
cin>>t;
while (t--)
{
    /* code */
    int n;
    char z;
    cin>>n>>z;
    print(n,z);
}

    return 0;
}