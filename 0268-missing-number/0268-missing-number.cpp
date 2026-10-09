class Solution {
public:
 
    int missingNumber(vector<int>& nums) {
        int s=0;
        int i,ans=nums.size();
        int mid;
        sort(nums.begin(),nums.end());
        int e=nums.size()-1;
    //   for( i=0;i<=e;i++)
    //         if(nums[i] != i){
    //             return i;
    //         }
    //         return e+1;
    // }
    while(s<=e){
        mid=s+(e-s)/2;
    if(nums[mid]!=mid){
        ans=mid;
        e=mid-1;
    }
    else {
        s=mid+1;
    }
    }
    return ans;

        
    }
    
};