//Project: Simple Interest Calculator
//What it does:
//The program asks the user for three values — Principal (the initial amount), Rate of interest (in %),
// and Time (in years) — then calculates the Simple Interest using the formula:
//Simple Interest = (Principal × Rate × Time) / 100
//It should also display the Total Amount (Principal + Interest), and format the output cleanly (e.g., showing
// 2 decimal places for currency-style numbers).
//Requirements:
//
//Ask the user to enter Principal, Rate, and Time
//Calculate Simple Interest using the formula above
//Calculate Total Amount = Principal + Interest
//Display both values, formatted to 2 decimal places
//Stretch goal (input validation): reject negative values for Principal, Rate, or Time with an error message
#include<iostream>
using namespace std;
int main(){
	double initial_amount;
	float  Rate_of_interest ;
	double Time;
	
	
	cout<<" Please enter Initial amount : ";
	cin>>initial_amount;
	cout<<" Please enter Rate of interest : ";
	cin>>Rate_of_interest;
	cout<<" Please enter Time: ";
	cin>>Time;
	
	double Simple_Interest =(initial_amount * Rate_of_interest * Time) / 100.0;
	double Total_Amount (initial_amount + Simple_Interest
	);
	cout<<" Simple_Interest : "<<Simple_Interest<<endl;
	cout<<" Total Amount : "<<Total_Amount<<endl;
	
}
