class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n =arr.size();
         for(int i=0; i<n-1; i++){
        
        bool swap = false;
        for(int j=0; j<n-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap =true;
            }
            
        }
          if(!swap) break;  // already sorted break loop
    }
    
    }
};

/*
T.c = O(n^2)
best case : omega(n)
Avg : Theta(n^2)
space complexity = O(1)
*/


