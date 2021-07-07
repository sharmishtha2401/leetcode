class Solution {
public:
    void reverseString(vector<char>& s) {
    int i;
    int n=s.size()/2;
    for(i=0; i<n; i++)
    {
        char temp;
        temp=s[i];
        s[i]=s[s.size()-1-i];
        s[s.size()-1-i]=temp;
    }
    }
};