#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int c=0;
        for (int j=1; j<=n; j++)
        {
            //vai amar input neoya ai vul hocce
            int a[n];
            cin>>a[j];
            int b[n];
            cin>>b[j];
            if (a[j]>=1 && b[j]>=1)
            {
                c++;
            }
        }
        if (c==0)
        {
            cout<<'0'<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}
