class Solution {
public:
int solve(vector<int>& nums, int goal)
{
    if(goal<0)
        return 0;
       int n=nums.size();
       int i=0;
       int j=0;
       int count=0;
       int sum=0;
       while(j<n)
       {
        sum+=nums[j];
        while(sum>goal)
        {
            if(nums[i]==1)
            {
                sum--;
            }
            i++;
        }
        count=count+(j-i+1);
          j++;
       }

       return count;


}
    int numSubarraysWithSum(vector<int>& nums, int goal) {


        return solve(nums,goal)-solve(nums,goal-1);
        

     
        
    }
};