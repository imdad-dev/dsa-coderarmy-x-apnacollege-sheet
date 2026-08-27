class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return 1;
        int start = 0, end = num;
        long long int mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (mid * mid == num)
                return true;
            else if (mid * mid < num)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }
};




// 2nd Approch
class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int st = 0 , end = num , mid ;
        while(st <= end) {
            
            mid = st + (end -st)/2;
            
             if(mid == 0 ) // handle division by zero 
             // move right 
              st = mid + 1;

              // 2 == 5/2 , true , if reminder safety guard not use 
            else if( num % mid==0 && mid == num/mid) return true;

            else if(mid < num/mid ) 
            // go right 
            st = mid + 1;

            else end = mid -1;
        }

        return false;
    }
};