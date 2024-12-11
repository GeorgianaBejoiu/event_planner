#include <iostream>
#include <string>
#include <vector>
#include "events.h"

using namespace std;


void Event::displayInformations() const
{
	cout << "Event name:" << event_name << endl;
	cout << "Event date:" << date << endl;
	cout << "Event type:" <<  event_type << endl;
}
string Event::getEventName() const
{
	return event_name;
}
string Event::getEventDate() const
{
	return date;
}
string Event::getEventType() const
{
	return event_type;
}

void Event::chooseEvent()
{
	int choose;
	cout << "1.Wedding" << endl;
	cout << "2.Baptism" << endl;
	cout << "3.Birthday" << endl;
	cout << "4.Conference" << endl;
	cout << "5.Exit" << endl;
	cout << "Choose an option:";
	cin >> choose;
	switch (choose)
	{
		case 1:
			event_type = "Wedding";//din fisier
			break;
		case 2:
			event_type = "Baptism";
			break;
		case 3:
			event_type = "Birthday";
			break;
		case 4:
			event_type = "Conference";
			break;
		case 5:
			return;
		default:
			cout << "Invalid choice."<<endl;
			event_type = "Unknown";
			break;
	}
	cout << "You selected:" << event_type << endl;
}
void Event::inputEventDetails()
{
	cout << "Enter the name of the event:";
	cin.ignore();
	getline(cin, event_name);
	cout << "Enter the date of the event(YYYY-MM-DD):";
	getline(cin, date);//read a line, store in date
	chooseEvent();
}
	