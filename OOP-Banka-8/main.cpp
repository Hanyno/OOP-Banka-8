#include "Client.h"
#include "Account.h"
#include "Bank.h"
#include "PartnerAccount.h"
#include "CreditAccount.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	Client* o = new Client(0, "Smith");
	CreditAccount* ca = new CreditAccount(1, o, 1000);

	AbstractAccount* aa = ca;

	delete aa;

	return 0;
}