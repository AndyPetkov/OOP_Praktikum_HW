#pragma once
#include <iostream>
#include<cstring>
#include <cstdlib>
#include <ctime>


using namespace std;
class User
{
private:
	char name[20];
	char age[20];
	char email[30];
	char challenges[20][20];
	int ChallengesCounter;
	int RandomNumber;
public:
	User();
	char* getName();
	void setName(char*);
	void setAge(char*);
	void setEmail(char*);
	void setChallenge(char*);
	void Registration();
	void print() const;
	void DeleteChallenge(char*);
	void setRandomnumber();
};