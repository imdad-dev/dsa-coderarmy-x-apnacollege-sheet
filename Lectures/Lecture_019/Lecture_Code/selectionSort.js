class Solution {
    /**
     * @param {number[]} arr
     * @returns {number[]}
     */

    // Function to implement selection sort
    selectionSort(arr) {
        // your code here
        let n = arr.length;
        for(let i=0; i<n-1; i++){
            let idx=i;
            
            for(let j=i+1; j<n; j++){
                if(arr[j] < arr[idx])
                    idx =j;
            }
            
            let temp =arr[idx];
            arr[idx]=arr[i];
            arr[i]=temp;
        }
    }
}