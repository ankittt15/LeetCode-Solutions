class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long s=0, e=0, mid, ans=0;
        for(int i=0; i<weights.size(); i++)
        {
            if(s<weights[i])
            s=weights[i];
            e+=weights[i];
        }
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int packs=0, count=1;
            for(int i=0; i<weights.size(); i++)
            {
                packs+=weights[i];
                if(packs>mid)
                {
                    count++;
                    packs=weights[i];
                }
            }
            if(count<=days)
            {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }return ans;
    }
};