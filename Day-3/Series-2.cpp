#include<bits/stdc++.h>
using namespace std;
double sum_n_naturals(double n)
{
    if(n == 1)
        return 1;

    double val = (n*(n+1)) / 2;

    return ((1/val) + sum_n_naturals(n-1));
}
int main()
{
    int n;

    cin>>n;

    cout<<"Sum of series: "<< sum_n_naturals(n);
    return 0;
}
