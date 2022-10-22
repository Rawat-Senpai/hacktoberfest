/*
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.
*/

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i],start[i]});
        }
        
        sort(v.begin(),v.end());
        
        int last=v[0].first;
        int count=1;
        for (int i=1;i<n;i++)
        {
            if(last<v[i].second)
            {
                count++;
                last=v[i].first;
            }
        }
        
        return count;
    }
};
