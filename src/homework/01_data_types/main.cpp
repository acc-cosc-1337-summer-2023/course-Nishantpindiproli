//write include statements
#include "data_types.cpp"
#include <iostream>

//write namespace using statement for cout


int main(){
	int num;
	std::cin>>num;
int result = multiply_numbers (num);
 std::cout<<result<<std::endl;
	int num1 = 4;
	result = multiply_numbers (num1);
	std::cout<<result<<std::endl;

	return 0;
}