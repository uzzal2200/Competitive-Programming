#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],a[210];
    cin>>s;
    strcpy(a,s);
    int i=0,j=strlen(a)-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    if(strcmp(s,a)==0)
    {
        cout<<"paildrom"<<endl;
    }
    else
   {
    cout<<"Not paildrom"<<endl;                                                                          
   }
    return 0;
}
