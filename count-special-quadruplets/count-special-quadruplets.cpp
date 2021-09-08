class Solution {
public:
    int countQuadruplets(vector<int>& n) {
        int count=0;
        for(int i=0; i<n.size()-3; i++)
        {
           for(int j=i+1; j<n.size()-2; j++)
           {
               for(int k=j+1; k<n.size()-1; k++)
               {
                   for(int l=k+1; l<n.size(); l++)
                   {
                       if(n[i]+n[j]+n[k]==n[l])
                           count++;
                   }
               }
           }
        }
        return count;
        
    }
};