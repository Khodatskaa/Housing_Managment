#ifndef Resident_h
#define Resident_h

#include <string>

struct Resident {
private:
    static const int MAX_RESIDENTS = 100;
    int residentCount = 0;
    std::string residentNames[MAX_RESIDENTS];
    std::string targetResident;

public:
    void addResident();
    void removeResident();
    void editResident();
    void viewResident();
    void viewAllResidents();
    void saveInformation();
    void loadInformation();

    void report();

    void displayDetails();
    void inputDetails();
    void editDetails();
    std::string getName();
    void setName(std::string name);

};

#endif

