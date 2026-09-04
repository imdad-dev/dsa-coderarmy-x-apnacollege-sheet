class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        
        int n = position.size();
        int st =1 , end, mid  , ans;

        // need to sorted first , bez yor track position so first postion[0] must be min element 

        sort(position.begin() , position.end());

          end =position[n-1] - position[0]; // last element = Maxx

        while( st <= end){

            mid = st + (end - st)/2;

            // track position and placed ball on baskets

            int pos = position[0] , countBall =1;

            for(int i=1; i<n; i++){

                if(pos + mid <= position[i]){
                    countBall++;
                    pos = position[i];
                }
            }

            if( countBall < m){
                // move left side 
                end = mid -1;
            } 
            else {
                // distribute possible , for maximum distanc move right side 
                ans = mid;
                st = mid + 1;
            }
        }

        return ans;
    }
};




/*

This problem is based upon Aggressive Cows problem.
Similar questions on LEETCODE are :

Ques. No. 1552
Ques. No. 1870
Ques. No. 875
Ques. No. 1283
Ques. No. 1482
Ques. No. 2064

*/