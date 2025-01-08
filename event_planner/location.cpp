#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <set>
#include "location.h"

using namespace std;

Location::Location() = default;
Location::Location(const string& location_name, const string& address, const string& services, double budget, int capacity, int parking, bool accessibility, bool children_space)
	:location_name(location_name), address(address), services(services), budget(budget), capacity(capacity), parking(parking), accessibility(accessibility), children_space(children_space){}

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
	cout << "Available dates:";
	if (!availableDates.empty())
	{
		for (const auto& date : availableDates)
		{
			cout << date << "";
		}
		cout << endl;
	}
	else
	{
		cout << "No dates available." << endl;
	}
	
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
void Location::addAvailableDate(const string& date)
{
	availableDates.insert(date);
}
void Location::removeAvailableDate(const string& date)
{
	availableDates.erase(date);
}
bool Location::isDateAvailable(const string& date) const
{
	return availableDates.find(date) != availableDates.end();
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
		bool accessibility, children_space;

		getline(lineStream, location_name, ';');
		getline(lineStream, address, ';');
		getline(lineStream, services, ';');

		lineStream >> budget; lineStream.ignore();
		lineStream >> capacity; lineStream.ignore();
		lineStream >> parking; lineStream.ignore();
		lineStream >> accessibility; lineStream.ignore();
		lineStream >> children_space; lineStream.ignore();

		Location loc(location_name, address, services, budget, capacity, parking, accessibility, children_space);
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
void Location::chooseLocation()
{
	int no_location;
	string selected_location;
	cout << "Choose a location from the above" << endl;
	cout << "1.Restaurantul Craiova" << endl;
	cout << "2.Bucur's Place" << endl;
	cout << "3.Timisoara Bistro" << endl;
	cout << "4.Brasov Mountain Retreat" << endl;
	cout << "5.Cluj Gourmet" << endl;
	cout << "6.La Dolce Vita"<<endl;
	cout << "7.Targu Mures Banquet Hall" << endl;
	cout << "8.Bucharest Sky Lounge" << endl;
	cout << "9.Constanta Beach Resort" << endl;
	cout << "10.Ploiesti Royal Palace" << endl;
	cout << "11.Sibiu Mountain Lodge" << endl;
	cin >> no_location;
	switch (no_location)
	{
	case 1:
		selected_location= "Restaurantul Craiova";
		break;
	case 2:
		selected_location= "Bucur's Place";
		break;
	case 3:
		selected_location ="Timisoara Bistro";
		break;
	case 4:
		selected_location="Brasov Mountain Retreat";
		break;
	case 5:
		selected_location="Cluj Gourmet" ;
		break;
	case 6:
		selected_location="La Dolce Vita";
		break;
	case 7:
		selected_location="Targu Mures Banquet Hall";
		break;
	case 8:
		selected_location= "Bucharest Sky Lounge";
		break;
	case 9:
		selected_location= "Constanta Beach Resort";
		break;
	case 10:
		selected_location="Ploiesti Royal Palace";
		break;
	case 11:
		selected_location="Sibiu Mountain Lodge";
		break;
	case 12:
		cout <<"Exiting program." << endl;
		return;
	default:
		cout << "Invalid option selected.";
		break;
	}
	cout << "-------------------------------------------------------"<<endl;
	cout << "Chosen location is:" << selected_location << endl;
}