#ifndef Apartment_h
#define Apartment_h

#include <string>

struct Apartment {
private:
    struct ApartmentInfo {
        std::string apartmentNumber;
        int floor;
        std::string residentName;
        std::string type;
    };

    static const int MAX_APARTMENTS = 36;
    int apartmentCount = 0;
    ApartmentInfo apartmentInfo[MAX_APARTMENTS];
    std::string targetApartment;

public:
    Apartment();
    int getApartmentNumber() const; 

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

    void displayDetails();
    void inputDetails();
    void editDetails();
};

#endif
