#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
 int n,*ptr,m=0,w=0,i;
 cin>>n;
 ptr = (int*) malloc (n*sizeof(int));
 for(i=0;i<n;i++)
   cin>>*(ptr+i);
 for(i=0;i<n;i++)
 {  if(*(ptr+i)%2)
        m++;
  else
    w++;
 }
 cout<<m<<"\n"<<w;
 return 0;
}
