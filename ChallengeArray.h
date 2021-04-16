#pragma once
#include<iostream>
#include "Challenge.h"
#include<cstring>

class ChallengeArray
{
private:
    Challenge AllCollectedChallenges[20];
    int AllChallenges;
public:
    ChallengeArray();
    void AddChallenge(const Challenge&);
    bool IsItRegistered(char*);


};
