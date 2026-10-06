class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        if(i==nums1.size()){
            for( j;j<nums2.size();j++){
                merge.push_back(nums2[j]);
            }
        }
        if(j==nums2.size()){
            for( i;i<nums1.size();i++){
                merge.push_back(nums1[i]);
            }
        }
        
        if(merge.size()%2==0){
          return (double)(merge[merge.size()/2] + merge[(merge.size()/2) - 1]) / 2.0;
        }
        else{
            return (merge[merge.size()/2]);

        }
        return 0;
        
        
    }
};