#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
   while(b !=0){
    int rem = a%b;
    a = b;
    b = rem;
   }
   cout<<a<<endl;//gec value

}
