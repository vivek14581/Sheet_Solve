#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    int even = 1;

    int odd = 2;

    int  sum = 3;

    for(int i=2;i<n;i++)
    {
        if(i % 2 == 0)
        {
            even *= 3;
            sum += even;
        }

        else
        {
            odd *= 3;
            sum += odd;
        }


    }

    cout<<"\nSum of series: "<< sum;

    return 0;
}
