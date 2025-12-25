#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int sumstudent = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
	    sumstudent ++;
		cout << "Student [" << sumstudent << "]: ";
		cin >> grade; 
		
		      if    (grade == '0') {
		      break;             //The loop must be terminated when grade = '0'
		}else if    (grade == 'A'){ // if grade is A
			count[0] ++;
		}else if    (grade == 'B'){ // if grade is B
			count[1] ++;
		}else if    (grade == 'C'){ // if grade is C
			count[2] ++;
		}else if    (grade == 'D'){ // if grade is D
			count[3] ++;
		}else if    (grade == 'F'){ // if grade is F
			count[4] ++;
		}else{
		    cout << "Wrong input. Please input again.\n";
		    sumstudent--;
		} 
	}while(true);
	
	
	cout << "In total ";
	cout << count[0] + count[1] + count[2] + count[3] + count[4] ;
	cout <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4]       ;
	
	return 0;
}
