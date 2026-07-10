#include <iostream>
using namespace std;
int main()
{
    char mode;
    int vehicleCount = 0;
    bool lights = false;
    cout << " SMART STREET LIGHTING SYSTEM " << endl;
    cout << "\nEnter D for Day or N for Night: ";
    cin >> mode;
    if(mode == 'D' || mode == 'd')
    {
        cout << "\nDay Time Detected" << endl;
        cout << "Street Lights OFF" << endl;
        return 0;
    }
    cout << "\nNight Time Detected" << endl;
    char vehicleDetected;
    cout << "\nSensor 1: Is any vehicle detected? (Y/N): ";
    cin >> vehicleDetected;
    if(vehicleDetected == 'N' || vehicleDetected == 'n')
    {
        cout << "\nNo Vehicle Detected" << endl; 
        cout << "Street Lights OFF" << endl;
        return 0;
    }
    int enteringCars;
    cout << "\nHow many vehicles entered the 100-meter road section (Max 10)? ";
    cin >> enteringCars;
    if(enteringCars > 10)
    {
        enteringCars = 10;
        cout << "Maximum limit is 10 vehicles." << endl;
    }
    vehicleCount = enteringCars;
    lights = true;
    cout << "\nSensor 1 Activated" << endl;
    cout << "Vehicles Inside Section: " << vehicleCount << endl;
    cout << "Street Lights ON" << endl;
    while(vehicleCount > 0)
    {
        int exitingCars;
        cout << "\nSensor 2: How many vehicles exited? ";
        cin >> exitingCars;
        if(exitingCars > vehicleCount)
        {
            exitingCars = vehicleCount;
        }
        vehicleCount = vehicleCount - exitingCars;
        cout << "Vehicles Remaining in Section: "
             << vehicleCount << endl;
        if(vehicleCount > 0)
        {
            cout << "Street Lights ON" << endl;
        }
        else
        {
            lights = false;
            cout << "\nAll Vehicles Have Left the Road Section" << endl;
            cout << "Street Lights OFF" << endl;
        }
    }
    cout << "\nSystem Terminated Successfully." << endl;
    return 0;
}
