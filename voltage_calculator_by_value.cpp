/******************************************************************************
coded by: WanZ
Purpose: To calcualte voltage by entering value of power and current
Challenge: Passing by value
*******************************************************************************/
#include <iostream>

using namespace std;
int calculate_voltage(double power, double current)   {
    double volt;
    volt = power / current;
    return volt;
}
int main()
{
    double power, current;
    cout<<"Welcome to Voltage Calculator" << endl;
    cout << "Enter Power (W): ";
    cin >> power;
    cout << "Enter Current (A): ";
    cin >> current;
    cout << "\nVoltage is: " << calculate_voltage(power, current) << endl;
    

    return 0;
}
