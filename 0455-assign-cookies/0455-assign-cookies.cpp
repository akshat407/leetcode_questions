class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ng=g.size();
        int ns=s.size();
    
      int i=0;
      int j=0;
      int count=0;
      while(i<ng && j<ns)
      {
        if(g[i]<=s[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
      }
      return count;
    }
};