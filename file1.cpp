#include <iostream>
#include <unistd.h>
using namespace std;

void lightControl();
void thermostatSetting();
void energyUsageCalculator();
void securitySystemLogin();
void applianceControlMenu();

int main()
{
    // comment
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
            cout << "THANK YOU FOR USING SMART HOME AUTOMATION SYSTEM © Neilan Padilla, 2024, BSIT-1E";
            break;
        }
    }
}

void applianceControlMenu()
{
    cout << "----------------------------\nAPPLIANCE CONTROL" << endl;
    char menuChoice;
    do
    {
        cout << "A. TV\nB. Air Condition\nY. Refrigirator\nX. Exit\n";
        cout << "Please Enter the Letter of Appliance you want to Turn On: ";
        cin >> menuChoice;
        cout << endl;
        switch (menuChoice)
        {
        case 'A':
            cout << "You turned On the TV" << endl;
            break;
        case 'B':
            cout << "Air Conditioning is On" << endl;
            break;
        case 'Y':
            cout << "Refregirator On" << endl;
            break;
        case 'X':
            cout << "EXITING";
            for (int i = 0; i <= 4; i++)
            {

                sleep(1);
                cout << ".";
                if (i == 4)
                {
                    cout << "EXIT_SUCCESS" << endl
                         << endl;
                }
            }
            break;
        default:
            cout << "\nERROR. (" << menuChoice << ") IS NOT ON THE AVAILABLE COMMANDS\n";
            break;
        }
    } while (menuChoice != 'X');
}

void securitySystemLogin()
{
    int correctPin = 123456;
    int attempt = 3;
    int attemptCounter = 3;
    int pin;

    while (attempt != 0)
    {
        cout << "----------------------------\nSECURITY SYSTEM LOGIN" << endl;
        cout << "No of Attempts Available (" << attemptCounter << ") Enter PIN: ";
        cin >> pin;

        if (pin == correctPin)
        {
            cout << "ACCESS GRANTED. YOU MAY PROCEED NOW." << endl;
            attempt -= 3;
        }
        else
        {
            cout << "ACCESS DENIED. PLEASE TRY AGAIN." << endl;
            attempt -= 1;
            attemptCounter -= 1;
        }
    }
}

void energyUsageCalculator()
{
    int i;
    int counter = 1;
    float energyUsage;
    float totalUsage = 0;
    cout << "----------------------------\nENERGY USAGE CALCULATION" << endl;
    cout << "Weekly Energy Consumptions in kilowatt-hour.\n";
    for (i = 0; i != 7; i += 1)
    {
        cout << "Energy Usage Day " << counter << ": ";
        cin >> energyUsage;
        totalUsage += energyUsage;
        counter++;
    }
    cout << "Total Usage: " << totalUsage << endl;
}

void thermostatSetting()
{
    int mode;
    cout << "----------------------------\nTHERMOSTAT SETTING" << endl;
    cout << "Please Select Mode. Enter the numeric code for your choice.\n1. Cool\n2. Heat\n3. Fan\n4. Off\n";
    cout << "Choice: ";
    cin >> mode;

    switch (mode)
    {
    case 1:
        cout << "You're Cool" << endl;
        break;
    case 2:
        cout << "In Heat eka ni Robin haha" << endl;
        break;
    case 3:
        cout << "Are you a Fan of NewJeans?" << endl;
        break;
    case 4:
        cout << "You're turned Off?? That's sad" << endl;
        break;
    default:
        cout << "That's wrong buddy, we don't accept that" << endl;
        break;
    }
}

void lightControl()
{
    cout << "----------------------------\nLIGHT CONTROL" << endl;
    int time;
    cout << "Enter Current Hour in 24-hour format (0 - 23): ";
    cin >> time;
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
        cout << "INVALID TIME.";
    }
}
