class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step=0;
        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i]=="../")
                step=max(0, step-1);
            else if(logs[i]!="./")
                step++;
        }
        return step;
        
    }
};