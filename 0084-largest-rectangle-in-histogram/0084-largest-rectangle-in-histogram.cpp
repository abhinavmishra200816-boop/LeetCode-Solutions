class Solution {
public:
vector<int> PrevSmallestIndex(vector<int> arr){
    vector<int> ans(arr.size());
    stack<int> st;
    st.push(-1);
    for(int i=0;i<arr.size();i++){
        while(st.top()!=-1 && arr[i]<=arr[st.top()]){ st.pop();}
        ans[i]=st.top();
        st.push(i);

    }
    return ans;

}

vector<int> nextSmallestIndex(vector<int> arr){
    vector<int> ans(arr.size());
    stack<int> st;
    st.push(-1);
    for(int i=arr.size()-1;i>=0;i--){
        while(st.top()!=-1 && arr[i]<=arr[st.top()]){ st.pop();}
        ans[i]=st.top();
        if(ans[i]==-1){ ans[i]=arr.size(); }
        st.push(i);

    }
    return ans;

}

    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> ans1 = PrevSmallestIndex(heights);
          vector<int> ans2 = nextSmallestIndex(heights); 
          vector<int> Area;
          for(int i=0;i<heights.size();i++){
            int l=heights[i];
            int w=ans2[i]-ans1[i]-1;

            Area.push_back(l*w);
          }
    return *max_element(Area.begin(), Area.end());
         
    }
};