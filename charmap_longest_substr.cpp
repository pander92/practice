class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charmap(128);
        
        int right = 0;
        int left = 0;
        int substr = 0;
        
        while(right < s.length()){
            char i = s[right];
            charmap[i]++;
            
            while(charmap[i]>1){
                char j = s[left];
                charmap[j]--;
                left++;
            }
            right++;
            substr = max(substr, (right - left));
        }
        return substr;
    }
};