class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        
        int count = 0;
        for(int i = 1; i < A.size(); i++){
            if(A[i] == A[i-1]) count++;
            else A[i-count] = A[i];
        }
        return A.size()-count;
    }
};