#include "stats.h"
#include<limits>

#define MINIMUM_FLOAT std::numeric_limits<float>::min();
#define MAXIMUM_FLOAT std::numeric_limits<float>::max();

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) 
{
    std::size_t nCount = numbers.size();

    float sum;
    float max;
    float min;

    if (nCount == 0) 
    {
        sum = NAN;
        max = NAN;
        min = NAN;
    }
    else 
    {
        sum = 0.0;
        max = MINIMUM_FLOAT;
        min = MAXIMUM_FLOAT;
    }
    
    for (float item : numbers) 
    {
        sum += item;

        if (item > max) 
        {
            max = item;
        }

        if (item < min) 
        {
            min = item;
        }
    }

    Stats rv;
    rv.average = sum / nCount;
    rv.max = max;
    rv.min = min;

    return rv;
}
