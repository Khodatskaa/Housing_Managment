#ifndef Functions_h
#define Functions_h

#include <iostream>
#include <string>
#include "Apartment.h"
#include "Resident.h"
#include "Constants.h"

struct Functions {
private:
	Apartment* apartments;
	Resident* residents;
	int numApartments;
	int numResidents;


public:
	static void report(Apartment* apartments, int numApartments, Resident* residents, int numResidents);

	void addApartment(Apartment* apartments, int& numApartments);
	void addResident(Resident* residents, int& numResidents);
	void removeApartment(Apartment* apartments, int& numApartments);
	void removeResident(Resident* residents, int& numResidents);
	void editApartment(Apartment* apartments, int numApartments);
	void editResident(Resident* residents, int numResidents);
	void searchApartment(Apartment* apartments, int numApartments);
	void searchResident(Resident* residents, int numResidents);


};

#endif

