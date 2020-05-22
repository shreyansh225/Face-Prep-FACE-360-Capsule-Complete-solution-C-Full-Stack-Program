#include<iostream>
int main()
{
int n,i,j=0;
 std::cin>>n;
 for(i=1; i <= n; i++)
 {
  if ((n % i) == 0)
    j++;
 }
 if(j==2)
	std::cout<<"Eligible";
else
  std::cout<<"Not eligible";
}
/*#include <iostream>
using namespace std;
int main()
{
int n, i, m=0, flag=0;
cin >> n;
m=n/2;
for(i = 2; i <= m; i++)
{
if(n % i == 0)
{
cout<<"Not eligible"<<endl;
flag=1;
break;
}
}
if (flag==0)
cout << "Eligible"<<endl;
return 0;
}
#include <iostream>
using namespace std;

int main() {
   int n, i;
   bool isPrime = true;
   cin >> n;
if(n==2)
  cout << "Eligible";
else
	{
   for (i = 2; i <=n/2; ++i) {
      if (n % i == 0) {
         isPrime = false;
         break;
      }
   }
   if (isPrime)
      cout << "Eligible";
   else
      cout<< "Not eligible";
   return 0;
	}
}*/
