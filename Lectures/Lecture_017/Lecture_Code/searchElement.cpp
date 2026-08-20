class Solution {
	public:
	int search(vector<int>& arr, int x) {
		// code here
		
		int idx = -1;
		
		for (int i = 0; i<arr.size(); i++) {
			
			if (arr[i] == x) {
				idx = i;
				break;
			}
		}
		
		return idx;
	}
};


/* 
Approach:
Scan the array left to right, compare each element with x,
stop at the first match.

Steps:
1. Set idx = -1 (default: not found)
2. Loop i from 0 to n-1
3. If arr[i] == x → set idx = i, break loop
4. If loop ends without match, idx stays -1
5. Return idx

Complexity:
Time: O(n) — worst case scan whole array
Space: O(1) — no extra structure used
*/