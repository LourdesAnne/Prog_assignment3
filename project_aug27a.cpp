#include <iostream>

using namespace std;
int main(){

	int operation = 0, X = 0, Y = 0;

	cout << "Arithmetic Operations\n\n";
    cout << "What operation would you like to use? ";
    cin >> operation;
	cout << " \n What is your first number? ";
	cin >> X;
	cout << " \n What is your second number? ";
	cin >> Y;
	
	if (operation == 1)
	 {
		cout << X << " + " << Y << " = " << X+Y << " ";
	 }
	else if (operation == 2)
	  {
		cout << X << " - " << Y << " = " << X-Y << " ";
	  }
	else if (operation == 3)
	  {
	 	cout << X << " * " << Y << " = " << X*Y << " ";
	  }
	 else if (operation == 4)
	  {
	  	cout << X << " / " << Y << " = " << X/Y << " ";
	  }
	 
	return 0;
    }