//T.com = O(n) , S.com = O(1)

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> ans(2);
        
        // arr decrease by 1 
        for(int i =0; i<n; i++)
           arr[i]--;
           
        
        // store two value original number and occurence ex arr[arr[i] % n] + = n 
        // find original value using modulo 
        // go that index and add value  n
        
        for(int i =0; i<n; i++){
             arr[arr[i]%n] += n;
        }
        
        
        
        // find Repeating Number 
        // break
        for(int i =0; i<n; i++){
            if(arr[i]/n == 2){
                ans[0] = i+1;
                break;
            }
        }
        
        
        //find missing Number 
        //break
        
        for(int i =0; i<n; i++){
            
            if(arr[i]/n == 0){
                
                ans[1]= i+1;
                break;
            }
        }
 
        return ans;
    }
};










class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int missing, repeating;
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] - 1;
        }

        for (int i = 0; i < n; i++)
        {
            arr[arr[i] % n] = arr[arr[i] % n] + n;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] / n == 0)
                missing = i + 1;
            if (arr[i] / n > 1)
                repeating = i + 1;
        }

        return {repeating, missing};
    }
};










//T.com = O(n)  S.com = O(n)

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> count(n , 0);
        vector<int> ans(2);
        
        //fill count with no. of occurence 
        
        for(int i =0; i<n; i++){
            
            count[arr[i]-1]++;
            
        }
        
        // for duplicate and missing 
        
        for(int i =0; i<n; i++){
            
            if(count[i] == 2)
              ans[0] = i+1;
              
             
             if(count[i] ==0 )
                ans[1] = i + 1;
        } 
        
        
        return ans;
    }
};