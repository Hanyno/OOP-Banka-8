#include "PartnerAccount.h"
#include "Account.h"

#include <iostream>
#include <string>


PartnerAccount::PartnerAccount(int n, Client* o, Client* p) : Account(n, o)
{
	this->partner = p;
	cout << "Kontruktor PAcc zavolan" << endl;
}

PartnerAccount::PartnerAccount(int n, Client* o, Client* p, double ir) : Account(n, o, ir)
{
	this->partner = p;
	cout << "Kontruktor PAcc zavolan" << endl;
}

PartnerAccount::~PartnerAccount()
{
	cout << "Destruktor PAcc zavolan" << endl;
}

Client* PartnerAccount::GetPartner()
{
	return this->partner;
}

void PartnerAccount::Print()
{
	cout << "Number: " << this->GetNumber() << endl;
	cout << "Balance: " << this->GetBalance() << endl;
	cout << "Interest rate: " << this->GetInterestRate() << endl;
	cout << "Owner: " << this->GetOwner()->GetName() << endl;
	cout << "Partner: " << this->GetPartner()->GetName() << endl;
	cout << endl;
}