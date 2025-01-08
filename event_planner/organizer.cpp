#include <iostream>
#include <string>
#include <vector>
#include "organizer.h"

using namespace std;

Organizer::Organizer() = default;
Organizer::Organizer(const string& organizer_name, const string& email, const string& eventType)
	:organizer_name(organizer_name), email(email), eventType(eventType) {}


/*void Organizer::displayInformationsOrganizer() const
{
	cout << "Organizer name:" << organizer_name << endl;
	cout << "Email:" << email << endl;
	cout << "Event type:" << eventType << endl;
}*/
string Organizer::getOrganizerName() const
{
	return organizer_name;
}
string Organizer::getEmail() const
{
	return email;
}
string Organizer::getEventType() const
{
	return eventType;
}
void Organizer::chooseOrganizer()
{
	int event_category, organizer_choice;

	cout << "Select a category:" << endl;
	cout << "1.Private events" << endl;
	cout << "2.Events for children" << endl;
	cout << "3.Entertainment events" << endl;
	cout << "4.Business and professional events" << endl;
	cout << "5.Charity events" << endl;
	cout << "6.Exit" << endl;
	cout << "Choose an option:";
	cin >> event_category;
	switch (event_category)
	{
		case 1://Private events
			cout << "Choose an organizer from the list or collaborate with another organizer you want." << endl;
			cout << "1.Ana Popescu" << endl;
			cout << "2.Andra Mihai" << endl;
			cout << "3.Andrei Mihaila" << endl;
			cout << "4.Eliza Marin" << endl;
			cout << "5.Razvan Ionescu" << endl;
			cout << "6.Other" << endl;
			cin >> organizer_choice;
			switch (organizer_choice)
			{
			case 1:
				organizer_name = "Ana Popescu";
				email = "ana.popescu26@gmail.com";
				eventType = "Private events";
				break;
			case 2:
				eventType = "Andra Mihai";
				email = "andramihai47@gmail.com";
				eventType = "Private events";
				break;
			case 3:
				organizer_name = "Andrei Mihaila";
				email = "andrei.mihaila11@gmail.com";
				eventType = "Private events";
				break;
			case 4:
				organizer_name = "Eliza Marin";
				email = "eliza.marin53i@gmail.com";
				eventType = "Private events";
				break;
			case 5:
				organizer_name = "Razvan Ionescu";
				email = "razvan.ionescu87@gmail.com";
				eventType = "Private events";
				break;
			case 6:
				organizer_name = "Other";
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
			cout << "Choose an organizer from the list or collaborate with another organizer you want." << endl;
			cout << "1.Alina Popescu" << endl;
			cout << "2.Catalina Popa" << endl;
			cout << "3.Alin Georgescu "<< endl;
			cout << "4.Other" << endl;
			cin >> organizer_choice;
			switch (organizer_choice)
			{
			case 1:
				organizer_name = "Alina Tudor";
				email = "alinatudor12@gmail.com";
				eventType = "Entertainment events";
				break;
			case 2:
				organizer_name = "Catalina Popa";
				email = "catalina.popa99@gmail.com";
				eventType = "Entertainment events";
				break;
			case 3:
				organizer_name = "Alin Georgescu";
				email = "alin.georgescu76@gmail.com";
				eventType = "Entertainment events";
				break;
			case 4:
				organizer_name = "Other";
				break;
			case 5:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 3://Entertainment events
			cout << "Choose an organizer from the list or collaborate with another organizer you want." << endl;
			cout << "1.Adriana Simion" << endl;
			cout << "2.Gabriel Mihailescu" << endl;
			cout << "3.Larisa Dumitru" << endl;
			cout << "4.Laurentiu Pop" << endl;
			cout << "5.Marina Ion" << endl;
			cout << "6.Other" << endl;
			cin >> organizer_choice;
			switch (organizer_choice)
			{
			case 1:
				organizer_name = "Adriana Simion";
				email = "adrianasimion4@gmail.com";
				eventType = "Entertainment events";
				break;
			case 2:
				organizer_name = "Gabriel Mihailescu";
				email = "gabrielmihailescu5@gmail.com";
				eventType = "Entertainment events";
				break;
			case 3:
			    organizer_name = "Larisa Dumitru";
				email = "larisa.dumitru@gmail.com";
				eventType = "Entertainment events";
				break;
			case 4:
				eventType = "Laurentiu Pop";
				email = "laurentiupop72@gmail.com";
				eventType = "Entertainment events";
				break;
			case 5:
				organizer_name = "Marina Ion";
				email = "marinaion91@gmail.com";
				eventType = "Entertainment events";
				break;
			case 6:
				organizer_name = "Other";
				break;
			case 7:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}
			break;
		case 4://Business and professional events
			cout << "Choose an organizer from the list or collaborate with another organizer you want." << endl;
			cout << "1.Adrian Dumitru" << endl;
			cout << "2.Amalia Nicolaescu" << endl;
			cout << "3.Diana Stanciu" << endl;
			cout << "4.Ionut Dumitrescu" << endl;
			cout << "5.Other" << endl;
			cin >> organizer_choice;
			switch (organizer_choice)
			{
			case 1:
				organizer_name = "Adrian Dumitru";
				email = "adriandumitru.p6@gmail.com";
				eventType = "Business and professional events";
				break;
			case 2:
				organizer_name = "Amalia Nicolaescu";
				email = "amalia.nicolaescu@gmail.com";
				eventType = "Business and professional events";
				break;
			case 3:
				organizer_name = "Diana Stanciu";
				email = "dianastanciu8@gmail.com";
				eventType = "Business and professional events";
				break;
			case 4:
				organizer_name = "Ionut Dumitrescu";
				email = "dumitrescuionut1@gmail.com";
				eventType = "Business and professional events";
				break;
			case 5:
				eventType = "Other";
				break;
			case 6:
				cout << "Exiting program." << endl;
				return;
			default:
				cout << "Invalid option selected.";
				break;
			}

			break;
		case 5://Charity events
			cout << "Choose an organizer from the list or collaborate with another organizer you want." << endl;
			cout << "1.Denis Marinescu" << endl;
			cout << "2.Luciana Simionescu" << endl;
			cout << "3.Madalina Ilie" << endl;
			cout << "4.Other" << endl;
			cin >> organizer_choice;
			switch (organizer_choice)
			{
			case 1:
				organizer_name = "Denis Marinescu";
				email = "marinescu.denis@gmail.com";
				eventType = "Charity events";
				break;
			case 2:
				organizer_name= "Luciana Simionescu";
				email = "luciana.simionescu@gmail.com";
				eventType = "Charity events";
				break;
			case 3:
				organizer_name = "Madalina Ilie";
				email = "madalina.ilie8@gmail.com";
				eventType = "Charity events";
				break;
			case 4:
				eventType = "Other";
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
			cout << "Invalid choice." << endl;
			eventType = "Unknown";
			break;
	}
}
void Organizer::inputOrganizerDetails()
{
	chooseOrganizer();
	cout << "\n---Organizer details---\n";
	cout << "Organizer name:" << organizer_name << endl;
	cout << "Email:" << email << endl;
	cout << "Event type:" << eventType << endl;
}