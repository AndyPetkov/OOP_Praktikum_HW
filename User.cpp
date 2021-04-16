
#include "User.h"


User::User()
{
	strcpy_s(this->name,20, "UNKNOWN");
	strcpy_s(this->age,20, "UNKNOWN");
	strcpy_s(this->email,30, "UNKNOWN");
}

void User::setRandomnumber()
{
	int i;
	int num;
	for (i = 1; i <= 10; i++)
	{
		num = rand() % 100;
	}
	RandomNumber = num;
}


void User::setName(char* name)
{
	strcpy_s(this->name,20, name);
}

char* User::getName()
{
	return this->name;
}

void User::setAge(char* age)
{
	strcpy_s(this->age,20, age);
}

void User::setEmail(char* email)
{
	strcpy_s(this->email,30, email);
}
void User::Registration()
{
	setRandomnumber();
	char newName[20];
	char newAge[20];
	char newEmail[30];
	std::cin >> newName;
	setName(newName);
	std::cin >> newAge;

	if (strlen(newAge) <= 2)
	{
		setAge(newAge);
		std::cin >> newEmail;
		setEmail(newEmail);
	}
	else
	{
		setEmail(newAge);
	}

	std::cout << "Welcome\n";
}

void User::print() const
{

	std::cout << "Name: " << this->name <<
		"\nAge: " << this->age <<
		"\nEmail: " << this->email <<
		"\nID: " << this->RandomNumber <<
		"\nChallenges: ";
	for (int i = 0; i < ChallengesCounter; i++)
	{
		std::cout << challenges[i] << " ";
	}
	std::cout << std::endl;
}

void User::setChallenge(char* newChallenge)
{
	strcpy_s(challenges[ChallengesCounter],20, newChallenge);
	ChallengesCounter++;
}

void User::DeleteChallenge(char* challengeName)
{
	for (int i = 0; i < ChallengesCounter; i++)
	{
		if (challenges[i] == challengeName)
		{
			for (int j = i; j < ChallengesCounter - 1; j++)
			{
				strcpy_s(challenges[j],20, challenges[j + 1]);
			}
		}
	}
	ChallengesCounter--;
}
