#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	// cout << setw(13) << left << "EndOfYear#"; 
	// cout << setw(13) << left << "PrevBalance"; 
	// cout << setw(13) << left << "Interest"; 
	// cout << setw(13) << left << "Total";
	// cout << setw(13) << left << "Payment";
	// cout << setw(13) << left << "NewBalance";
	// cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	// cout << fixed << setprecision(2); 
	// cout << setw(13) << left << 1; 
	// cout << setw(13) << left << 1000.0;
	// cout << setw(13) << left << 50.0;
	// cout << setw(13) << left << 1050.0;
	// cout << setw(13) << left << 100.0;
	// cout << setw(13) << left << 950.0;
	// cout << "\n";	
	
	double loan, interest, rate, total, pay, balance, newBalance;
	int year = 1;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest	rate per year: ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2);
		
	while(newBalance > 0){
		interest = loan * (rate/1000);
		total = loan + interest;
		newBalance = total - pay;

		cout << setw(13) << year;
		cout << setw(13) << loan;
		cout << setw(13) << interest;
		cout << setw(13) << total;
		if(pay > total){
			pay = total;
			newBalance = total - pay;
		}
		cout << setw(13) << pay;
		cout << setw(13) << newBalance;
		cout << "\n";
		year++;
	}
	


	
	return 0;
}