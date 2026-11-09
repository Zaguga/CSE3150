#include <vector>
#include <unordered_set>
#include <limits>

int ECLongestConsecutive(const std::vector<int> &nums) {
    // TODO: Return the length of the longest consecutive-value sequence.
    std::unordered_set<int> values(nums.begin(), nums.end());

    int longest = 0;

    for (int num : values) {
        // only start counting if num is the beginning of a sequence
        if (num == std:: numeric_limits<int>::min() || 
            values.find(num - 1) == values.end()) {

            int current = num;
            int length = 1;

            while (current != std::numeric_limits<int>::max() &&
                    values.find(current + 1 ) != values.end()) {
                        
                current++;
                length++;
            }

            if (length > longest) {
                longest = length;
            }
        }
    }




    return longest;
}
