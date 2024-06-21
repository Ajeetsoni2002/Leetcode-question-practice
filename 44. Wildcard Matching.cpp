class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int m = s.size(), n = p.size();
        int last_match = -1, starj = -1;
        
        while(i < m){
            // cout << s[i] << ", " << ((j < n) ? p[j] : ' ') << endl;
            // cout << i << ", " << j << ", starj: " << starj << ", last_match: " << last_match << endl;
            if(j < n && (p[j] == s[i] || p[j] == '?')){
                //match one
                i++;
                j++;
            }else if(j < n && p[j] == '*'){
                //greedily match one
                starj = j;
                last_match = i;
                j++;
                //why not i++?
            }else if(starj != -1){
                //not match, fallback to use previous found '*'
                last_match++; //the previous star now matches s[last_match+1]
                i = last_match; //?
                j = starj+1; //now start from the next char of previous '*'
            }else{
                //current char not match, and cannot fallback
                // cout << endl;
                return false;
            }
        }
        // cout << endl;
        
        //if the remaining char in p are all '*', we think it's a match
        return p.substr(j) == string(p.size()-j, '*');
    }
};