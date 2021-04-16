#include "UserArray.h"
UserArray::UserArray()
{
	CounterOfUsers = 0;
}

void UserArray::addAccount(User& other)
{
	AllUsers[CounterOfUsers] = other;
	CounterOfUsers++;
}

void UserArray::print()
{
	for (int i = 0; i < CounterOfUsers; i++)
	{
		AllUsers[i].print();
	}
}

void UserArray::User_Setter_ToChallenge(char* user, char* challenge)
{
	for (int i = 0; i < CounterOfUsers; i++)
	{
		if (strcmp(AllUsers[i].getName(), user) == 0)
		{
			AllUsers[i].setChallenge(challenge);
		}
	}
}

void UserArray::User_Challenge_remove(char* userName, char* challenge)
{
	for (int i = 0; i < CounterOfUsers; i++)
	{
		if (strcmp(AllUsers[i].getName(), userName) == 0)
		{
			AllUsers[i].DeleteChallenge(challenge);
		}
	}
}

void UserArray::print_Info(char* userName)
{
	if (CounterOfUsers == 0)
	{
		std::cout << "There are no registered users\n";
		return;
	}
	for (int i = 0; i < CounterOfUsers; i++)
	{
		if (strcmp(AllUsers[i].getName(), userName) == 0)
		{
			AllUsers[i].print();
			return;
		}
	}
	std::cout << userName << " is not registered\n";
}

bool UserArray::UserRegistartion(char* userName)
{
	for (int i = 0; i < CounterOfUsers; i++)
	{
		if (strcmp(AllUsers[i].getName(), userName) == 0)
			return 1;
	}
	return 0;
}
