#include <algorithm>
#include <vector>

std::vector<int> ECNumOccurrences(const std::vector<int> &queries,
                                  const std::vector<int> &sortedValues) {
    // Count each query efficiently using the sorted input vector.
    std::vector<int> counts;
    counts.reserve(queries.size());

    for (int query : queries) {
        auto first = std::lower_bound(sortedValues.begin(), sortedValues.end(), query);
        auto last = std::upper_bound(sortedValues.begin(), sortedValues.end(), query);
        counts.push_back(static_cast<int>(last - first));
    }

    return counts;
}
