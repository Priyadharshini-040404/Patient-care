#include <iostream>
using namespace std;

// Function to get validated yes/no input
char getYesNoInput(const string& prompt) {
    char input;
    while (true) {
        cout << prompt;
        cin >> input;

        if (input == 'y' || input == 'Y' || input == 'n' || input == 'N') {
            return input;
        } else {
            cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            cin.clear();               // Clear error flags
            cin.ignore(10000, '\n');   // Discard invalid input
        }
    }
}

int main() {
    char registered, nurseAvailable, doctorAvailable;
    char followUpNeeded, medicationNeeded;

    cout << "=== Hospital Workflow Simulation ===" << endl;

    // Step 1: Patient arrives
    cout << "Patient arrives at hospital." << endl;

    // Step 2: Keep asking until patient is registered
    do {
        registered = getYesNoInput("Is the patient already registered? (y/n): ");
        if (registered == 'n' || registered == 'N') {
            cout << "Registering patient..." << endl;
        }
    } while (registered == 'n' || registered == 'N');

    // Step 3: Keep asking until nurse is available
    do {
        nurseAvailable = getYesNoInput("Is a nurse available? (y/n): ");
        if (nurseAvailable == 'n' || nurseAvailable == 'N') {
            cout << "Waiting for nurse availability..." << endl;
        }
    } while (nurseAvailable == 'n' || nurseAvailable == 'N');

    cout << "Recording patient's health condition..." << endl;

    // Step 4: Keep asking until doctor is available
    do {
        doctorAvailable = getYesNoInput("Is a doctor available? (y/n): ");
        if (doctorAvailable == 'n' || doctorAvailable == 'N') {
            cout << "Waiting for doctor availability..." << endl;
        }
    } while (doctorAvailable == 'n' || doctorAvailable == 'N');

    cout << "Assigning patient to doctor..." << endl;

    // Step 5: Follow-up decision
    followUpNeeded = getYesNoInput("Does the patient need a follow-up appointment? (y/n): ");
    if (followUpNeeded == 'y' || followUpNeeded == 'Y') {
        cout << "Arranging follow-up appointment..." << endl;
    }

    // Step 6: Medication decision
    medicationNeeded = getYesNoInput("Does the patient need medication? (y/n): ");
    if (medicationNeeded == 'y' || medicationNeeded == 'Y') {
        cout << "Giving patient prescription..." << endl;
    }

    // Step 7: Patient leaves
    cout << "Patient leaves the hospital." << endl;
    cout << "=== Process Completed ===" << endl;

    return 0;
}

