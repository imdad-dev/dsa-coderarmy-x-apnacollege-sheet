
//T.com = O(n)  s.com = O(1)
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

        // verify is this the true element
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == candidate)
                count++;
        }

        return count > n / 2 ? candidate : -1;
    }
};
















class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {

        int n = arr.size();
        int count = 1;
        int candidate = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == candidate)
                count++;
            else
            {
                if (count == 0)
                {
                    count = 1;
                    candidate = arr[i];
                }
                else
                    count--;
            }
        }

        // verify is this the true element
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == candidate)
                count++;
        }

        return count > n / 2 ? candidate : -1;
    }
};