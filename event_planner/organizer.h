#ifndef ORGANIZER_H
#define ORGANIZER_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Organizer
{
private:
	string organizer_name;
	string email;
	string eventType;
public:
	Organizer();
	Organizer(const string& organizer_name, const string& email, const string& eventType);
	void displayInformationsOrganizer() const;
	string getOrganizerName() const;
	string getEmail() const;
	string getEventType() const;
	void chooseOrganizer();
	void inputOrganizerDetails();


};


#endif