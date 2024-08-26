#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    a=a*2;
    b=b*3;
    c=c*5;
    double r;
    r=(a+b+c)/(10);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<r<<endl;
    return 0;
}
