class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        if(s.size() == k) return true;
        map<char, int> count;
        
        for(char c : s){
            count[c]++;
        }
        
        int odd = 0;
        for(auto it = count.begin(); it != count.end(); it++){
            if(it->second % 2 == 1){
                odd++;
            }
        }
        return odd <= k;

