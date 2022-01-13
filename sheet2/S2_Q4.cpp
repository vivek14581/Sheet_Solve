#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            cout<<" ";

        for(int j=0;j<=i;j++)
            cout<<"*";

        cout<<"\n\n";
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        for(int j=0;j<n-i;j++)
            cout<<"*";

        cout<<"\n\n";
    }

    return 0;
}
