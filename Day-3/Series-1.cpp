#include<bits/stdc++.h>
using namespace std;
double square(double n)
{
    if(n == 1)
        return 1;

    return ((1/(n*n)) + square(n-1));
}
int main()
{
    int n;

    cin>>n;

    cout<<"Sum of series: "<< square(n);
    return 0;
}
