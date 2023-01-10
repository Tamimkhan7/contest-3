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
        int a[n],b[n];
        int c=0;
        for (int j=1; j<=n; j++)
        {
            //vai amar input neoya ai vul hocce
            cin>>a[j];

        }
        for (int j=1; j<=n; j++)
        {
            //vai amar input neoya ai vul hocce
            cin>>b[j];
        }
        for (int i=1; i<=n; i++)
        {
            if (a[i] >= 1 && b[i]>=1)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
