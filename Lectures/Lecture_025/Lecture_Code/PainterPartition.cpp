class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        
        int st =0 , end = 0 , mid , ans;
        
        for( int i=0 ; i<n; i++){
            st =max(st , arr[i]);
            end += arr[i];
        }
        
        //binary search 
        
        while(st <= end){
            
            mid = st + (end -st)/2;
            
            // track work in length with no. of painter 
            
            int length = 0 , count =1;
            
            for(int i=0; i<n; i++){
                
                length += arr[i];
                
                if(length > mid) {
                    
                    // work distribute in next painter with current element
                    count++;
                    
                    length = arr[i];
                }
            }
            
            //count <= no. of pointer , work distrubuted successfully , so for minimum unit of time to check left 
            
            if( count <= k){
                
                ans = mid;
                //move left side 
                end = mid -1;
            }
            
            else   st = mid +1;
        }
        
        return ans;
    }
};