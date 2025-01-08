#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "location.h"
#include "event.h"
#include "organizer.h"
#include "provider.h"
#include "switch.h"



int Switch:: switchInClass ()
{
    int option;
    Event myEvent;
    Location myLocation;
    Organizer myOrganizer;
    Provider myProvider;
    vector<Location> locations = readLocationFromFile("location.txt");
    while (true)
    {
        cout << "\n MENU \n";
        cout << "1.Choose event" << endl;
        cout << "2.Display locations" << endl;
        cout << "3.Choose an organizer" << endl;
        cout << "4.Choose a provider" << endl;
        cout << "5.Exit" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Choose an option:";
        cin >> option;
        switch (option)
        {
        case 1:
            myEvent.chooseEvent();
            myEvent.inputEventDetails();
            myEvent.displayInformations();
            break;
        case 2:
            displayLocations(locations);
            myLocation.chooseLocation();
            break;
        case 3:
            myOrganizer.inputOrganizerDetails();
            break;
        case 4:
            myProvider.chooseProvider();
            myProvider.displayInformations();
            break;
        case 5:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid option selected.";
            break;
        }
        cout << "-----------------------------------------" << endl;
    }
    string locations_file = "locations.txt";
    fstream file(locations_file);
    if (!file.is_open())
    {
        cerr << "Could not open file:" << locations_file << endl;
        return 1;
    }
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}