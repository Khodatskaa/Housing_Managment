#include "Apartment.h"
#include <iostream>


int Apartment::getApartmentNumber() const
{
    return 0;
}

std::string Apartment::getType() const
{
    return std::string();
}

Apartment::Apartment() : apartmentCount(0) {
}

void Apartment::addApartment() {
    std::string targetName;
    std::cout << "Enter apartment number to add: ";
    std::cin >> targetName;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetName) {
            std::cout << "Apartment with number " << targetName << " already exists\n";
            return;
        }
    }

    if (apartmentCount < MAX_APARTMENTS) {
        apartmentInfo[apartmentCount].apartmentNumber = targetName;
        apartmentCount++;
        std::cout << "Apartment added successfully!\n";
    }
    else {
        std::cout << "Error: Apartment limit reached\n";
    }
}

void Apartment::removeApartment() {
    std::string targetName;
    std::cout << "Enter apartment number to remove: ";
    std::cin >> targetName;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetName) {
            apartmentInfo[i].apartmentNumber = "";
            std::cout << "Apartment removed successfully!\n";
            return;
        }
    }

    std::cout << "Apartment with number " << targetName << " not found\n";
}

void Apartment::editApartment() {
    std::cout << "Enter apartment number to edit: ";
    std::cin >> targetApartment;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetApartment) {
            std::cout << "Enter new apartment number: ";
            std::cin >> apartmentInfo[i].apartmentNumber;

            std::cout << "Enter new floor: ";
            std::cin >> apartmentInfo[i].floor;

            std::cout << "Apartment edited successfully!\n";
            return;
        }
    }

    std::cout << "Apartment with number " << targetApartment << " not found\n";
}

void Apartment::viewApartment() {
    std::string targetName;
    std::cout << "Enter apartment number to view details: ";
    std::cin >> targetName;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetName) {
            std::cout << "Apartment Number: " << apartmentInfo[i].apartmentNumber << "\n";
            std::cout << "Floor: " << apartmentInfo[i].floor << "\n";
            return;
        }
    }

    std::cout << "Apartment with number " << targetName << " not found\n";
}

void Apartment::viewAllApartments() {
    if (apartmentCount == 0) {
        std::cout << "No apartments available\n";
        return;
    }

    std::cout << "All Apartments:\n";
    for (int i = 0; i < apartmentCount; ++i) {
        std::cout << "Apartment Number: " << apartmentInfo[i].apartmentNumber << "\n";
        std::cout << "---------------------------\n";
    }
}

void Apartment::viewAllApartmentsByFloor() {
    if (apartmentCount == 0) {
        std::cout << "No apartments available.\n";
        return;
    }

    int targetFloor;
    std::cout << "Enter the floor number to view apartments: ";
    std::cin >> targetFloor;

    bool floorFound = false;

    std::cout << "Apartments on Floor " << targetFloor << ":\n";
    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].floor == targetFloor) {
            std::cout << "Apartment Number: " << apartmentInfo[i].apartmentNumber << "\n";
            std::cout << "---------------------------\n";
            floorFound = true;
        }
    }

    if (!floorFound) {
        std::cout << "No apartments found on Floor " << targetFloor << ".\n";
    }
}

void Apartment::viewAllOneTypeApartments() {
    std::string targetType;
    std::cout << "Enter the type of apartment to view: ";
    std::cin >> targetType;

    bool typeFound = false;

    std::cout << "Apartments of type " << targetType << ":\n";
    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].type == targetType) {
            std::cout << "Apartment Number: " << apartmentInfo[i].apartmentNumber << "\n";
            std::cout << "---------------------------\n";
            typeFound = true;
        }
    }

    if (!typeFound) {
        std::cout << "No apartments found of type " << targetType << "\n";
    }
}

void Apartment::attachResidentToApartment() {
    std::string targetName;
    std::cout << "Enter apartment number to attach resident: ";
    std::cin >> targetName;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetName) {
            std::cout << "Enter resident name: ";
            std::cin >> apartmentInfo[i].residentName;
            std::cout << "Resident attached successfully\n";
            return;
        }
    }

    std::cout << "Apartment with number " << targetName << " not found\n";
}

void Apartment::detachResidentFromApartment() {
    std::string targetName;
    std::cout << "Enter apartment number to detach resident: ";
    std::cin >> targetName;

    for (int i = 0; i < apartmentCount; ++i) {
        if (apartmentInfo[i].apartmentNumber == targetName) {
            apartmentInfo[i].residentName = "";
            std::cout << "Resident detached successfully\n";
            return;
        }
    }

    std::cout << "Apartment with number " << targetName << " not found\n";
}

void Apartment::displayDetails() {
	std::cout << "Apartment Number: " << apartmentInfo[0].apartmentNumber << "\n";
	std::cout << "Floor: " << apartmentInfo[0].floor << "\n";
	std::cout << "Resident Name: " << apartmentInfo[0].residentName << "\n";
	std::cout << "---------------------------\n";
}

void Apartment::inputDetails() {
	std::cout << "Enter apartment number: ";
	std::cin >> apartmentInfo[0].apartmentNumber;

	std::cout << "Enter floor: ";
	std::cin >> apartmentInfo[0].floor;

	std::cout << "Enter resident name: ";
	std::cin >> apartmentInfo[0].residentName;
}

void Apartment::editDetails() {
	std::cout << "Enter new apartment number: ";
	std::cin >> apartmentInfo[0].apartmentNumber;

	std::cout << "Enter new floor: ";
	std::cin >> apartmentInfo[0].floor;

	std::cout << "Enter new resident name: ";
	std::cin >> apartmentInfo[0].residentName;
}

void Apartment::report() {
    std::cout << "Apartments Report:\n";
    for (int i = 0; i < apartmentCount; ++i) {
        std::cout << "Apartment Number: " << apartmentInfo[i].apartmentNumber << "\n";
        std::cout << "Floor: " << apartmentInfo[i].floor << "\n";
        std::cout << "Resident Name: " << apartmentInfo[i].residentName << "\n";
        std::cout << "Type: " << apartmentInfo[i].type << "\n";
        std::cout << "---------------------------\n";
    }
}

void Apartment::getApartmentType() {
	std::cout << "Enter apartment type: ";
	std::cin >> apartmentInfo[0].type;
}

void Apartment::getFloorNumber() {
	std::cout << "Enter floor number: ";
	std::cin >> apartmentInfo[0].floor;
}

void Apartment::getFloor() {
	std::cout << "Enter floor: ";
	std::cin >> apartmentInfo[0].floor;
}

