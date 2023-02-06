#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int k,l,t,w,q,s;
    if(n>2)
    {
        k= n/3;
        l = k*y;
        t = n%3;
        w = t*x;
        q =  w+l;
        cout<<q<<endl;
    }else if(n<3){
    s = n*x;
    cout<<s<<endl;
    }
}
