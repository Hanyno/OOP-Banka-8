#include "CreditAccount.h"

#include <iostream>
#include <string>


CreditAccount::CreditAccount(int n, Client* o, double c) : Account(n, o)
{
	this->credit = c;
	cout << "CAcc Kontruktor" << endl;
}

CreditAccount::CreditAccount(int n, Client* o, double ir, double c) : Account(n, o, ir)
{
	this->credit = c;
	cout << "CAcc Kontruktor" << endl;
}

CreditAccount::~CreditAccount()
{
	cout << "CAcc destruktor" << endl;
}

bool CreditAccount::CanWithdraw(double a)
{
	return(this->GetBalance() + this->credit >= a);
}

bool CreditAccount::Withdraw(double a)
{
	bool success = false;
	if (this->CanWithdraw(a))
	{
		this->balance -= a;
		success = true;
	}
	return success;
}

void CreditAccount::Print()
{
	cout << "Number: " << this->GetNumber() << endl;
	cout << "Balance: " << this->GetBalance() << endl;
	cout << "Interest rate: " << this->GetInterestRate() << endl;
	cout << "Owner: " << this->GetOwner()->GetName() << endl;
	cout << "Credit: " << this->credit << endl;
	cout << endl;
}