#include<iostream>

int main()
{
   int age;
   std::cout << "Enter your Age :";
   std::cin >> age;
   	if(age>18)
	{
		std::cout << "eligible for voting";
	}
	else
	{
		std::cout << " not eligible for voting";	
	}
	return 0;
}
