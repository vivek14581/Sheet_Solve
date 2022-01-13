#include<bits/stdc++.h>
using namespace std;
double fibonacci(double n)
{
    if(n <= 1)
        return n;

    return fibonacci(n-1)+fibonacci(n-2)+1;
}
int main()
{
    int n;

    cin>>n;

    cout<<"Sum of series: "<< fibonacci(n);
    return 0;
}
