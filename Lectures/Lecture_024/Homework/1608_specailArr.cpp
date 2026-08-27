class Solution {
public:
    int specialArray(vector<int>& nums) {
        int size = nums.size(), count;
        int start = 0, end = size, mid;

        while (start <= end) {
            mid = start + (end - start) / 2;
            count = 0;

            for (int i = 0; i < size; i++) {
                if (nums[i] >= mid)
                    count++;
            }

            if (mid == count)
                return mid;
            else if (mid < count)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};


// brute-force 
class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        int n = nums.size(); // no of element 
          for( int x = 0; x<=n; x++){
            
            // find greater than equal to x 
             int count = 0; 
            for(int i =0; i<n; i++){
                if(nums[i] >= x) count++;
            }

            if(x == count) return x;
          }

          return -1;
    }
};

// T.C O(n^2)