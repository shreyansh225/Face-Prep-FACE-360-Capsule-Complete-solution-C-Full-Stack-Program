#include<bits/stdc++.h>
using namespace std;
 
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    //cout<<sqr_n<<" \n";
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    //cout<<sqr_n<<" \n";
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
int kpno;
cin >> kpno;
          chkkaprekar(kpno)? cout <<"Kaprekar Number": cout <<"Not a Kaprekar Number";
}
/*#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
  int n,j,count=0,a[50],b[50],i=0,x=0,y=0,z=1;
cin>>n;
int s=n*n;
//int t=s;
    while(s>0)
    {
        a[i]=s%10;
        //cout<<a[i]<<" ";
        s=s/10;
        count++;
        i++;
    }
   //cout<<"\n";
   //for(j=0;j<count;j++)
   //{
     //   b[j]=a[--i];
       // cout<<b[j]<<" ";
   //}
   
   if(count%2==0)
   {
       //x=a[0];
       for(i=0;i<count/2;i++,z=z*10)
       {
           x=x+a[i]*z;
       }
       for(i=count/2;i<count;i++,z=z*10)
       {
           y=y+a[i]*10;
       }
       //cout<<"\n";
       //cout<<"x="<<x<<" y="<<y<<"\n";
   }
   else if(count%2==1)
   {
       //x=a[0];
       for(i=0;i<=count/2;i++,z=z*10)
       {
           x=x+a[i]*z;
       }
       y=a[count/2+1];
       for(i=count/2+2;i<count;i++,z=z*10)
       {
           y=y+a[i]*10;
       }
       //cout<<"\n";
       //cout<<"x="<<x<<" y="<<y<<"\n";
   }
   if((x+y)==n)
    cout<<"Kaprekar Number";
   else if(x+y!=n)
    cout<<"Not a Kaprekar Number";  
}*/
