#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{	
	long double initial_loan;
	long double interest_rate_per_year;
	long double amount_you_can_pay_per_year;
	int EndOfYear = 1;
	long double PrevBalance;
	long double Interest;
	long double Total;
	long double Payment;
	long double NewBalance;

	cout << "Enter initial loan: ";
	cin >> initial_loan;
	NewBalance = initial_loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate_per_year;
	cout << "Enter amount you can pay per year: ";
	cin >> amount_you_can_pay_per_year;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(NewBalance>0)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << EndOfYear;
		PrevBalance=NewBalance;
		cout << setw(13) << left << PrevBalance;
		Interest = PrevBalance*interest_rate_per_year/100;
		cout << setw(13) << left << Interest;
		Total = PrevBalance + Interest;
		cout << setw(13) << left << Total;
		if (Total>amount_you_can_pay_per_year) Payment = amount_you_can_pay_per_year;
		else Payment = Total;
		cout << setw(13) << left << Payment;
		NewBalance = Total-Payment;
		cout << setw(13) << left << NewBalance << endl;

		EndOfYear++;
	}
	return 0;
}
