class Solution {
public:
    int numDifferentIntegers(string word) {
        int n = word.length();   //only length() will work, not size()
        unordered_set<string>s;
        int i=0;
        while(i<n){
            if(isdigit(word[i]) == false){
                i++;
                continue;
            }
            string temp = "";
            while(i<n && isdigit(word[i])){
                temp+=word[i];
                i++;
            }
            int j=0;
            while(j<temp.length() && temp[j] == '0') j++;    //only length() will work, not size()
            temp = temp.substr(j);
            s.insert(temp);
        }
        return s.size();
    }
};
