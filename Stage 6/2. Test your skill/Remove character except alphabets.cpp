#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char str[50];
  cin.getline(str,50);
  int count= strlen(str);
  for(int i=0;i<count;i++)
 {
   if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i] <= 'Z'))
   {
     std::cout<<str[i];
       str[i]='\0';
   }
 }
}
