class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {

      int n = arr.size();

      int str =0 , end =n-1 , mdl , first=-1 , last =-1;

// first occurence
      while(str <= end){
         
          mdl = str + (end - str)/2;

           if(arr[mdl] == target){
             first = mdl;
             //check left also 
             end =mdl -1;

           }

          else if( arr[mdl] < target){
            // right side 
             str = mdl +1;
          } else {
            // left 

            end = mdl -1;
          }

      } 


      
       str =0 , end =n-1;

// last occurence
      while(str <= end){
         
          mdl = str + (end - str)/2;

           if(arr[mdl] == target){

             last = mdl;
             //check right also 
             str = mdl +1;

           }

          else if( arr[mdl] < target){
            // right side 
             str = mdl +1;
          } else {
            // left 

            end = mdl -1;
          }

      } 


      return {first , last};  
    }
};