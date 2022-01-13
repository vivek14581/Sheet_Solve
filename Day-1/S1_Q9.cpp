#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val = 0;

    cin>>n;

    int space = (2*n-3);

    char start = 'E';

    for(int i=0;i<n-1;i++)
    {
        int k = space;

        for(int j=0;j<i;j++)
            cout<<" ";

        cout<<char(start - val);

        for(int j=0;j<k;j++)
            cout<<" ";

        cout<<char(start - val);

        cout<<"\n";

        val = val + 1;

        space = space - 2;
    }

    for(int i=0;i<n-1;i++)
        cout<<" ";

    cout<<char(start-val);
    return 0;
}
