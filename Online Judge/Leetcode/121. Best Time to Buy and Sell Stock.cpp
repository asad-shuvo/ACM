class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int LtR[prices.size()+5]={0};
        int RtL[prices.size()+5]={0};
        int mn=INT_MAX;
        int mx=-1;
        for(int i=0;i<prices.size();i++){
            mn=min(mn,prices[i]);
            LtR[i]=mn;
        }
        for(int i=prices.size()-1;i>=0;i--){
            mx=max(mx,prices[i]);
            RtL[i]=mx;
        }
         mx=0;
        for(int i=0;i<prices.size();i++){
            mx=max(mx,abs(RtL[i]-LtR[i]));
        }
        return mx;
    }
};
