class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char,int> s_occurencies;
        unordered_map<char,int> t_occurencies;

        for(int i = 0; i < s.size(); i++)
        {
            s_occurencies[s[i]]++;
            t_occurencies[t[i]]++;
        }

        for(int i = 0; i < s.size(); i++)
            if(s_occurencies[s[i]] != t_occurencies[s[i]]) return false;
        return true;
    }
};

