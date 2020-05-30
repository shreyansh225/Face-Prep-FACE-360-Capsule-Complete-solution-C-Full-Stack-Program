#include <cstring>
#include <iostream>
using namespace std;
int main()
{
  string str;
  int len,count=0;
  getline(cin, str);
  for(int i=0;i<str.length();i++)
    if(str[i]==' ')
      count++;
  if(count+1 >10)
    cout<<"Caption not eligible for the contest";
  else
    cout<<"Caption eligible for the contest";
}

/*
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
  char str[100];
  int len,count=0;
  cin.getline(str,100);
  len=strlen(str);
  for(int i=0;i<strlen(str);i++)
    if(str[i]==' ')
      count++;
  if(count+1>10)
    cout<<"Caption not eligible for the contest";
  else
    cout<<"Caption eligible for the contest";
}
*/
