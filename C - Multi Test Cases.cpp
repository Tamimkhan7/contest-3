#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        while(n--)
        {
            int k;
            cin>>k;
            if(k%2 != 0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }

}
