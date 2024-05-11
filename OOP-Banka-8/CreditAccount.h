#pragma once
#include "Account.h"
class CreditAccount :
	public Account
{
private:
	double credit;

public:
	CreditAccount(int n, Client* o, double c);
	CreditAccount(int n, Client* o, double ir, double c);
	~CreditAccount();

	bool CanWithdraw(double a);
	bool Withdraw(double a);
	void Print();
};