//4. Multiplication Table Generator
//User enters a number, program prints its multiplication table (1 to 10).
//Skills: loops, basic output
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<" Please enter a number : ";
	cin>>number;

	
	for (int i=1;i<11;i++)
	{
int result;
		
		result=number*i;
		cout<<number<<"*"<<i<<"="<<result<<endl;
		
		
	}
	
}
