class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> parentheses = {{')', '('}, {']', '['}, {'}', '{'},};

        for (const auto& ch : s)
            if (parentheses.find(ch) != parentheses.end()){
                if(open.empty()) return false;
                if(open.top() != parentheses[ch]) return false;

                open.pop();
            } else 
                open.push(ch);
                
        return open.empty();
    }
};
