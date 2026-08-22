class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp_s;
        unordered_map<char, int> mp_t;
        if(s.size() != t.size()) return false;
        for(auto c: s){
            mp_s[c]++;
        }
        for(auto c: t){
            mp_t[c]++;
        }

        for(auto c: s){
            if(mp_s[c] == mp_t[c]){
                continue;
            }
            else return false;
        }
        return true;

    }
};
