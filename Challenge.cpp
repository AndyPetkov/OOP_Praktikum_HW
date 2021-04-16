#include "Challenge.h"



Challenge::Challenge()
{
    strcpy_s(challenger,20 ,"Unknown");
    strcpy_s(challenge, 20,"Unknown");
    strcpy_s(challenged[0],20,"Unknown");
    NumberOfUsersChallanged = -1;
}

void Challenge::setChallenger(char* challenger)
{
    strcpy_s(this->challenger,20, challenger);
}

void Challenge::setChallenge(char* challenge)
{

    strcpy_s(this->challenge, 20,challenge);
}

char* Challenge::getName()
{
    return challenge;
}

int Challenge::getNumberOfChallengedUsers() const
{
    return NumberOfUsersChallanged;
}

void Challenge::setChallenged(char* challenged)
{
    strcpy_s(this->challenged[++NumberOfUsersChallanged],20, challenged);
}

char* Challenge::getChallenged(int index)
{
    return challenged[index];
}
