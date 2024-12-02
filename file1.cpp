#include <iostream>

using namespace std;

void lightControl();
void thermostatSetting();
void energyUsageCalculator();
void securitySystemLogin();
void applianceControlMenu();

int main()
{
    int terminator = 0;
    while (terminator != 6)
    {
        int userChoice;
        cout << "----------------------------\nSmart Home Automation System" << endl
             << endl
             << "1. Light Control\n2. Thermostat Settings\n3. Energy Usage Calculator\n4. Security System Login\n5. Appliance Control\n6. Exit\n";
        cout << endl
             << "Enter Choice: ";
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            lightControl();
            break;
        case 2:
            thermostatSetting();
            break;
        case 3:
            energyUsageCalculator();
            break;
        case 4:
            securitySystemLogin();
            break;
        case 5:
            applianceControlMenu();
            break;
        case 6:
            terminator += 6;
            cout << "THANK YOU FOR USING SMART HOME AUTOMATION SYSTEM © Neilan Padilla, Shiela Mae De Guzman, Janella Mae Caingcoy, 2024, BSIT-1E";
            break;
        }
    }
}

void applianceControlMenu()
{
    cout << "----------------------------\nAPPLIANCE CONTROL" << endl;
    cout << "Please select the letter of your choice. Press (X) to exit.\n"
         << endl;
    char menuChoice;
    do
    {
        cout << "A. TV\nB. Air Condition\nY. Refrigerator\nX. Exit\n";
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
            cout << "Error. (" << menuChoice << ") is not on the available menu choice\n";
            break;
        }
    } while (menuChoice != 'X');
}

void securitySystemLogin()
{
    cout << "----------------------------\nSECURITY SYSTEM LOGIN" << endl;
    cout << "Please enter the correct PIN. You only have 3 Attempts.\n"
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
            cout << "----------------------------" << endl;
            i--;
            if (i == 0)
            {
                cout << "Too many failed attempts. System Locked." << endl;
            }
        }
    }
}

void energyUsageCalculator()
{
    int i;
    int counter = 1;
    float energyUsage; // we used float if ever user input a value that has decimal
    float totalUsage = 0;
    cout << "----------------------------\nENERGY USAGE CALCULATOR" << endl;
    cout << "Weekly Energy Consumptions in kilowatt-hour.\n"
         << endl;
    for (i = 0; i != 7; i += 1)
    {
        cout << "Energy Usage Day " << counter << ": ";
        cin >> energyUsage;
        totalUsage += energyUsage;
        counter++;
    }
    cout << endl
         << "Total Energy Usage for the Week: " << totalUsage << "kWh" << endl;
}

void thermostatSetting()
{
    int mode;
    cout << "----------------------------\nTHERMOSTAT SETTING" << endl;
    cout << "Please Select Mode. Enter the numeric code for your choice.\n\n1. Cool\n2. Heat\n3. Fan\n4. Off\n";
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

void lightControl()
{
    cout << "----------------------------\nLIGHT CONTROL" << endl;
    int time;
    cout << "Enter Current Hour in 24-hour format (0 - 23): ";
    cin >> time;
    cout << endl;
    if (time >= 00 && time <= 23)
    {
        if (time >= 07 && time <= 17)
        {
            cout << "In the Current Time " << time << ":00\nLight Status: Off" << endl;
        }
        else if (time <= 6)
        {
            cout << "In the Current Time " << time << ":00\nLight Status: On" << endl;
        }
        else if (time >= 18)
        {
            cout << "In the Current Time " << time << ":00\nLight Status: On" << endl;
        }
    }
    else
    {
        cout << "INVALID TIME." << endl;
    }
}
