#include <iostream>
using namespace std;
 
int main() {
    char registered, nurseAvailable, doctorAvailable;
    char followUpNeeded, medicationNeeded;
 
    cout << "=== Hospital Workflow Simulation ===" << endl;
 
    // Step 1: Patient arrives
    cout << "Patient arrives at hospital." << endl;
 
    // Step 2: Keep asking until patient is registered
    do {
        cout << "Is the patient already registered? (y/n): ";
        cin >> registered;
 
        if (registered == 'n' || registered == 'N') {
            cout << "Registering patient..." << endl;
        }
    } while (registered == 'n' || registered == 'N');
 
    return 0;
}
 