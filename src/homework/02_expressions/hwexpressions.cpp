#include "hwexpressions.h"
#include <string>
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
char get_letter_grade_using_switch(int grade){
	switch(grade/10){
		case 10:  
		case 9: return 'A';
		case 8: return 'B';
		case 7: return 'C';
		case 6: return 'D';
		default: return 'F';

		
		

	}
}
double get_gc_content(const std::string reference){
	double count = 0;
	int length = reference.size();
	for(int i = 0; i < length; i++ ){
		if(reference[i]=='C' || reference [i]=='G'){
			count++;
		}
	}
	return count/ length;
}


