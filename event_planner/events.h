#ifndef EVENTS_H
#define EVENTS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Event
{
private:
	string event_name;
	string date;
	string event_type;
public:
	Event() = default;
	Event(const string& event_name,const string& date,const string& event_type)
		:event_name(event_name), date(date), event_type(event_type){}

	    void displayInformations() const;
		string getEventName() const;
		string getEventDate() const;
		string getEventType() const;
		void chooseEvent();
		void inputEventDetails();

};

#endif