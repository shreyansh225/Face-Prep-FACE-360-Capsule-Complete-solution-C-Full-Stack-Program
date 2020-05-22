#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str; 
    std::cin>>str;
    reverse(str.begin(), str.end()); 
    std::cout<<str; 
    return 0;
}
