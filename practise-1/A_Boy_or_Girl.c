#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int Chcount[26]={0};
   for(int i=0;i<strlen(s);i++)
  {
    Chcount[s[i]-'a']++;
  }
  int d=0;
  for(int i=0;i<26;i++)
  {
    if(Chcount[i]>0)
    {
        d++;
    }
  }
  if(d%2==0)
  printf("CHAT WITH HER!\n");
  else
  {
  printf("IGNORE HIM!\n");
  }
    return 0;
}