#pragma once

#include "Client.h"
#include "AbstractAccount.h"

class Account : public AbstractAccount
{
private:
	static int objectCount;
protected:
	int number;
	double interestRate;
	Client* owner;
	double balance;

public:
	Account(int n, Client* c);
	Account(int n, Client* c, double ir);
	virtual ~Account();

	int GetNumber();
	double GetBalance();
	double GetInterestRate();
	void SetInterestRate(double ir);
	Client* GetOwner();
	virtual bool CanWithdraw(double a);

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();

	virtual void Print();

	int GetNumOfObj();
};
