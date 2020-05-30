#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; 
char *rev(char *str2)
{
  int i=0,len;
 len=strlen(str2);
 while(i < len--)
{
 char temp=str2[i];
 str2[i]=str2[len];
 str2[len]=temp;
 i++;
}
}
int main()
{
  char str1[50],str2[50];
  cin.getline(str1,50);
  cin.getline(str2,50);
  rev(str2);
  int x=strcmp(str1,str2);
  if(x==0)
    cout<<"It is correct";
  else
    cout<<"It is wrong";
}
