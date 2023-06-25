//write include statement for decisions header


//Write code for function(s) code here
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
char get_letter_grade_using_if(int grade){
    if(grade >89 && grade <= 100){return 'A';}
    else if (grade >79 && grade <= 89){return 'B';}
    else if (grade >69 && grade <= 79){return 'C';}
    else if (grade >59 && grade <= 69){return 'D';}
    else {return 'F';}

}