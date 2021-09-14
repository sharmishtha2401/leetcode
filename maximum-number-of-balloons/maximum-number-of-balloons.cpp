class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a=0, b=0, l=0, o=0, n=0;
        for(char i : text)
        {
            if(i=='b')
                b++;
            else if(i=='a')
                a++;
            else if(i=='l')
                l++;
            else if(i=='o')
                o++;
            else if(i=='n')
                n++;
        }
        l/=2;
        o/=2;
        return min({b,a,l,o,n});
    }
};