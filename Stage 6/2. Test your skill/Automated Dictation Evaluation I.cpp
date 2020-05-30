#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char str1[50],str2[50];
  cin.getline(str1,50);
  cin.getline(str2,50);
  int x=strcmp(str1,str2);
  if(x==0)
    cout<<"It is correct";
  else
    cout<<"It is wrong";
}
