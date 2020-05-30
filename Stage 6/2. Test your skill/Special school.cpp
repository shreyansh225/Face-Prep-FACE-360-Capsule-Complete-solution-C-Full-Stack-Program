#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; 
char *rev(char *str2)
{
  int i=0,j=0;
  while(str2[j+1]) j++;
 while(i < j)
{
char temp=str2[i];
str2[i]=str2[j];
str2[j]=temp;
i++;
j--;
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
