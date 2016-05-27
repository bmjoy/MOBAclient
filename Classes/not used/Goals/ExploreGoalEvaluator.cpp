#include "ExploreGoalEvaluator.h"
#include "GoalThink.h"
#include "../GlobalValues.h"


//------------------------- calculateDesirability -----------------------------
//-----------------------------------------------------------------------------
double ExploreGoalEvaluator::calculateDesirability(AbstCharacter* const bot)
{
  double desirability = 0.05;

  desirability *= _character_bias;

  return desirability;
}

//----------------------------- setGoal ---------------------------------------
//-----------------------------------------------------------------------------
void ExploreGoalEvaluator::setGoal(AbstCharacter* const bot)
{
	bot->getBrain()->addGoal_Explore();
}
