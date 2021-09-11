class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        priority_queue<pair<int, char>> maxHeap;
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]]++;
        }
        for(auto &i : freq)
        {
            maxHeap.push({i.second, i.first});
        }
        string res="";
        while(!(maxHeap.empty()))
        {
            res+=string(maxHeap.top().first, maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};