#include <string>
#include <unordered_map>

bool ECIsIsomorphic(const std::string &s, const std::string &t) {
    // TODO: Return whether a one-to-one character mapping transforms s into t.
    if (s.length() != t.length()){
        return false;
    }

    std::unordered_map<char, char> mapST;
    std::unordered_map<char, char> mapTS;

    for (int i = 0; i<s.length(); i++){
        // if the character is mapped
        if (mapST.find(s[i]) != mapST.end()) {// mapST.end() is like the "null"
            // if the mapp isn't expected --> false
            if (mapST[s[i]] != t[i]){
                return false;
            }
        // otherwise if not mapped
        } else {
            // map it
            mapST[s[i]] = t[i];
        }

        // if map exists the other way
        if (mapTS.find(t[i]) != mapTS.end()) {
            // and it doesnt match its expected --> false
            if (mapTS[t[i]] != s[i]) {
                return false;
            }
            // if its not mapped
        } else {
            //map it
            mapTS[t[i]] = s[i];
        }



    }



    return true;
}

