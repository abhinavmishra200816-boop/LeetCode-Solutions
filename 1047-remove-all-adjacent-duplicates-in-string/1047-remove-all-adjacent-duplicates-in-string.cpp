class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(auto ch:s){
           if(!st.empty() && st.top()==ch){
                st.pop();
            }
            else{
                st.push(ch);
        }
    
        }
        
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


    //     for (int i=0;i<s.length();i++){
    //         if(s[i] == s[i+1]){
    //             s.erase(i,2);
    //             if(i==0){
    //                 i=-1;
    //             }
    //             else{
    //                 i=i-2;
    //             }
    //         }
    //     }
    //     return s;
    // }
 
};