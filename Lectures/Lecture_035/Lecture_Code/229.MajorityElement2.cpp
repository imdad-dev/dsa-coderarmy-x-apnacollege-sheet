class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

     int n = nums.size();
    vector<int> ans;

    int count1 = 0 , count2 =0;

    int maj1 = 0 , maj2= 0 ;

    for( int i = 0; i<n; i++){

       if (maj1 == nums[i])
                count1++;
        else if (maj2 == nums[i])
                count2++;

       else if(count1 ==0){
            maj1 = nums[i];
            count1 = 1;
        }
        
        else if ( count2 == 0 ){
            maj2 = nums[i];
            count2 = 1;
        }

         else {
            // both count dec. 
            count1--;
            count2--;
         }             
    }


    // verify count > n/3 times 

      count1= 0 , count2=0;

      for(int i =0; i<n; i++){

           if(maj1 == nums[i])
              count1++;
           else if (maj2 == nums[i])
                  count2++;   
      }
    
        if( count1 > n/3)
             ans.push_back(maj1);

        if( count2 > n/3)
             ans.push_back(maj2);

             
      return ans;
    }
};