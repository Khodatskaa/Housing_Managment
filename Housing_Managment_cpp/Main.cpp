#include "Apartment.h"
#include "Resident.h"
#include "Repository.h"
#include <iostream>

using namespace std;

int main()
{
    Resident residentManager;
    Apartment apartmentManager; 

    int choice;

    do {
        cout << "\n       Housing Management System\n";
        cout << "-------------------------------------------\n";
        cout << "\n1. Add Resident\n";
        cout << "2. Remove Resident\n";
        cout << "3. Add Apartment\n";
        cout << "4. Remove Apartment\n";
        cout << "5. Attach Resident To Apartment\n";
        cout << "6. Detach Resident From Apartment\n";
        cout << "7. Save Information\n";
        cout << "8. Load Information\n";
        cout << "9. Create Report\n";
        cout << "10. Quit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            residentManager.addResident();
            break;
        case 2:
            residentManager.removeResident();
            break;
        case 3:
            apartmentManager.addApartment();
            break;
        case 4:
            apartmentManager.removeApartment();
            break;
        case 5:
            apartmentManager.attachResidentToApartment();
            break;
        case 6:
            apartmentManager.detachResidentFromApartment();
            break;
        case 7:
            residentManager.saveInformation();
            break;
        case 8:
            residentManager.loadInformation();
            break;
        case 9:
            residentManager.report();
            break;
        case 10:
            cout << "Exiting program\n";
            break;
        default:
            cout << "Invalid choice. Please try again\n";
            break;
        }

    } while (choice != 10);

    return 0;
}

