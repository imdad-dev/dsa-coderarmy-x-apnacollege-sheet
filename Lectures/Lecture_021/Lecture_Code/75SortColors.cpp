class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int n= arr.size();
        int c0=0 , c1=0 , c2=0;

        // counting 0 , 1's and 2's 

        for(int i=0; i<n; i++){
            if(arr[i] == 0) c0++;
            else if(arr[i] ==1) c1++;
            else  c2++;
        }
    
    
    // put in orginal array 
     int idx =0;
      for(int i=0; i<c0; i++) arr[idx++] =0;
      for(int i=0; i<c1; i++) arr[idx++] =1;
      for(int i=0; i<c2; i++) arr[idx++] =2;
      
    }
};

/*
T.C = O(n) 
S.c = O(1)
*/