#include "Client.h"
#include <string>

int Client::objectCount = 0;

Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
	objectCount++;
}

Client::~Client()
{
	objectCount--;
}

int Client::GetCode()
{
	return this->code;
}

string Client::GetName()
{
	return this->name;
}

int Client::GetObjectCount()
{
	return this->objectCount;
}