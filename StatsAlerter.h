#pragma once
#include<vector>
#include"IAlerter.h"

class StatsAlerter
{
public:
    StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters);
    ~StatsAlerter();

    void checkAndAlert(std::vector<float> numbers);

private:
    const float m_maxThreshold;
    std::vector<IAlerter*> m_vecAlerters;
};

