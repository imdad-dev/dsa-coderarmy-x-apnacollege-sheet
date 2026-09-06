// time complexity : O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        vector<int> ans;
         
         int st = 0 , end = n-1;

         while(st < end ){

            if(numbers[st] + numbers[end] == target){
                ans = {st +1 , end +1};
                break;
            }

           else if(numbers[st] + numbers[end] > target)
              // decrese end 
              end--;
             
             // start increasing bez st + end element < target
              else st++;
         }

        return ans;
    }
};


// ith postion + binary search ,

//  time complexity : O(nlongn)

approch : 
/*
ith position element + x = target 

now search x using binary search 
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        vector<int> ans;
        int st , end;
    
        for(int i=0; i<n-1; i++){

            int x = target - numbers[i];

            st = i+1 , end = n-1;

            // binary search 
            while(st <= end){

                int mid = st +(end -st)/2;

                if(numbers[mid] == x){
                    ans = {i+1 , mid +1};  // position 
                    break;
                }

                else if( numbers[mid] < x)
                  // move right 
                  st = mid + 1;

                  else   end = mid -1;
            }
            
        }

        return ans;
    }
};



// brute force approch , T.c = O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

     vector<int> ans;
 
        for(int i=0; i<n-1; i++){

            for(int j= i+1; j<n; j++){
                if(numbers[i] + numbers[j] == target){
                    
                    ans = {i+1 , j+1};         
                    break; 
                }
            }
        }

        return ans;
    }
};

// Input: numbers = [2,7,11,15], target = 9