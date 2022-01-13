#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val = 1;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int k = val;
        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        for(int j=0;j<=i;j++)
            cout<<(k--)<<" ";

        cout<<"\n";

        val = val + 2;
    }
    return 0;
}
