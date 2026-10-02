class Solution {
public:
// string smalleststring(vector<string>& strs){
//     if(strs.empty()){
//         return "";
//     }
//     string minstr=strs[0];
//     for(int i=0;i<strs.size();i++){
//         if(strs[i].length() < minstr.length())
//         {
//             minstr=strs[i];
//         }
//     }
//         return minstr;
// }
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
    // // shorthest string 
    // string s = smalleststring(strs);
        for(int i=0;i<strs[0].length();i++){
         char cur_ch= strs[0][i];
         for(int j=1;j<strs.size();j++){
            if(strs[j][i]!=cur_ch){
                return str;
            }

         }
         str.push_back(cur_ch);
        
        }
        return str;
    }
};