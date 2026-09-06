// leetcode 26. remove dublicate number in sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int idx =0;

          for(int i=1; i<n; i++){

            if(nums[i] != nums[idx]){
                idx++;
                nums[idx] = nums[i];
            }
          }
     return idx +1;
    }
};











int Solution::removeDuplicates(vector<int> &v) {
    
    // How we can manage health and productivity together. I need help :)
    int n = v.size();
    int slow = 0, fast = 1;
    
    while(fast < n)
    {
        // if slow not equal to fast then slow move to next index and put the element that is not equal and increase fast as well
        if(v[slow] != v[fast])
        {
            slow++;
            v[slow] = v[fast];
            fast++;
        }
        // if v[slow] == v[fast] then we just check the next element of fast
        else
            fast++;
    }
    // at the end we get slow index after removing dublicates
    // but we have to return the length therefore we return slow + 1;
    return slow + 1;
}




/*two pointer approch : tc O(n)

*/

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        vector<int> ans;
         ans.push_back(arr[0]);
       
       // two pointer approch 
       
       int st = 0 , end = 1;
       
       while( end < n){
           
           
           if(arr[st] != arr[end]){
               
                ans.push_back(arr[end]);
               st = end;
               end++;
           }
           
           // if arr[st] == arr[end] 
           else end++;
       }
         return ans;
    }
}; 





/*  time complexcity : O(n)*/

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        vector<int> ans;
      ans.push_back(arr[0]);
         
         for(int i=1; i<n; i++)
         {
             if(arr[i] != arr[i -1]){
                 ans.push_back(arr[i]);
                 
             }
         }
         
         return ans;
    }
};