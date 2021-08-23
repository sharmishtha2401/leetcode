class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
            return false;
        return true;
    }
};

/*
If the numbers of stones are 1,2 or 3, then player 1 will win.

If the numbers of stones are 4, then player 1 will lose irrespective of the number of stones he/she remove

So lookup table will look like this : W[1]->W[2]->W[3]->L[4].
*/