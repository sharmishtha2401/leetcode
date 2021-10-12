class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        int total=bottles;
        while(bottles>=exchange)
        {
            int left=bottles%exchange;
            total+=bottles/exchange;
            bottles/=exchange;
            bottles+=left;
        }
        return total;
    }
};