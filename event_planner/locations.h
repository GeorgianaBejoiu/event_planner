#ifndef LOCATIONS_H
#define LOCATIONS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Location
{
  private:
	  string location_name;
	  string address;
	  string services;
	  double budget;
	  int capacity;
	  int parking;
	  bool accessibility;
	  bool children_space;
	  bool availability;
  public:
	  Location(const string& location_name, const string& address, const string& services, double budget, int capacity, int parking, bool accessibility, bool children_space, bool availability)
		  :location_name(location_name), address(address), services(services), budget(budget), capacity(capacity), parking(parking), accessibility(accessibility), children_space(children_space), availability(availability){}
	  void displayInformation() const;
	  string getLocationName() const;
	  string getAddress() const;
	  string getServices() const;
	  void setBudget(double budget);
	  void setCapacity(int capacity);
	  void setParking(int parking);
	  void setAccessibility(bool accessibility);
	  void setChildrenSpace(bool children_space);
	  void setAvailability(bool availability);
};
vector <Location> readLocationFromFile(const string& fileName);//plural
void displayLocations(const vector<Location>& locations);


#endif// LOCATIONS_H

