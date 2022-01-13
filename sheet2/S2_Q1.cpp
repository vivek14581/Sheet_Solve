#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, low = 1;

    cin>>n;

    cout<<"\n";

    int high = n;

    int space = n - 2;

    if(n % 2 == 0)
        n = (n / 2) - 1;

    else if(n % 2 != 0)
        n = (n / 2);

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=low;j++)
            cout<<j;

        for(int j=0;j<space;j++)
            cout<<" ";

        for(int j=(low+space+1);j<=high;j++)
            cout<<j;

        low++;
        space = space - 2;

        cout<<"\n";
    }

    for(int j=1;j<=high;j++)
        cout<<j;

    cout<<"\n";

    space = space+2;

    low = low - 1;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=low;j++)
            cout<<j;

        for(int j=0;j<space;j++)
            cout<<" ";

        for(int j=(low+space+1);j<=high;j++)
            cout<<j;

        low--;
        space = space + 2;

        cout<<"\n";
    }

    return 0;
}
