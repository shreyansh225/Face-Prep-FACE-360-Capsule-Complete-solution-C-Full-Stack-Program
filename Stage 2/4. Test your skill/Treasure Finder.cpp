#include<iostream>
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
  int b1,b2,b3,max;
  std::cin>>b1>>b2>>b3;
if((b1<b2 && b1>b3) || (b1>b2 && b1<b3))
 max=b1;
else if((b2<b1 && b2>b3) || (b2>b1 && b2<b3))
 max=b2;
else
 max=b3;
std::cout<<"The treasure is in box which has number "<<max<<"\n";
int arr[] = { b1,b2,b3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::cout<<"The code to open the box is "<<findGCD(arr, n); 
    return 0;
}
