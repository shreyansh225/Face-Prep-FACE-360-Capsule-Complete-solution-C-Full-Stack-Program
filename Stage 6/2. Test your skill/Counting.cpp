#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char str[200],v=0,c=0,sp=0,n=0,s=0;
  cin.getline(str,200);
  int count= strlen(str);
  for(int i=0;i<count;i++)
 {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
   		v++;
   	else if((str[i]>='b' && str[i]<='z')||(str[i]>='B' && str[i] <= 'Z'))
   	    c++;
	else if(str[i]>='0' && str[i]<='9')
      	n++;
    else if(str[i]==' ')
        sp++;
    else
        s++;
  }
  printf("Vowels:%d\nConsonants:%d\nWhite Spaces:%d\nDigits:%d\nSymbols:%d",v,c,sp,n,s);
}
