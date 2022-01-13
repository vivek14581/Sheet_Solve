#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,x;

    cout<<"Number of terms : ";
    cin>>n;

    cout<<"\nvalue of x: ";
    cin>>x;

    double product = x*x;

    double fact = 2;

    double sum = 1 - (product / fact);

    int current = 2;

    for(int i=2;i<n;i++)
    {
        current  = current + 2;

        product *= (x * x);

        fact = fact * (current - 1) * (current);

        double val = product / fact;

        if(i % 2 != 0)
            val = (-val);

        sum = sum + val;

    }

    cout<<"sum of series: "<<sum;
    return 0;
}
