#include<iostream>
#include<string>

int main()
{
  //ask for user name
	std::cout<<"please input your name: \n";
  //define name
	std::string name;
	std::cin>>name;
  //show result
	std::cout<<"Hello, "<<name<<"! \n";
}