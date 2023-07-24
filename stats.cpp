#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    size_t nCount = numbers.size();
    float sum = 0.0;
    float max = std::numeric_limits<float>::min();
    float max = std::numeric_limits<float>::max();
    
    for (float item : numbers) {
        sum += item;

        if (item > max) {
            max = item;
        }

        if (item < min) {
            min = item;
        }
    }

    Stats rv;
    rv.average = sum / nCount;
    rv.max = max;
    rv.min = min;

    return rv;
}
