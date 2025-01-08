#include <iostream>
#include <string>
#include <vector>
#include "provider.h"

using namespace std;

Provider::Provider() = default;
Provider::Provider(const string& providerName, const string& providerEmail, const string& field)
	:providerName(providerName), providerEmail(providerEmail), field(field){}

string Provider::getProviderName()const
{
	return providerName;
}

string Provider::getProviderEmail()const
{
	return providerEmail;
}

string Provider::getField()const
{
	return field;
}
void Provider::setProviderName(const string& providerName)
{
	this->providerName = providerName;
}
void Provider::setProviderEmail(const string& email)
{
	this->providerEmail = providerEmail;
}
void Provider::setField(const string& field)
{
	this->field = field;
}
void Provider::chooseProvider()
{
	int category_choice, provider_choice;

	std::cout << "Select an event category:" << endl;
	std::cout << "1.Catering" << endl;
	std::cout << "2.Audio-Visual Equipment" << endl;
	std::cout << "3.Decorations" << endl;
	std::cout << "4.Transport" << endl;
	std::cout << "5.Corporate Events" << endl;
	std::cout << "6.Entertainment" << endl;
	std::cout << "7.Exit" << endl;
	std::cin >> category_choice;
	std::cout << "Choose an option:";
	switch (category_choice)
	{
	case 1://Catering
		std::cout << "Choose an provider from the list or collaborate with another organizer you want." << endl;
		std::cout << "1.Venue Events" << endl;
		std::cout << "2.Casa cu brazi" << endl;
		std::cout << "3.Premier Catering" << endl;
		std::cout << "4.Ana Catering" << endl;
		std::cout << "5.Catering 3G" << endl;
		std::cout << "6.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			providerName = " Venue Events";
			providerEmail = " office@venue-events.ro";
			field = "Catering";
			break;
		case 2:
			providerName = "  Casa cu brazi";
			providerEmail = "  casacubrazi@yahoo.com";
			field = "Catering";
			break;
		case 3:
			providerName = "  Premier Catering";
			providerEmail = " office@premiercatering.ro";
			field = "Catering";
			break;
		case 4:
			providerName = "  Ana Catering";
			providerEmail = " office@ana-catering.ro ";
			field = "Catering";
			break;
		case 5:
			providerName = "  Elegant Catering";
			providerEmail = "  office@elegant-catering.ro";
			field = "Catering";
			break;
		case 6:
			providerName = "Other";
			break;
		case 7:
			cout << "Exiting program." << endl;
			return;
		default:
			std::cout << "Invalid option selected.";
			break;
		}
		break;
	case 2://Audio-Visual Equipment
		std::cout << "Choose an provider from the list or collaborate with another provider you want." << endl;
		std::cout << "1.Temple Media" << endl;
		std::cout << "2.Audio Visual" << endl;
		std::cout << "3.Event Tehnology " << endl;
		std::cout << "4.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			providerName = "Temple Media";
			providerEmail = "office@templemedia.ro";
			field = "Audio-Visual Equipment";
			break;
		case 2:
			providerName = "Audio Visual";
			providerEmail = "office@audiovision.ro";
			field = "Audio-Visual Equipment";
			break;
		case 3:
			providerName = "Event Tehnology";
			providerEmail = "office@event-technology.ro";
			field = "Audio-Visual Equipment";
			break;
		case 4:
			providerName = "Other";
			break;
		case 5:
			std::cout << "Exiting program." << endl;
			return;
		default:
			cout << "Invalid option selected.";
			break;
		}
		break;
	case 3://Decorations
		std::cout << "Choose an provider from the list or collaborate with another provider you want." << endl;
		std::cout << "1.Eventimag" << endl;
		std::cout << "2.Issa Events" << endl;
		std::cout << "3.Purple Flowers" << endl;
		std::cout << "4.Event Stuff" << endl;
		std::cout << "5.Universum" << endl;
		std::cout << "6.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			this->providerName = "Eventimag";
			this -> providerEmail = "office@eventimag.ro";
			this -> field = "Decorations";
			break;
		case 2:
			this -> providerName = "Issa Events";
			this->providerEmail = "office@issaevents.ro";
			this->field = "Decorations";
			break;
		case 3:
			this->providerName = "Purple Flowers";
			this->providerEmail = "office@purple-flowers.ro";
			this->field = "Decorations";
			break;
		case 4:
			this->providerName = "Event Stuff";
			this->providerEmail = "office@eventstuff.ro";
			this->field = "Decorations";
			break;
		case 5:
			this->providerName = "Universum";
			this->providerEmail = "contact@universum.ro";
			this->field = "Decorations";
			break;
		case 6:
			this->providerName = "Other";
			break;
		case 7:
			std::cout << "Exiting program." << endl;
			return;
		default:
			std::cout << "Invalid option selected.";
			break;
		}
		break;
	case 4://Transport
		std::cout << "Choose an provider from the list or collaborate with another provider you want." << endl;
		std::cout << "1.Transport personal" << endl;
		std::cout << "2.Transporturi persoane" << endl;
		std::cout << "3.Dorini" << endl;
		std::cout << "4.Lucicosm" << endl;
		std::cout << "5.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			this->providerName = "Transport Personal";
			this->providerEmail = "contact@transport-personal.ro";
			this->field = "Transport";
			break;
		case 2:
			this->providerName = "Transporturi persoane";
			this->providerEmail = "office@transporturipersoane.ro";
			this->field = "Transport";
			break;
		case 3:
			this->providerName = "Dorini";
			this->providerEmail = "office@dorini.ro";
			this->field = "Transport";
			break;
		case 4:
			this->providerName = "Lucicosm";
			this->providerEmail = "lucicosm.transport@gmail.com";
			this->field = "Transport";
			break;
		case 5:
			this->providerName = "Other";
			break;
		case 6:
			std::cout << "Exiting program." << endl;
			return;
		default:
			std::cout << "Invalid option selected.";
			break;
		}

		break;
	case 5://Corporate Events
		std::cout << "Choose an provider from the list or collaborate with another provider you want." << endl;
		std::cout << "1.Atelirimage" << endl;
		std::cout << "2.Maison Dadoo" << endl;
		std::cout << "3.Event Marketing" << endl;
		std::cout << "4.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			this->providerName = "Atelierimage";
			this->providerEmail = "office@atelierimage.ro";
			this->field = "Corporate Events";
			break;
		case 2:
			this->providerName = "Maison Dadoo";
			this->providerEmail = "office@maisondadoo.ro";
			this->field = "Corporate Events";
			break;
		case 3:
			this->providerName = "Event Marketing";
			this->providerEmail = "contact@event-marketing.ro";
			this->field = "Corporate Events";
			break;
		case 4:
			this->providerName = "Other";
			break;
		case 5:
			std::cout << "Exiting program." << endl;
			return;
		default:
			std::cout << "Invalid option selected.";
			break;
		}
		break;
	case 6://Entertainment
		std::cout << "Choose an provider from the list or collaborate with another provider you want." << endl;
		std::cout << "1.Eventree" << endl;
		std::cout << "2.Artist Party" << endl;
		std::cout << "3.Kyp Events" << endl;
		std::cout << "4.Backstage Party" << endl;
		std::cout << "5.Evenimente Premium" << endl;
		std::cout << "6.Other" << endl;
		std::cin >> provider_choice;
		switch (provider_choice)
		{
		case 1:
			this->providerName = "Eventree";
			this->providerEmail = "contact@eventree.ro";
			this->field = "Entertainment";
			break;
		case 2:
			this->providerName = "Artist Party";
			this->providerEmail = "contact@artist-party.ro";
			this->field = "Entertainment";
			break;
		case 3:
			this->providerName = "Kyp Events";
			this->providerEmail = "contact@kyp-events.ro";
			this->field = "Entertainment";
			break;
		case 4:
			this->providerName = "Backstage Events";
			this->providerEmail = "contact@backstage.ro";
			this->field = "Entertainments";
			break;
		case 5:
			this->providerName = "Evenimente Premium";
			this->providerEmail = "office@evenimente-premium.ro";
			this->field = "Entertainment";
			break;
		case 6:
			this->providerName = "Other";
			break;
		case 7:
			std::cout << "Exiting program." << endl;
			return;
		default:
			std::cout << "Invalid option selected.";
			break;
		}
		break;
	case 7:
		std::cout << "Exiting program." << endl;
		return;
	default:
		std::cout << "Invalid choice." << endl;
		providerName = "Unknown";
		break;
	}
}

void Provider::displayInformations() const
{
	cout << "Provider name:" << providerName << endl;
	cout << "Provider email:" << providerEmail << endl;
	cout << "Field:" << field << endl;
}
