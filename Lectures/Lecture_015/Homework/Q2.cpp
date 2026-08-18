class Solution {
  public:
    int setBits(int n) {
        // Code here
        int count =0;
        while(n) {
            
            if( n&1 ) count++;  // last digit = 1 
            
           n= n>>1;  // dived by 2 
        }
        
        return count;
        
    }
};