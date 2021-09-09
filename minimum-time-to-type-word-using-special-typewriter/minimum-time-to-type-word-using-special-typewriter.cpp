class Solution {
public:
    int minTimeToType(string word) {
        int cur='a';
        int time=word.size();
        for(int i=0; i<word.size(); i++)
        {
            time+=min(abs(word[i]-cur), 26-abs(word[i]-cur));
            cur=word[i];
        }
        return time;
    }
};