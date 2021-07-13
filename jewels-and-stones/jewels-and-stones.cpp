class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int nums=0;
        for(int i=0; i<jewels.size(); i++)
        {
            nums+=count(stones.begin(), stones.end(), jewels[i]);
        }
        return nums;
        
    }
};