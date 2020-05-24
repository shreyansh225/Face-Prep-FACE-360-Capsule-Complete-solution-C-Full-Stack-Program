#include<iostream>
int main() 
{ 
  int b1,b2,b3,z,small,gcd;
  std::cin>>b1>>b2>>b3>>z;
  if(b1<=b2 && b1<=b3)
 		small=b1;
	else if(b2<=b1 && b2<=b3)
		 small=b2;
	else
		 small=b3;
  while(small>0)
  {
    if(b1%small==0 && b2%small==0 && b3%small==0 )
    {
      gcd=small;
      break;
    }
    small--;
  }
   if(z==gcd)
    std::cout<<"Answer is correct.";
  else
    std::cout<<"Answer is wrong.";
}


/*#include<iostream>
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
        if(result == 1) 
           return 1; 
    } 
    return result; 
} 
// Driver code 
int main() 
{ 
  int b1,b2,b3,max,z;
  std::cin>>b1>>b2>>b3>>z;
	if((b1<b2 && b1>b3) || (b1>b2 && b1<b3))
 		max=b1;
	else if((b2<b1 && b2>b3) || (b2>b1 && b2<b3))
		 max=b2;
	else
		 max=b3;
	int arr[] = { b1,b2,b3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int ans=findGCD(arr, n);
  if(z==ans)
    std::cout<<"Answer is correct.";
  else
    std::cout<<"Answer is wrong.";
    
    return 0;
}
*/
