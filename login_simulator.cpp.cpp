	//Program has a fixed username/password; user enters credentials, program says "Access Granted" or
	// "Access Denied."
	
	
	//Skills: input, string comparison, if-else
	
	#include<iostream>
	#include<string>
	using namespace std;
	int main(){
		string correctusername="Saad";
		string correctpassword="$Fast3121$";
		string enteredusername,enteredpassword;
		cout<< " Please enter username : ";
		cin>>enteredusername;
		cout<< " Please enter password : ";
		cin>>enteredpassword;
		
		if (correctusername==enteredusername && correctpassword==enteredpassword)
		{
			cout<< " Access Granted ! ";
		}
		else 
			{
			cout<< " Access Denied ! ";
		}
	}
