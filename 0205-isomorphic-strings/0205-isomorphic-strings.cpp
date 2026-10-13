class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int last_seen1[256]={0};
        int last_seen2[256]={0};
        for(int i=0;i<s.length();i++){
        
            if(last_seen1[s[i]]!=last_seen2[t[i]]){
                return false;
            }
            last_seen1[s[i]] = i+1;
            last_seen2[t[i]] = i+1;
                
        }
     return true;  
    }
};