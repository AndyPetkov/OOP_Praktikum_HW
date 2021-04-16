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
		
		std::cout << "Type *registration* " << std::endl;
		std::cout << "Type *challenge* " << std::endl;
		std::cout << "Type *finish* " << std::endl;
		std::cout << "Type *profil_info* " << std::endl;
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
			std::cout << "Type your name" << std::endl;
			std::cin >> challengerName;
			
			if (accounts.UserRegistartion(challengerName))
			{
				char challengeName[20];
				std::cout << "Type challenge name" << std::endl;
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
			std::cout << "Type challenge name" << std::endl;
			std::cin >> challengeName;
			std::cout << "Type user name" << std::endl;
			std::cin >> userName;
			std::cout << "Type user name" << std::endl;
			std::cin >> rating;
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
			std::cout << "Type the name you want to see " << std::endl;
			std::cin >> userName;
			accounts.print_Info(userName);
		}
	} while (b);
	return 0;
}
