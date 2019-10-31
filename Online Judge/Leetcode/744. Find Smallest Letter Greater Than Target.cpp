class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int b=0,e=letters.size()-1,plc;
        if(target>=letters[e]){
            return letters[b];
        }
        while(b<=e){
            int m=(b+(e-b)/2);
            if(letters[m]>target){
                plc=m;
                e=m-1;
            }
            else if(letters[m]<=target){
                b=m+1;
            }
           
        }
        
        return letters[plc];
    }
};
