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
        cout << "2. Edit Resident\n";
        cout << "3. Remove Resident\n";
        cout << "4. Add Apartment\n";
        cout << "5. Edit Apartment\n";
        cout << "6. Remove Apartment\n";
        cout << "7. Attach Resident To Apartment\n";
        cout << "8. Detach Resident From Apartment\n";
        cout << "9. Save Information\n";
        cout << "10. Load Information\n";
        cout << "11. Create Report\n";
        cout << "12. Quit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            residentManager.addResident();
            break;
        case 2:
            residentManager.editResident();
			break;
        case 3:
            residentManager.removeResident();
            break;
        case 4:
            apartmentManager.addApartment();
            break;
        case 5:
            apartmentManager.editApartment();
			break;
        case 6:
            apartmentManager.removeApartment();
            break;
        case 7:
            apartmentManager.attachResidentToApartment();
            break;
        case 8:
            apartmentManager.detachResidentFromApartment();
            break;
        case 9:
            residentManager.saveInformation();
            break;
        case 10:
            residentManager.loadInformation();
            break;
        case 11:
            residentManager.report();
            break;
        case 12:
            cout << "Exiting program\n";
            break;
        default:
            cout << "Invalid choice. Please try again\n";
            break;
        }

    } while (choice != 12);

    return 0;
}

