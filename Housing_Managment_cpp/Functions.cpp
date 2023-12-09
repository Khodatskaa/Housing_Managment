#include "Functions.h"
#include <iostream>
using namespace std;


void Functions::report(Apartment* apartments, int numApartments, Resident* residents, int numResidents) {
    cout << "Generating Report..." << endl;

    cout << "Apartments Information:" << endl;
    for (int i = 0; i < numApartments; ++i) {
        apartments[i].displayDetails();
    }

    cout << "Residents Information:" << endl;
    for (int i = 0; i < numResidents; ++i) {
        residents[i].displayDetails();
    }
}

void Functions::addApartment(Apartment* apartments, int& numApartments) {
    cout << "Adding an Apartment..." << endl;

    Apartment newApartment;
    newApartment.inputDetails(); 
    apartments[numApartments++] = newApartment;
}

void Functions::addResident(Resident* residents, int& numResidents) {
cout << "Adding a Resident..." << endl;

	Resident newResident;
	newResident.inputDetails(); 
	residents[numResidents++] = newResident;
}

void Functions::removeApartment(Apartment* apartments, int& numApartments) {
    cout << "Removing an Apartment..." << endl;

    if (numApartments > 0) {
        --numApartments;
        cout << "Apartment removed" << endl;
    }
    else {
        cout << "No apartments to remove" << endl;
    }
}

void Functions::removeResident(Resident* residents, int& numResidents) {
    cout << "Removing a Resident..." << endl;

    if (numResidents > 0) {
        --numResidents;
        cout << "Resident removed" << endl;
    }
    else {
        cout << "No residents to remove" << endl;
    }
}

void Functions::editApartment(Apartment* apartments, int numApartments) {
    cout << "Editing an Apartment..." << endl;

    if (numApartments > 0) {
        apartments[numApartments - 1].editDetails(); 
        cout << "Apartment edited" << endl;
    }
    else {
        cout << "No apartments to edit" << endl;
    }
}

void Functions::editResident(Resident* residents, int numResidents) {
    cout << "Editing a Resident..." << endl;

    if (numResidents > 0) {
        residents[numResidents - 1].editDetails(); 
        cout << "Resident edited" << endl;
    }
    else {
        cout << "No residents to edit" << endl;
    }
}

void Functions::searchResident(Resident* residents, int numResidents) {
    cout << "Enter the name of the resident to search: ";
    string searchName;
    cin.ignore();
    getline(cin, searchName);

    bool found = false;

    for (int i = 0; i < numResidents; ++i) {
        if (residents[i].getName() == searchName) {
            cout << "Resident found:\n";
            cout << "Resident Index: " << i << ", Name: " << residents[i].getName() << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Resident not found\n";
    }
}

void Functions::searchApartment(Apartment* apartments, int numApartments) {
    cout << "Enter the apartment number to search: ";
    int searchApartmentNumber;
    cin >> searchApartmentNumber;

    bool found = false;

    for (int i = 0; i < numApartments; ++i) {
        if (apartments[i].getApartmentNumber() == searchApartmentNumber) {
            cout << "Apartment found:\n";
            cout << "Apartment Index: " << i << ", Apartment Number: " << apartments[i].getApartmentNumber() << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Apartment not found.\n";
    }
}

void Functions::displayAllResidents(Resident* residents, int numResidents) {
	cout << "Displaying all residents..." << endl;

	for (int i = 0; i < numResidents; ++i) {
		cout << "Resident Index: " << i << ", Name: " << residents[i].getName() << "\n";
	}
}

void Functions::displayAllApartments(Apartment* apartments, int numApartments) {
	cout << "Displaying all apartments..." << endl;

	for (int i = 0; i < numApartments; ++i) {
		cout << "Apartment Index: " << i << ", Apartment Number: " << apartments[i].getApartmentNumber() << "\n";
	}
}

void Functions::displayAllApartmentsByType(Apartment* apartments, int numApartments)
{
    cout << "Displaying all apartments by type..." << endl;

	for (int i = 0; i < numApartments; ++i) {
		cout << "Apartment Index: " << i << ", Apartment Number: " << apartments[i].getApartmentNumber() << ", Type: " << apartments[i].getType() << "\n";
	}
}

void Functions::displayAllApartmentsOnFloor(Apartment* apartments, int numApartments, int targetFloor)
{
    cout << "Displaying all apartments on floor " << targetFloor << "..." << endl;

	for (int i = 0; i < numApartments; ++i) {
        const Apartment& currentApartment = apartments[i];
	}
}

