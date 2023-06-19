#include "repetition.h" 
#include <string>
#include <algorithm>
using namespace std;
//add function(s) code here
double get_gc_content(const string reference){
	double count = 0;
	int length = reference.size();
	for(int i = 0; i < length; i++ ){
		if(reference[i]=='C' || reference [i]=='G'){
			count++;
		}
	}
	return count/ length;
}
std::string get_reverse_string(const std:: string reference){
        int length = reference.length();
    
    // Reverse the string using a loop
   std::string reverseRef = reference;
std::reverse(reverseRef.begin(), reverseRef.end());
return reverseRef;
}