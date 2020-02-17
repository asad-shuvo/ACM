class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int M=-1;
        for(int i=0;i<piles.size();i++)M=max(M,piles[i]);
        int b=1,e=M;
        int m=INT_MAX;
        while(b<=e){
            int mid=b+(e-b)/2;
            int sum=0;
            int sz=piles.size();
            int i=0,hr=0;
            while(i<sz){
                int t=piles[i]/mid;
                if(piles[i]%mid!=0)t++;
                hr+=t;
                i++;
            }
            if(hr<=H){
                e=mid-1;
                m=min(m,mid);
            }
            else{
                b=mid+1;
            }
        }
        return m;
    }
};
