class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
        long sum=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            sum+=shift[i];
            s[i]=((s[i]-'a')+(sum%26))%26 +'a';
        }
        return s;
    }
};