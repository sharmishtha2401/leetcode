class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> ranks;
        for(int i=0; i<score.size(); i++)
        {
            ranks.push({score[i], i});
        }
        vector<string> r(score.size());
        int i=0; 
        while(!ranks.empty())
        {
            if(i==0)
            {
                r[ranks.top().second]="Gold Medal";
            }
            else if(i==1)
            {
                r[ranks.top().second]="Silver Medal";
            }
            else if(i==2)
            {
                r[ranks.top().second]="Bronze Medal";
            }
            else
            {
                r[ranks.top().second]=to_string(i+1);
            }
            i++;
            ranks.pop();
        }
        return r;
    }
};