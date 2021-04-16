#include <iostream>
#include "ChallengeArray.h"
#include "UserArray.h"


int main()
{

	UserArray accounts;
	ChallengeArray challenges;
	char input[20];
	bool b = true;
	do
	{
		std::cin >> input;
		if (strcmp(input, "registration") == 0)
		{
			User userInput;
			userInput.Registration();
			userInput.print();
			accounts.addAccount(userInput);
		}
		else if (strcmp(input, "challenge") == 0)
		{
			char challengerName[20];
			std::cin >> challengerName;
			if (accounts.UserRegistartion(challengerName))
			{
				char challengeName[20];
				std::cin >> challengeName;
				Challenge challengeInput;
				challengeInput.setChallenger(challengerName);
				challengeInput.setChallenge(challengeName);
				char challengedName[15];


				std::cin >> challengedName;
				if (accounts.UserRegistartion(challengedName))
				{
					accounts.User_Setter_ToChallenge(challengedName, challengeName);
					std::cout << challengedName << " Successful Challenged \n";
				}
				else
				{
					std::cout << challengedName << " Error. Try again\n";
				}
			}
		}
		else if (strcmp(input, "finish") == 0)
		{
			char challengeName[20];
			char userName[20];
			float rating;
			std::cin >> challengeName >> userName >> rating;
			if (accounts.UserRegistartion(userName))
			{
				accounts.User_Challenge_remove(userName, challengeName);

			}
			else
				std::cout << userName << " is not registered user\n";
		}
		else if (strcmp(input, "profile_info") == 0)
		{
			char userName[20];
			std::cin >> userName;
			accounts.print_Info(userName);
		}
	} while (b);
	return 0;
}
