class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // sum of n number
        int sumOfN = n * (n + 1) / 2;

        // sum of all element in an array
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += array[i];
        }

        // missing no
        return sumOfN - sum;
    }
};




// time Complexity : O(n^2) not accepted

// class Solution {
//   public:
//     int missingNum(vector<int>& arr) {
//         // code here
        
//         for(int j =1; j<= arr.size() + 1; j++){
            
//             bool found =false;
            
//             for(int i=0; i<arr.size(); i++){
                
//                 if(j == arr[i]){
//                     found = true;
//                     break;
//                 }
//             }
            
//             if(!found) return j;
//         }
//     }
// };