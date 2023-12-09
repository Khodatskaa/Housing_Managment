#include "Resident.h"
#include <iostream>
#include <fstream>
using namespace std;


void Resident::addResident() {
    if (residentCount < MAX_RESIDENTS) {
		    std::cout << "Enter resident name: ";
		    std::cin >> residentNames[residentCount];
		    residentCount++;
		    std::cout << "Resident added successfully\n";
	    }
	else {
		std::cout << "Error: Resident limit reached\n";
	}

}

void Resident::removeResident() {
    std::string targetName;
    std::cout << "Enter resident name to remove: ";
    std::cin >> targetName;

    for (int i = 0; i < residentCount; ++i) {
        if (residentNames[i] == targetName) {
            residentNames[i] = "";
            std::cout << "Resident removed successfully\n";
            return;
        }
    }

    std::cout << "Resident with name " << targetName << " not found\n";
}

void Resident::editResident() {
    std::cout << "Enter resident name to edit: ";
    std::cin >> targetResident;

    for (int i = 0; i < residentCount; ++i) {
        if (residentNames[i] == targetResident) {
            std::cout << "Enter new resident name: ";
            std::cin >> residentNames[i];

            std::cout << "Resident edited successfully\n";
            return;
        }
    }

    std::cout << "Resident with name " << targetResident << " not found\n";
}

void Resident::viewResident() {
    std::cout << "Enter resident name to view: ";
    std::cin >> targetResident;

    for (int i = 0; i < residentCount; ++i) {
        if (residentNames[i] == targetResident) {
            std::cout << "Resident name: " << residentNames[i] << "\n";
            return;
        }
    }

    std::cout << "Resident with name " << targetResident << " not found\n";
}

void Resident::viewAllResidents() {
    for (int i = 0; i < residentCount; ++i) {
        std::cout << "Resident name: " << residentNames[i] << "\n";
    }
}

void Resident::saveInformation() {
    std::ofstream outputFile("resident_information.txt");

    if (outputFile.is_open()) {
        for (int i = 0; i < residentCount; ++i) {
            outputFile << residentNames[i] << "\n";
        }

        outputFile.close();
        std::cout << "Resident information saved to resident_information.txt\n";
    }
    else {
        std::cout << "Error: Unable to open file for writing\n";
    }
}

void Resident::loadInformation() {
    std::ifstream inputFile("resident_information.txt");

    if (inputFile.is_open()) {
        std::string line;

        while (std::getline(inputFile, line)) {
            if (residentCount < MAX_RESIDENTS) {
                residentNames[residentCount] = line;
                residentCount++;
            }
            else {
                std::cout << "Error: Resident limit reached while loading information\n";
                break;
            }
        }

        inputFile.close();
        std::cout << "Resident information loaded from resident_information.txt\n";
    }
    else {
        std::cout << "Error: Unable to open file for reading\n";
    }
}

void Resident::report() {
    std::cout << "Resident count: " << residentCount << "\n";
}

void Resident::displayDetails() {
	std::cout << "Resident name: " << targetResident << "\n";
}

void Resident::inputDetails() {
	std::cout << "Enter resident name: ";
	std::cin >> targetResident;
}

void Resident::editDetails() {
	std::cout << "Enter new resident name: ";
	std::cin >> targetResident;
}

string Resident::getName() {
    return targetResident;
}

void Resident::setName(string name) {
	targetResident = name;
}