#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[100];
   cin>>s;
   for(int i=0;i<strlen(s);i++)
   {
    if(s[i] == 'a' || s[i]=='e' || s[i] == 'i' || s[i]=='o' || s[i] == 'u' || s[i] == 'A' || s[i]=='E' || s[i] == 'I' || s[i]=='O' || s[i] == 'U')
    {
        s[i]= '.';
           
    }
   }
cout<<s<<endl;
    return 0;
}
