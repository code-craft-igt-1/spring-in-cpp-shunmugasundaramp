#include "stats.h"
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& dataset) {
    Stats computedStats;
    if(dataset.size() == 0) {
        computedStats.average = nan("");
        computedStats.min = nan("");
        computedStats.max = nan("");
    } else {
        computedStats.average = 0;
        computedStats.min = dataset[0];
        computedStats.max = dataset[0];
        for(auto data : dataset) {
            computedStats.average += data;
            if(data < computedStats.min) {
                computedStats.min = data;
            }
            if(data > computedStats.max) {
                computedStats.max = data;
            }
        }
        computedStats.average /= dataset.size();
    }
    return computedStats;
}
