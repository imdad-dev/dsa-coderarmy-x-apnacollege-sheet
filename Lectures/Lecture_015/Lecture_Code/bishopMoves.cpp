int Solution::solve(int A, int B)
{
    int totalMoves = 0;
    totalMoves += min(8 - A, 8 - B);  // down right 8 , 8
    totalMoves += min(8 - A, B - 1);  // down left 8,1
    totalMoves += min(A - 1, 8 - B);  // up right  1, 8
    totalMoves += min(A - 1, B - 1);  // up left 1 , 1 

    return totalMoves;
}
