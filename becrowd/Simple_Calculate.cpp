#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,u1,p2,u2;
    double pr1,pr2;
    cin>>p1>>u1>>pr1>>p2>>u2>>pr2;
    double pay = (u1*pr1) + (u2*pr2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<pay<<endl;
    return 0;
}
