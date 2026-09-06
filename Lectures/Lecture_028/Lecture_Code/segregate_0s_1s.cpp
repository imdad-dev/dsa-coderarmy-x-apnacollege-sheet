// // time complexity  = O(n)
// single traverse 

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
       
       int st = 0 , end = arr.size() -1;
       
       while(st < end ){
           
           if(arr[st] == 0)
               st++;
            
       else { // arr[st] == 1 
           
           if(arr[end] == 0 ) { //  1    0 
               swap(arr[st] , arr[end]);
                st++; 
                end --;
           }
           else //arr[end] == 1 
           
           end --;
             
       }           
       }
    
    }
};


// time complexity : o(n) + 0(n) = O(n)
// space complexity : 0(1)

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
       
       int count0 = 0 , count1 =0;
       
      for(auto i : arr){
          
         if(i == 0) count0++;
         else count1++;
      }
      
      int idx =0;
      
      for(int i=0; i<count0; i++)
       arr[idx++]=0;
       
      for(int i=0; i<count1; i++)
       arr[idx++] =1;
    
    }
};



  // timecoplexity = O(nlogn)
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        sort(arr.begin() , arr.end());
        
      
    
    }
};