#pragma once
#include "User.h"
#include<iostream>
class UserArray
{
private:
	User AllUsers[20];
	int CounterOfUsers;
public:
	UserArray();
	void addAccount(User&);
	void print();
	void User_Setter_ToChallenge(char*, char*);
	void User_Challenge_remove(char*, char*);
	void print_Info(char*);
	bool UserRegistartion(char*);
};