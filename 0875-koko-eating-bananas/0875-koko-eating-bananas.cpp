class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long s=0, e=0, mid, ans=0;
        for(int i=0; i<piles.size(); i++)
        {
            if(e<piles[i])
                e=piles[i];
            s+=piles[i];
        }
        s/=h;
        if(s==0) s++;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            long long total=0;
            for(int i=0; i<piles.size(); i++)
            {
                total+= piles[i]/mid;
                if(piles[i]%mid) total++;
            }
            if(total>h) s=mid+1;
            else
            {
                ans=mid;
                e=mid-1;
            }
        } return ans;
    }
};