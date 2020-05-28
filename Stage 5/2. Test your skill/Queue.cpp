#include<iostream>
using namespace std;
int q(int n,int m,int *a)
{
int bus=0;
for(int i=0;i<n;i++)
	bus+=a[i];
if(n==1 && m==2)
	return 1;
else
	return (bus/m)+1;
}
int main()
{
 int n,m;  
 cin>>n>>m;
 int a[n];
 for(int i=0;i<n;i++)
	 cin>>a[i];
 cout<<q(n,m,a);  
}

/*#include<iostream>
using namespace std;
int main()
{
  int n,c,i,bus=0;
  std::cin>>n>>c;
  int a[n];
  for(i=0;i<n;i++)
    std::cin>>a[i];
   for(i=0;i<n-1;i++)
  {
    if(a[i]==c)
      bus++;
     else if(a[i]+a[i+1]<=c)
       bus++;
     else
       bus++;
  }
  std::cout<<bus;
}*/
