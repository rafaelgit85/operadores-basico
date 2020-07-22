#include<iostream>

using namespace std;

void main() {

	string name;
	short bYear, currentYear = 2020, age;


	cout << "  AGE CALCULATOR"<<endl;
	cout << "  --------------" << endl;
	cout << "Please, enter your Name: ";
	cin >> name;
	cout << "Enter your year of birth: ";
	cin >> bYear;

	age = currentYear - bYear;

	cout << "\nSir or Miss " << name << ", you are " << age << " years old.";










}