#include <vector>

class Stats
{
    public:
    float average;
    float min;
    float max;
};

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    template<typename T>
    Stats ComputeStatistics(const std::vector<T>& );
}
