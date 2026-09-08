class Solution {
  public:
    vector<int> equalSum(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        // total sum of the whole array, computed once - O(n)
        int total_sum = accumulate(arr.begin(), arr.end(), 0);
        
        int prefix = 0, suffix = 0, x;
        int ans = INT_MAX, index = -1, flag = -1;
        
        // i represents the last index included in the LEFT part.
        // Loop must stop at n-2 (i.e. i < n-1), NOT i < n:
        // if i reaches n-1, prefix = total_sum and suffix = 0,
        // meaning the right subarray is empty - that's an invalid
        // split since x must be inserted BETWEEN two elements,
        // so both sides need at least one original element.
        for (int i = 0; i < n - 1; i++) {
            
            // running prefix sum: left part = arr[0..i]
            prefix += arr[i];
            
            // right part = everything not in the left part
            suffix = total_sum - prefix;
            
            // x is the amount needed to balance the two sides
            x = prefix - suffix;
            if (x < 0)
                x *= -1;   // take absolute difference
            
            // keep track of the smallest x found so far
            if (x < ans) {
                ans = x;
                
                // leftCount (number of elements on the left) = i + 1
                // position of inserted x (1-indexed) = leftCount + 1 = i + 2
                index = i + 2;
                
                // decide which side x should join:
                // x must go to the SMALLER side to bring it up to match
                if (suffix >= prefix)
                    flag = 1;   // left side is smaller (or equal) -> x joins left
                else
                    flag = 2;   // right side is smaller -> x joins right
            }
        }
        
        return {ans, index, flag};
    }
};