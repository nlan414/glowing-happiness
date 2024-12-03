#include <iostream>

using namespace std;

int main()
{
    string userName;
    cout << "Welcome to Smart Home Automation System" << endl;
    cout << "Please enter your name: ";
    cin >> userName;
    cout << "Hello " << userName << " enjoy your use of Smart Home Automation System" << endl;
    int userChoice;
    while (userChoice != 6)
    {
        cout << "--------------------------------------------------------" << endl
             << "Current User: " << userName << endl
             << "Smart Home Automation System" << endl
             << endl
             << "1. Light Control" << endl
             << "2. Thermostat Settings" << endl
             << "3. Energy Usage Calculator" << endl
             << "4. Security System Login" << endl
             << "5. Appliance Control" << endl
             << "6. Exit" << endl;
        cout << endl
             << "Enter Choice: ";
        cin >> userChoice;
        if (userChoice == 1)
        {
            cout << "--------------------------------------------------------" << endl
                 << "LIGHT CONTROL" << endl;
            int time;
            cout << "Enter Current Hour in 24-hour format (0 - 23): ";
            cin >> time;
            cout << endl;
            if (time >= 00 && time <= 23)
            {
                if (time >= 07 && time <= 17)
                {
                    cout << "In the Current Time " << time << ":00" << endl
                         << "Light Status: Off" << endl;
                }
                else if (time <= 6)
                {
                    cout << "In the Current Time " << time << ":00" << endl
                         << "Light Status: On" << endl;
                }
                else if (time >= 18)
                {
                    cout << "In the Current Time " << time << ":00" << endl
                         << "Light Status: On" << endl;
                }
            }
            else
            {
                cout << "INVALID TIME." << endl;
            }
        }
        else if (userChoice == 2)
        {
            int mode;
            cout << "--------------------------------------------------------" << endl
                 << "THERMOSTAT SETTING" << endl;
            cout << "Please Select Mode. Enter the numeric code for your choice." << endl
                 << endl
                 << "1. Cool" << endl
                 << "2. Heat" << endl
                 << "3. Fan" << endl
                 << "4. Off" << endl;
            cout << "Choice: ";
            cin >> mode;
            cout << endl;

            switch (mode)
            {
            case 1:
                cout << "You set the mode to Cool" << endl;
                cout << "Thermostat Status : COOL" << endl;
                break;
            case 2:
                cout << "You set the mode to Heat" << endl;
                cout << "Thermostat Status : HEAT" << endl;
                break;
            case 3:
                cout << "You set the mode to Fan" << endl;
                cout << "Thermostat Status : FAN" << endl;
                break;
            case 4:
                cout << "You set the mode to Off" << endl;
                cout << "Thermostat Status : OFF" << endl;
                break;
            default:
                cout << "Invalid Mode. Please try again" << endl;
                break;
            }
        }
        else if (userChoice == 3)
        {
            int counter;
            float energyUsage; // we used float if ever user input a value that has decimal
            float totalUsage = 0;
            cout << "--------------------------------------------------------" << endl
                 << "ENERGY USAGE CALCULATOR" << endl;
            cout << "Weekly Energy Consumptions in kilowatt-hour (kWh)." << endl
                 << endl;
            for (counter = 1; counter != 8; counter++)
            {
                cout << "Energy Usage Day " << counter << ": ";
                cin >> energyUsage;
                totalUsage += energyUsage;
            }
            cout << endl
                 << "Total Energy Usage for the Week: " << totalUsage << " kWh" << endl;
        }
        else if (userChoice == 4)
        {
            cout << "--------------------------------------------------------" << endl
                 << "SECURITY SYSTEM LOGIN" << endl;
            cout << "Please enter the correct PIN. You only have 3 Attempts." << endl
                 << endl;
            int correctPin = 12345;
            int pin;
            int i = 3;
            while (pin != correctPin && i > 0)
            {
                cout << "Attempt Available: " << i << endl;
                cout << "Enter Pin: ";
                cin >> pin;
                cout << endl;
                if (pin == correctPin)
                {
                    cout << "Access Granted." << endl;
                }
                else
                {
                    cout << "Incorrect PIN. Try again." << endl;
                    cout << "--------------------------------------------------------" << endl;
                    i--;
                    if (i == 0)
                    {
                        cout << "Too many failed attempts. System Locked." << endl;
                    }
                }
            }
        }
        else if (userChoice == 5)
        {
            cout << "--------------------------------------------------------" << endl
                 << "APPLIANCE CONTROL" << endl;
            cout << "Please select the letter of your choice. Press (X) to exit." << endl
                 << endl;
            char menuChoice;
            do
            {
                cout << "A. TV" << endl
                     << "B. Air Condition" << endl
                     << "Y. Refrigerator" << endl
                     << "X. Exit" << endl;
                cout << "Choice: ";
                cin >> menuChoice;
                cout << endl;
                switch (menuChoice)
                {
                case 'A':
                    cout << "TV turned on" << endl;
                    break;
                case 'B':
                    cout << "Air Condition turned on" << endl;
                    break;
                case 'Y':
                    cout << "Refrigerator turned on" << endl;
                    break;
                case 'X':
                    cout << "EXITING THE MENU... EXIT SUCCESS" << endl;
                    break;
                default:
                    cout << "Error. (" << menuChoice << ") is not on the available menu choice. Try again." << endl;
                    break;
                }
            } while (menuChoice != 'X');
        }
        else if (userChoice == 6)
        {
            cout << "Thank You for using Smart Home Automation System";
        }
        else
        {
            cout << "Invalid Choice. Try again." << endl;
        }
    }
}