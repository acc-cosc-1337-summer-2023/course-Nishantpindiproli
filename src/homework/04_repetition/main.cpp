#include <string.h>
#include <iostream> 
#include "repetition.h"
using namespace std;

int main() 
{ 
    string decisions = "y";
    while (decisions.compare("y") == 0 || decisions.compare("Y") == 0) {
        cout << "Do you want to enter your DNA sequence (y/Y for yes, n/N for no)\n";
        cin >> decisions;
		if (decisions.compare("y") != 0 && decisions.compare("Y") != 0){
			break;
		}

        cout << "Enter your DNA sequence:\n";
        string DNA = "";
        cin >> DNA;

        double result = get_gc_content(DNA) *  100;
        cout << "Result: " + to_string(result) + "%\n";
    }

    return 0;
}
