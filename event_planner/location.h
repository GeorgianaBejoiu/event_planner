#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
#include <vector>
#include <set>

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
	  set<string> availableDates;
  public:
	  Location();
	  Location(const string& location_name, const string& address, const string& services, double budget, int capacity, int parking, bool accessibility, bool children_space);
	  void displayInformation() const;
	  string getLocationName() const;
	  string getAddress() const;
	  string getServices() const;
	  void setBudget(double budget);
	  void setCapacity(int capacity);
	  void setParking(int parking);
	  void setAccessibility(bool accessibility);
	  void setChildrenSpace(bool children_space);
	  void addAvailableDate(const string& date);
	  void removeAvailableDate(const string& date);
	  bool isDateAvailable(const string& date) const;
	  void chooseLocation();


};
vector <Location> readLocationFromFile(const string& fileName);//plural
void displayLocations(const vector<Location>& locations);

#endif// LOCATIONS_H

