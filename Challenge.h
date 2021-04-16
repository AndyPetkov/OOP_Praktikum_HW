#pragma once
#include<iostream>
#include<cstring>


class Challenge
{
private:
    char challenger[20];
    char challenge[20];
    char challenged[20][20];
    int NumberOfUsersChallanged;
public:
    Challenge();
    void setChallenger(char*);
    void setChallenge(char*);
    char* getName();
    int getNumberOfChallengedUsers()const;
    void setChallenged(char*);
    char* getChallenged(int);
};