#include <iostream>
#include "bluesky.cpp"
using namespace std;

int main()
{
	
	system("CLS");	// clean the terminal
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout << "\t     WELCOME TO AIRLINE RESERVATION SYSTEM \n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<" ..................... MENU OPTIONS .............................\n"<<endl;




	menu();	//calling the menu function.
	seat_fill();	// initialize seat array.

	return 0;


}



