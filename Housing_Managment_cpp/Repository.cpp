#include "Repository.h"
#include <iostream>

Repository::Repository() {
}

void Repository::addResident() {
    residentManager.addResident();
}

void Repository::removeResident() {
    residentManager.removeResident();
}

void Repository::editResident() {
    residentManager.editResident();
}

void Repository::viewResident() {
    residentManager.viewResident();
}

void Repository::viewAllResidents() {
    residentManager.viewAllResidents();
}

void Repository::saveResidentInformation() {
    residentManager.saveInformation();
}

void Repository::loadResidentInformation() {
    residentManager.loadInformation();
}

void Repository::addApartment() {
    apartmentManager.addApartment();
}

void Repository::removeApartment() {
    apartmentManager.removeApartment();
}

void Repository::editApartment() {
    apartmentManager.editApartment();
}

void Repository::viewApartment() {
    apartmentManager.viewApartment();
}

void Repository::viewAllApartments() {
    apartmentManager.viewAllApartments();
}

void Repository::viewAllApartmentsByFloor() {
    apartmentManager.viewAllApartmentsByFloor();
}

void Repository::viewAllOneTypeApartments() {
    apartmentManager.viewAllOneTypeApartments();
}

void Repository::attachResidentToApartment() {
    apartmentManager.attachResidentToApartment();
}

void Repository::detachResidentFromApartment() {
    apartmentManager.detachResidentFromApartment();
}

void Repository::report() {
	apartmentManager.report();
}

