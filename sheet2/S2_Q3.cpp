#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    vector<int> pascal;

    pascal.push_back(1);

    cout<<pascal[0]<<"\n";

    for(int i=2;i<=n;i++)
    {
        vector<int> temp;

        cout<<1<<" ";

        temp.push_back(1);

        for(int j=0;j<i-2;j++)
        {
            int val = pascal[j] + pascal[j+1];

            cout<<val<<" ";

            temp.push_back(val);
        }

        cout<<1<<"\n";

        temp.push_back(1);

        pascal = temp;
    }
    return 0;
}
