class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tab[128] = {};
        int result = 0, bestRes = 0;
        int i = 0;
        int j = 0;
        while(s[i]){
            if (tab[s[i]] == 0){
                result++;
                tab[s[i]] = 1;
                if(result > bestRes)
                    bestRes = result;
            }
            else{
                j = i;
                while(s[i - 1] != s[j])
                    i--;
                result = 1;
                std::fill(tab, tab + 128, 0);
                tab[s[i]] = 1;
            }
            i++;
        }
        return bestRes;
    }
};
