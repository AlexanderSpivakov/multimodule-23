#include "Activity.h"

void Activity::UseInitiativePoints(int points) {
	initiativePointsLeft = initiativePointsLeft - points > 0 ? initiativePointsLeft - points : 0;
	if (initiativePointsLeft == 0)
	{
		PerformAction();
	}
}