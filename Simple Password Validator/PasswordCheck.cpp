//Password Checker
// 24 April 2021

//this program will take in a password, see if it meets criteria
//and then accept or make the use reenter the password

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

	// will hold user password
	string uPass;

	//these counters will let me know if criteria is met
	int numC = 0;
	int upC = 0;
	int specC = 0;

	cout << "Please Enter a Password." << endl;
	cout << "Passwords must contain at at least one number, one uppercase letter" << endl;
	cout << ",and one special character. " << endl;

	cin >> uPass;

	//check to see if password meets criteria
	for(int i = 0; i < uPass.size(); i++){

		if(isupper(uPass[i])){
			upC++;
		}
		if(isdigit(uPass[i])){
			numC++;
		}
		if(ispunct(uPass[i])){
			specC++;
		}
	}

	if(numC>0 && upC>0 && specC >0){
		cout << " this is a good password" << endl;
	}
	else{
		cout << "Your Password Sucks Balls." << endl;
	}

	return 0;
}