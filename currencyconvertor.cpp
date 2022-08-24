#include<iostream>
using namespace std;

int main() 
{
// variable declarations 
	int dollars;

	float B, M, J, P;
	// input american dollars

	cout << "Enter the amount of USD you want to convert" << endl;
	cin >> dollars;
	// calculations


	B = dollars * 0.55115;
	M = dollars * 10.171;
	J = dollars * 11.231;
	P = dollars * 21.231113;


	cout << "The amount in B is " << B << endl;
	cout << "The amount in M is " << M << endl;
	cout << "The amount in J is " << J << endl;
	cout << "The amount in P is " << P << endl;

	system("pause");




}