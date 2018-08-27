#include <iostream>
using namespace std;

int main ()
{
	float mile, cm, kilometer, inch, m, ft, fahrenheit, celsius;
	char choice;
	
	cout << "1. Miles to Kilometers \n";
	cout << "2. Kilometers to miles \n";
	cout << "3. Centimeter to inches\n";
	cout << "4. Inches to centimeters \n";
	cout << "5. Meters to feet \n";
	cout << "6. Feet to meters \n";
	cout << "7. Fahrenheit to celsius\n";
	cout << "8. Celsius to fahrenheit\n\n\n";
	cout <<"Enter your choice: ";
	cin >>choice;
	switch(choice)
	{
    // miles to km
    case '1' :
	{
	cout << "Please enter the number of miles"<< endl;
	cin >> mile;
	kilometer = mile * 1.609344;
	cout << "Distance in kilometers: "<< endl;
	cout << kilometer<< endl;
	break;
	}
	// km to miles
	case '2' :
	{
	cout << "Please enter the number of kilometers"<< endl;
	cin >> kilometer;
	mile = kilometer / 1.609344;
	cout << "Distance in miles: "<< endl;
	cout << mile<< endl;
	break;
	}
	//cm to inches
	case '3' :
	{
	cout << "Please enter the number of centimeters"<< endl;
	cin >> cm;
	inch = cm / 2.54;
	cout << "Distance in inches: "<< endl;
	cout << inch<< endl;
	break;
	}
	//inches to cm
	case '4' :
	{
	cout << "Please enter the number of inches"<< endl;
	cin >> inch;
	cm = inch * 2.54;
	cout << "Distance in centimeters: "<< endl;
	cout << cm<< endl;
	break;
	}
	// m to ft
    case '5' :
	{
	cout << "Please enter the number of meters"<< endl;
	cin >> m;
	ft = m * 3.2808399;
	cout << "Distance in feet: "<< endl;
	cout << ft<< endl;
	break;
	}
	// ft to m
    case '6' :
	{
	cout << "Please enter the number of feet"<< endl;
	cin >> ft;
	m = ft / 3.2808399;
	cout << "Distance in meters: "<< endl;
	cout << m<< endl;
	break;
	}
	// fahrenheit to celsius
	case '7' :
	{
	cout << "Please enter temperature in fahrenheit."<< endl;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * (9 / 5);
	cout << "Temperature in celsius: "<< endl;
	cout << celsius<< endl;
	break;
	}
	// celsius to fahrenheit
	case '8' :
	{
	cout << "Please enter temperature in celsius."<< endl;
	cin >> celsius;
	fahrenheit = (celsius * (9 / 5)) + 32;
	cout << "Temperature in fahrenheit: "<< endl;
	cout << fahrenheit<< endl;
	break;
	}
	}
	
	
    return 0;
}
