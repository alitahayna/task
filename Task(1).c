##include <bits/stdc++.h>
using namespace std;
 int main()
{
string a,b;
char x;
cin>>a>>b;
cout<<a.size()<<" "<<b.size()<<endl;
cout<<a+b<<endl;

x=a[0];
a[0]=b[0];
b[0]=x;
cout<<a<<" "<<b<<endl;

    return 0;
}
