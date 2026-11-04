class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;

        k = k % n;

        vector<int> temp(n);

        for(int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp;
    }
};
/*
void rotatearray(vector<int> & n){
    int last=n[n.size()-1];
    for(int i=n.size()-1;i>0;i--){
        n[i]=n[i-1];
    }
    n[0]=last;
}
    void rotate(vector<int>& nums, int k) {
        for(int i=k;i>0;i--){
            rotatearray(nums);
        }
    }
};
*/