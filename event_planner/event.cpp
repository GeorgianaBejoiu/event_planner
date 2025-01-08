#include <iostream>
#include <string>
#include <vector>
#include "event.h"

using namespace std;

Event::Event() = default;
Event::Event(const string& event_name, const string& date, const string& event_type)
	:event_name(event_name), date(date), event_type(event_type) {}


void Event::displayInformations() const
{
	cout << "-----------------------------------------------" << endl;
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
	int category_choice, event_choice;
	
	cout << "Select an event category:" << endl;
	cout << "1.Private events" << endl;
	cout << "2.Events for children" << endl;
	cout << "3.Entertainment events" << endl;
	cout << "4.Business and professional events" << endl;
	cout << "5.Charity events" << endl;
	cout << "6.Exit" << endl;
	cout << "Choose an option:";
	cin >> category_choice;
	switch (category_choice)
	{
		case 1://Private events
			cout << "Select a type event category:" << endl;
			cout << "1.Wedding" << endl;
			cout << "2.Baptism" << endl;
			cout << "3.Birthday Party "<< endl;
			cout << "4.Baby Shower "<< endl;
			cout << "5.New Year's Eve Party" << endl;
			cout << "Other" << endl;
			cin >> event_choice;
			switch (event_choice)
			{
			case 1:
				event_type = "Wedding";
				break;
			case 2:
				event_type = "Baptism";
				break;
			case 3:
				event_type = "Birthday Party";
				break;
			case 4:
				event_type = "Baby Shower";
				break;
			case 5:
				event_type = "New Year's Eve Party";
				break;
			case 6:
				event_type = "Other";
				break;
			case 7:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 2://Events for children
			cout << "Select a type event category: "<< endl;
			cout << "1. Children's parties"<< endl;
			cout << "2.Creative workshop"<< endl;
			cout << "3.Theater for children "<< endl;
			cout << "4.Other "<< endl;
			cin >> event_choice;
			switch (event_choice)
			{
			case 1:
				event_type = "Children's parties";
				break;
			case 2:
				event_type = "Creative workshop";
				break;
			case 3:
				event_type = "Theater for children";
				break;
			case 4:
				event_type = "Other";
				break;
			case 5:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 3:
			cout << "Select a type event category: "<< endl;
			cout << "1.Concerts << endl";
			cout << "2.Theater<< endl";
			cout << "3.Film screenings "<< endl;
			cout << "4.Dance events "<< endl;
			cout << "5.Awards gala for a person or achievement" << endl;
			cout << "Other" << endl;
			cin >> event_choice;
			switch (event_choice)
			{
			case 1:
				event_type = "Concerts";
				break;
			case 2:
				event_type = "Theater";
				break;
			case 3:
				event_type = "Film screening";
				break;
			case 4:
				event_type = "Dance events";
				break;
			case 5:
				event_type = "Awards gala for a person or achievement";
				break;
			case 6:
				event_type = "Other";
				break;
			case 7:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 4:
			cout << "Select a type event category: "<< endl;
				cout << "1.Conference "<< endl;
				cout << "2.Seminar"<< endl;
				cout << "3.Workshop "<< endl;
				cout << "4.Training course "<< endl;
				cout << "Other" << endl;
			cin >> event_choice;
			switch (event_choice)
			{
			case 1:
				event_type = "Conference";
				break;
			case 2:
				event_type = "Seminar";
				break;
			case 3:
				event_type = "Workshop";
				break;
			case 4:
				event_type = "Training course";
				break;
			case 5:
				event_type = "Other";
				break;
			case 6:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			
			break;
		case 5:
			cout << "Select a type event category: "<< endl;
				cout << "1.Fundraising "<< endl;
				cout << "2.Charity balls "<< endl;
				cout << "3.Marches and awareness events "<< endl;
				cout << "Other" << endl;
			cin >> event_choice;
			switch (event_choice)
			{
			case 1:
				event_type = "Fundraising";
				break;
			case 2:
				event_type = "Charity balls";
				break;
			case 3:
				event_type = "Marches and awareness events";
				break;
			case 4:
				event_type = "Other";
				break;
			case 5:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 6:
			cout << "Exiting program." << endl;
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
	