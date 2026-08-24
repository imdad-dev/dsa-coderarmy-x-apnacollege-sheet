class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
     
   int n= arr.size();
   
   for(int i=i; i<n; i++){
       
       for(int j=i; j>0; j--){
           
           if(arr[j]<arr[j-1])
           swap(arr[j] , arr[j-1]);
           
           else break;
       }
   }
    }
};