#ifndef Repository_h
#define Repository_h

#include "Resident.h"
#include "Apartment.h"

struct Repository {
public:
    Repository();

    void addResident();
    void removeResident();
    void editResident();
    void viewResident();
    void viewAllResidents();
    void saveResidentInformation();
    void loadResidentInformation();

    void addApartment();
    void removeApartment();
    void editApartment();
    void viewApartment();
    void viewAllApartments();
    void viewAllApartmentsByFloor();
    void viewAllOneTypeApartments();
    void attachResidentToApartment();
    void detachResidentFromApartment();

    void report();

private:
    Resident residentManager;
    Apartment apartmentManager;
};

#endif

