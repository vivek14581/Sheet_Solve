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
        int pos = i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[pos])
                pos = j;
        }

        swap(arr[i],arr[pos]);
    }

    cout<<"\nSorted Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\n\n";

    return 0;
}
