#include <string>
#include <stack>

bool ECBalancedDelimiters(const std::string &text) {
    // TODO: Check (), [], and {} while ignoring all other characters.
    std::stack<char> s;

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }

        else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            }

            if (c == ')' && s.top() != '(') {
                return false;
            }

            if (c == ']' && s.top() != '[') {
                return false;
            }

            if (c == '}' && s.top() != '{') {
                return false;
            }

            s.pop();
        }

    }
    return s.empty();
}
