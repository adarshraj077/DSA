class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // height=min(heights) 
       
       int ans=0;
       int current=0;
       int right,left;
       int width=1;
       
       

       for(int i=0;i<heights.size();i++){
        right=i+1,left=i-1,width=1;
          while(right<heights.size() && heights[right]>=heights[i]){width++;right++;}
          while(left>=0 && heights[left]>=heights[i]){width++;left--;}

           current=heights[i]*width;
           ans=max(current,ans);
       }


       return ans;


       
    }
};
