#ifndef PROVIDER_H
#define PROVIDER_H
#include <iostream>
#include <string>
#include <vector>
#include "provider.h"

using namespace std;

class Provider
{
private:
	string providerName;
	string providerEmail;
	string field;
public:
	Provider();
	Provider(const string& providerName, const string& providerEmail, const string& field);
	string getProviderName()const;
	string getProviderEmail()const;
	string getField()const;
	void setProviderName(const string& providerName);
	void setProviderEmail(const string& email);
	void setField(const string& field);
	void chooseProvider();
	void displayInformations() const;

};

#endif