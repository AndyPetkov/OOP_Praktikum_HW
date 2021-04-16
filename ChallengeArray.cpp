#include"ChallengeArray.h"
ChallengeArray::ChallengeArray()
{
    AllChallenges = 0;
}

void ChallengeArray::AddChallenge(const Challenge& rhs)
{
    AllCollectedChallenges[AllChallenges] = rhs;
    AllChallenges++;
}

bool ChallengeArray::IsItRegistered(char* challengeName)
{
    for (int i = 0; i < AllChallenges; i++)
    {
        if (strcmp(AllCollectedChallenges[i].getName(), challengeName) == 0) return 1;
    }
    return 0;
}




