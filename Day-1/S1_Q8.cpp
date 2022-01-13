#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val = 1, space = 1;

    cin>>n;

    for(int j=0;j<n-1;j++)
        cout<<" ";

    cout<<val++<<"\n";

    for(int i=1;i<n;i++)
    {
        int k = space;

        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        cout<<val;

        for(int j=0;j<k;j++)
            cout<<" ";

        cout<<val;

        cout<<"\n";

        val = val + 1;

        space = space + 2;
    }

    val = n - 1, space = (2*(n-1)) - 3;

    for(int i=1;i<n-1;i++)
    {
        int k = space;

        for(int j=0;j<i;j++)
            cout<<" ";

        cout<<val;

        for(int j=0;j<k;j++)
            cout<<" ";

        cout<<val;

        cout<<"\n";

        val = val - 1;

        space = space - 2;
    }

    for(int i=0;i<n-1;i++)
        cout<<" ";

    cout<<val;
    return 0;
}
