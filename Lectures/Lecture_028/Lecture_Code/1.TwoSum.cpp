//Time complexcity : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
    
        vector<int> ans;
       
        sort(arr.begin() , arr.end());

        int st = 0 , end = n - 1;

        while( st < end){

             if(arr[st] + arr[end] == target){
                ans = {st , end};
                break;
             }

             else if (arr[st] + arr[end] > target){
                  // dec end 
                  end--;
             }  
             else st++;
        } 
        
        return ans;
    }
};