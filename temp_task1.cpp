#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double temperature;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    cout << fixed << setprecision(2); // Set output to 2 decimal places

    if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temperature * 9.0/5.0) + 32;
        double kelvin = temperature + 273.15;

        cout << "\nTemperature in Fahrenheit: " << fahrenheit << " F" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
    else if (unit == 'F' || unit == 'f') {
        double celsius = (temperature - 32) * 5.0/9.0;
        double kelvin = celsius + 273.15;

        cout << "\nTemperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
    else if (unit == 'K' || unit == 'k') {
        double celsius = temperature - 273.15;
        double fahrenheit = (celsius * 9.0/5.0) + 32;

        cout << "\nTemperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    }
    else {
        cout << "\nInvalid unit entered. Please enter C, F, or K." << endl;
    }

    return 0;
}
