class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        // using binary search 
        
        if(n<3) return 1;
        
        int ans =1;
        
        int st =0 , end = n-1 ;
        long long mid;
        
        while(st <= end){
            
            mid = st + (end -st)/2;
            
            // more safety
            if(mid * mid == n/mid){
                return mid;
            }
            else if (mid* mid  < n/mid){
                ans = mid ;
                // go right 
                st = mid +1;
            }
            else {
                // go left 
                end = mid -1;
            }
        }
       return ans;   
    }
};

/*

class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        // brute force 
        int i=1;
        
        while( i*i*i <= n){
            i++;
        }
        return i-1;
    }
};
*/