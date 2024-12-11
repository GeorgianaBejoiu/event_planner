#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "locations.h"

using namespace std;

void Location::displayInformation() const
{
	cout << "Location name:" << location_name << endl;
	cout << "Address:" << address << endl;
	cout << "Available services:" <<services<< endl;
	cout << "Allocated budget:" <<budget<<" RON"<< endl;
	cout << "Maximum capacity:" << capacity << " people" << endl;
	cout << "Parking spots:" << parking << endl;
	cout << "Accessibility for people with disability:" << (accessibility ? "Yes" : "No") << endl;
	cout << "Specially arranged space for children:" << (children_space ? "Yes" : "No") << endl;
	cout << "Location availability:" << (availability ? "Yes" : "No") << endl;
}
string Location::getLocationName() const
{
	return location_name;
}
string Location::getAddress() const
{
	return address;
}
string Location::getServices() const
{
	return services;
}
void Location::setBudget(double budget)
{
	this->budget = budget;
}
void Location::setCapacity(int capacity)
{
	this->capacity = capacity;
}
void Location::setParking(int parking)
{
	this->parking = parking;
}
void Location::setAccessibility(bool accessibility)
{
	this->accessibility = accessibility;
}
void Location::setChildrenSpace(bool children_space)
{
	this->children_space = children_space;
}
void Location::setAvailability(bool availability)
{
	this->availability = availability;
}
vector <Location> readLocationFromFile(const string& fileName)
{
	vector <Location> locations;
	ifstream file(fileName);
	if (!file.is_open())
	{
		cerr << "Could not open the file:" << fileName << endl;
		return locations;
	}
	string line;
	while (getline(file, line))
	{
		if (line.empty() || line[0] == '#')//verify if line is empty or is a comment
		{
			continue;
		}
		istringstream lineStream(line);
		string location_name, address, services;
		double budget;
		int capacity, parking;
		bool accessibility, children_space, availability;

		getline(lineStream, location_name, ';');
		getline(lineStream, address, ';');
		getline(lineStream, services, ';');

		lineStream >> budget; lineStream.ignore();
		lineStream >> capacity; lineStream.ignore();
		lineStream >> parking; lineStream.ignore();
		lineStream >> accessibility; lineStream.ignore();
		lineStream >> children_space; lineStream.ignore();
		lineStream >> availability; lineStream.ignore();

		Location loc(location_name, address, services, budget, capacity, parking, accessibility, children_space, availability);
		locations.push_back(loc);
	}
	file.close();
	return locations;
}
void displayLocations(const vector<Location>& locations)
{
	if (locations.empty())
	{
		cout << "No locations available for display."<<endl;
		return;
	}
	cout << "The available locations are:" << endl;
	for (const auto& location : locations)
	{
		location.displayInformation();
		cout << "---------------------------------" << endl;
	}
}