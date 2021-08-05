class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==2 && stones[0]==stones[1])
            return 0;
        if(stones.size()==1)
            return stones[0];
        sort(stones.begin(), stones.end());
        stones[stones.size()-2]=stones[stones.size()-1]-stones[stones.size()-2];
        stones.pop_back();
        return lastStoneWeight(stones);
    }
};