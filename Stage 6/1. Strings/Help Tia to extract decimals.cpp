#include<iostream>
#include<string>
int main() 
{ 
  int x=-1;
	std::string fnum;
	std::getline (std::cin,fnum);
 	x= fnum.find(".");
  if(x!=-1)
  {
  std::cout<<"Floating part is : ";
  for(int i=x+1;i<fnum.length();i++)
    std::cout<<fnum.at(i);
  }
  else
    std::cout<<"Floating part is : ";
}
