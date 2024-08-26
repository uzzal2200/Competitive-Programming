#include<bits/stdc++.h>
using namespace std;
int main()
{
    int base,area;
    cin>>base>>area;
    int height=(2*area + base-1)/base;
    cout<<height<<endl;
    return 0;
}
