class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        
        // already sorted 
        
        // only need to swap adjacent element 
        
        for(int i =0; i<arr.size()-1; i = i+2){
            
            swap(arr[i] , arr[i+1]);
        }
    }
};



/* 
Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.
*/