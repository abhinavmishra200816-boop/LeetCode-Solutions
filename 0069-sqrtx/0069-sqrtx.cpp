class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        
        long long mid , ans;
        while(s<=e){
            mid = s+(e-s)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
};