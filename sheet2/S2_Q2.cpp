#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    int first = 0, second = 1, third = 1;

    cout<<third<<"\n";

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<third<<" ";

            first = second;

            second = third;

            third = first + second;
        }

        cout<<"\n";
    }
    return 0;
}
