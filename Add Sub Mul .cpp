#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,res, res2;
    cin>>a>>b;
    if(b<0)
    {
        res = a-b;
        cout<<res<<endl;
    }
    else
    {
        res = a*b;
        res2 = a+b;
        if(res>res2)
        {
            cout<<res<<endl;
        }
        else
        {
            cout<<res2<<endl;
        }
    }
}
