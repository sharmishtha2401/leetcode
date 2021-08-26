class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            int d=gcd(str1.size(), str2.size());
            string str=str2.substr(0,d);
            return str;
        }
        return "";
    }
};