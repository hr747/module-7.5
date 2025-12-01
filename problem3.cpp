#include <bits/stdc++.h>

using namespace std;

 int main()

{string s;
    getline(cin,s);
    string w;
    cin>>w;
    int count=0;
    string temp="";
    stringstream ss(s);

    // >> ai ta use kore string stream theke ekta eka kore word niye cake kortese
    while (ss>>temp)
    {
        if(temp==w)
        {
            count++;
        }
    }
    cout<<count<<endl;
    


    return 0;
}