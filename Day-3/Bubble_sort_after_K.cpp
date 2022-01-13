#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;

    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"enter value of  k: ";

    cin>>k;

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    cout<<"\nArray after Kth pass: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\n\n";

    return 0;
}
