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
    // Step 3: Keep asking until nurse is available
    do {
        cout << "Is a nurse available? (y/n): ";
        cin >> nurseAvailable;
 
        if (nurseAvailable == 'n' || nurseAvailable == 'N') {
            cout << "Waiting for nurse availability..." << endl;
        }
    } while (nurseAvailable == 'n' || nurseAvailable == 'N');
    cout << "Recording patient's health condition..." << endl;
 
    // Step 4: Keep asking until doctor is available
    do {
        cout << "Is a doctor available? (y/n): ";
        cin >> doctorAvailable;
 
        if (doctorAvailable == 'n' || doctorAvailable == 'N') {
            cout << "Waiting for doctor availability..." << endl;
        }
    } while (doctorAvailable == 'n' || doctorAvailable == 'N');
 
    cout << "Assigning patient to doctor..." << endl;
 
    // Step 5: Follow-up decision
    cout << "Does the patient need a follow-up appointment? (y/n): ";
    cin >> followUpNeeded;
 
    if (followUpNeeded == 'y' || followUpNeeded == 'Y') {
        cout << "Arranging follow-up appointment..." << endl;
    }
 

 
    return 0;
}
 