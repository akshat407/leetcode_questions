class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        vector<int>ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            colors.push_back(colors[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(colors[i]==colors[i+2] && colors[i]!=colors[i+1])
            count++;
        }
        return count;
    }
};