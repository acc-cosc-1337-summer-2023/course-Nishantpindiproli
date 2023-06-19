//write include statements
#include <string.h>
#include <iostream> 
#include "repetition.h"
//write using statements
using namespace std;
int main() 
{ 
	repetition;
	string decisions = "y";
	while(decisions.compare("y")==0 || decisions.compare("Y")==0){
			cout << "do you want to enter your DNA sequence (y/Y for yes,n/N for no)\n";
			cin >> decisions;

			cout <<  "\n enter your DNA sequence \n";
			string DNA = "";
			cin >> DNA;

			double result = get_gc_content(DNA);
			cout<< "\n Result: " +  to_string(result) + "%\n";


	}
	return 0;

}
