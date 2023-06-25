#include <iostream>
#include "decisions.h"
using namespace std;
int main() {
    int numerical_grade;
    char letter_grade;
    cout << "Enter the numerical grade: ";
    cin >> numerical_grade;
    numerical_grade = (int) numerical_grade;
    letter_grade = get_letter_grade_using_switch ( numerical_grade);
	char get_letter_grade_using_if(int grade);

    cout << "Letter grade: " << letter_grade << endl;

    return 0;
}