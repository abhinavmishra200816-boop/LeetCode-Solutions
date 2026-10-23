class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i =1;
        
        if(arr.size()<3){
            return false;
        }
        int highestelement = -1;
        for(i;i<arr.size();i++){
           if(arr[i-1] < arr[i])
           {
                highestelement = arr[i];
           }
           else{
            break;
           }
        }
        if(i==arr.size() || i==1 ){
            return false;
        }
        for(i=i-1;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};