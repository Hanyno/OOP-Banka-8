#include "Account.h"

#include <iostream>

int Account::objectCount = 0;

Account::Account(int n, Client* c)
{
	Account(n, c, 0.05);
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->interestRate = ir;
	this->balance = 0;
	cout << "Kontruktor Acc zavolan" << endl;
	this->objectCount++;
}



Account::~Account()
{
	delete this->owner;
	cout << "Destruktor Acc zavolan" << endl;
	this->objectCount--;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

bool Account::CanWithdraw(double a)
{
	return (this->balance >= a);
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	bool succes = false;
	if (this->CanWithdraw(a))
	{
		this->balance -= a;
		succes = true;
	}
	return succes;
}

void Account::AddInterest()
{
	this->balance += this->interestRate * this->balance;
}

int Account::GetNumOfObj()
{
	return this->objectCount;
}

void Account::SetInterestRate(double ir)
{
	this->interestRate = ir;
}

void Account::Print()
{
	cout << "Number: " << this->GetNumber() << endl;
	cout << "Balance: " << this->GetBalance() << endl;
	cout << "Interest rate: " << this->GetInterestRate() << endl;
	cout << "Owner: " << this->GetOwner()->GetName() << endl;
	cout << endl;
}