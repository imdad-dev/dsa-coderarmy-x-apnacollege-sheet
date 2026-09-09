// T.C : O(n)
// S.C : O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int leftMax = 0 , rightMax = 0 , maxHeight = height[0] , index = 0 ,  water = 0;
        
        // max height of building 
        for(int i=1; i<n; i++){
            if(maxHeight < height[i]){
                maxHeight = height[i];
                index = i;
            }
        }
       
        //left part 
         for(int i=0; i<index; i++){

            if(leftMax > height[i]){
                water += leftMax - height[i];
            }   
            else {
                leftMax = height[i];
            }
         }
        //right part 
         for(int i= n-1; i>index; i--){

            if(rightMax > height[i])
               water += rightMax - height[i];

            else 
               rightMax = height[i];   
         }
         
         return water;
    }
}; 












class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int s = 0, e = size -1, water = 0;
        int leftmax = 0, rightmax = 0;

        while(s<e)
        {
            if(height[s] < height[e])
            {
                if(leftmax > height[s])
                    water += leftmax - height[s];
                else
                    leftmax = height[s];
                s++;
            }
            else
            {
                if(rightmax > height[e])
                    water += rightmax - height[e];
                else
                    rightmax = height[e];
                e--;
            }
        }
        return water;
    }
};