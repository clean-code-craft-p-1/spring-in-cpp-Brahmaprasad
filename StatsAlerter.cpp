#include "StatsAlerter.h"

StatsAlerter::StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters) : m_maxThreshold(maxThreshold)
{
    m_vecAlerters = alerters;
}

StatsAlerter::~StatsAlerter() 
{

};

void StatsAlerter::checkAndAlert(std::vector<float> numbers)
{
    for (float number : numbers)
    {
        if (number > m_maxThreshold)
        {
            for (IAlerter* pAlerter : m_vecAlerters)
            {
                pAlerter->Alert();
            }
            break;
        }
    }
}