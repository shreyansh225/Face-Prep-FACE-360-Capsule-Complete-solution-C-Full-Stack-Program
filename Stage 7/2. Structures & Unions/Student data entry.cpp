#include <iostream>
#include<string>
struct student
{
char name[50];
int roll;
int marks;
};
int main()
{
struct student s1;
std::cout<<"\nStudent Details"<<"\n";
std::cin.getline(s1.name,50);
std::cin>>s1.roll; std::cin>>s1.marks;
std::cout<<"Name: "<<s1.name<<"\n"<<"Roll: "<<s1.roll<<"\n"<<"Marks: "<<s1.marks;
}

/*#include<iostream>
#include<cstring>
using namespace std;
struct student
{
char name[50];
int roll;
float marks;
};
int main()
{
struct student s;
cin.get(s.name, 50);
std::cin>>s.roll;
std::cin>>s.marks;
std::cout<<"\nStudent Details"<< std::endl;
std::cout<<"Name: "<<s.name<<std::endl;
std::cout<<"Roll: "<<s.roll<<std::endl;
std::cout<<"Marks: "<<s.marks<<std::endl;
return 0;
}*/

/*#include <iostream>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
   student s;
  std::cin.getline(s.name,50);
  std::cin>>s.roll>>s.marks;
  std::cout<<"\nStudent Details"<<std::endl<<"Name: "<<s.name<<std::endl;
  std::cout<<"Roll: "<<s.roll<<std::endl<<"Marks: "<<s.marks;
}*/
