#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    double r;
    r = (a+b)/(3.5+7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<r<<endl;
    return 0;
}
