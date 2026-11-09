#include <string>
#include <vector>

void ECRemoveMatch(std::vector<std::string *> &pointers,
                   const std::string *target) {
    // Remove every pointer whose address equals target.
    for (auto it = pointers.begin(); it != pointers.end(); ) {
        if (*it == target) {
            it = pointers.erase(it);
        } else {
            ++it;
        }
    }
}
