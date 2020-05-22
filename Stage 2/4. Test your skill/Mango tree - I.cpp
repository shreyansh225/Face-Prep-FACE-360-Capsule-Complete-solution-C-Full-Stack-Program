#include<iostream>
using namespace std;
int main()
{
  int r,c,t,count=0;
  std::cin>>r>>c>>t;
  if(t>=1 && t<=c)
  {
    count=1;
    std::cout<<"Yes";
  }
  for(int i=1;i<=5;i++)
  {
    if(i!=5)
    { 
      if(t==(c*i) || t==((c*i)+1))
    	{
        count=1;
        std::cout<<"Yes";
        break;
      	}
    }
      else if(i==5)
    	{
     	 if(t==(c*i))
    		{
      		count=1;
        	std::cout<<"Yes";
           break;
         	}
    	}
    }
  if(count==0)
    std::cout<<"No";
}
