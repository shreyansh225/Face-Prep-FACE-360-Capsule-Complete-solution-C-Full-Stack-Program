#include <iostream>
#include <cmath>
using namespace std;
int main() {
int num, a=0 , temp, r, count=0 ;
cin>>num;
temp = num;
while (temp != 0)
{
    count++;
    temp = temp/10;
}
temp = num;
while (temp != 0) 
{
    r = temp%10;
    a = a + pow(r, count);
    temp = temp/10;
}
if (num == a)
    cout<<"Kindly proceed with encrypting";
else
    cout<<"It is not an Armstrong number";
return 0;
}
