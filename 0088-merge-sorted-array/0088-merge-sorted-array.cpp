class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr1=0;
        int arr2=0;
        vector<int> ans;
        int i=0;
        
            while(arr1<m && arr2<n){
                if(nums1[arr1] < nums2[arr2]){
                    ans.push_back(nums1[arr1]);
                    arr1++;
                    i++;
                }
                else{
                    ans.push_back(nums2[arr2]);
                    arr2++;
                    i++;
                }
            }

            
           while(arr1<m){
                    ans.push_back(nums1[arr1]);
                    arr1++;
                }
            
            while(arr2<n){
                 
                    ans.push_back(nums2[arr2]);
                arr2++;
            }

            for(i=0;i<m+n;i++){
                nums1[i]=ans[i];
            }
        }
    
};