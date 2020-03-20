class RecentCounter {
public:
    queue<int>q;
    RecentCounter() {
        while(!q.empty())q.pop();
    }
    
    int ping(int t) {
        if(q.empty()){
            q.push(t);
            return q.size();
        }
        else{
            
            int tmp=q.front();
            if(t-tmp<=3000){
                q.push(t);
                return q.size();
            }
            else{
                while(1){
                    if(q.empty()){
                        q.push(t);
                         return q.size();
                    }
                    q.pop();
                    int tmp=q.front();
            if(t-tmp<=3000){
                q.push(t);
                return q.size();
                break;
            }
                }
            }
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
