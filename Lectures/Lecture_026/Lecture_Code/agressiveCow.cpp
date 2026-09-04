class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin() , arr.end());
        
        int n = arr.size();
        
        int st = 1 , mid , ans;
        
        // sort them into ascending arr 
        int end = arr[n-1] - arr[0];
        
        while(st <= end ){
            
            mid = st + (end -st)/2;
            
            // placeed cow and track pos
            
            int count =1 , pos =arr[0];
            
            for(int i=1; i<n; i++){
                
                // pos + mid > arr[i] , place next cow 
                
                if(pos + mid <= arr[i]) {
                    
                    count++;
                    
                    pos = arr[i];
                }
            }
            // 2 < 5 , not possible placed all cow , go left 
            if(count < k){
                
                end = mid -1;
            }  
        
        
        // count >= k , possible , for max distanc go right 
            else {
                ans = mid ;
                st = mid + 1;
            }
            
            
        }
        
        return ans;
        
    }
};