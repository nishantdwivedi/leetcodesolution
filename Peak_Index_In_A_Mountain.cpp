class Solution {

public:
    int peakIndexInMountainArray(vector<int>& A) {
     int s = 0;
       int e = A.size() - 1;
       while(s<e) {
           int p = (s+e)/2;
           if (A[p]>A[p+1] && p>0 && A[p] >A[p-1]) {
               return p;
           } else if (A[p] < A[p+1]) {
               s = p + 1;
           } else if (A[p] > A[p+1]) {
               e = p -1;
           }
       }
       return e;
        
    }
};
