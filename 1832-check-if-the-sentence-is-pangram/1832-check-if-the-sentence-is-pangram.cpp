class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26];
        for(int i=0;i<sentence.size();i++){
            int a=sentence[i]-'a';
            arr[a]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0){
                return false;
            }
        }
        return true;
    }
};