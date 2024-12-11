#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "locations.h"
#include "events.h"

int main()
{
    int option;
    Event myEvent;
    vector<Location> locations = readLocationFromFile("locations.txt");
    while (true)
    {
        cout << "\n MENU \n";
        cout << "1.Choose event" << endl;
        cout << "2.Display locations" << endl;
        cout << "3.Exit" << endl;
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
            break;
        case 3:
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
    return 0;
}