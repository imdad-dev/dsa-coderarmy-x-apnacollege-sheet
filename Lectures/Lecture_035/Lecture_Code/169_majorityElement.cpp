class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {

        int n = arr.size();
        int count = 0;
        int candidate ;

   // moore voting algo 
        for (int i = 0; i < n; i++)
        {
           
           if(count == 0){
             
             count = 1;
             candidate = arr[i];
           }

           else {
             
               if(candidate == arr[i])
                  count += 1;

                else 
                   count -= 1;  
           }
        }

    

        return  candidate;
    }
};