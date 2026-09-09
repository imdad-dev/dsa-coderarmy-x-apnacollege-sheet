// time complexity : tc O(n) { n + n + n = 3n = )(n)}
// space complexity : (n)  : { n + n = 2n}

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();

        vector<int> leftMax(n) , rightMax(n);

        // create leftMax vector 
       leftMax[0] = height[0];

       for(int i = 1; i<n; i++)
              leftMax[i] = max(leftMax[i-1] , height[i-1]);

      // create rightMax vector 
          rightMax[n-1] = height[n-1];

          for(int i = n-2; i>=0; i--)
               rightMax[i] = max(rightMax[i+1] , height[i+1]);


          // now , calculte the unit of water trap 
          int water = 0;

          for(int i =0; i<n; i++){

        // min height of support left and right side 
             int miniHeight =min(leftMax[i] , rightMax[i]);

             // if miniHeight is greater than current building length then gurantee support or store some water 

             if(miniHeight > height[i])
                  water += miniHeight - height[i];
              
          }             
         
         return water;
    }
}; 



// Time complexity : O(n^2)

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int water = 0;

        for(int i=0; i<n; i++){
      
      int leftMax =0 , rightMax = 0;

// find left max hieght 
      for(int j =i; j>=0; j--)
         leftMax = max(leftMax , height[j]);

     // find right max height 

     for(int j =i; j<n; j++)
          rightMax = max(rightMax , height[j]);

     // water level or miniHeight min of leftMax and rightMax 

        int waterLevel = min(leftMax , rightMax);

        if(waterLevel > height[i])
             water += waterLevel - height[i];         

        }
         return water;
    }
}; 