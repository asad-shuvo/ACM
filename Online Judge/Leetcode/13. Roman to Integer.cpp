class Solution {
public:
    int romanToInt(string s) {
        long long int sum = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='I'){
                sum+=1;
            }
            else if(s[i]== 'V'){
                if(i!=0){
                    if(s[i-1]=='I'){
                        sum+=4;
                        i--;
                    }
                    else{
                        sum+=5;
                    }
                }
                else{
                    sum+=5;
                }
            }
            else if(s[i]== 'X'){
                if(i!=0){
                    if(s[i-1]=='I'){
                        sum+=9;
                        i--;
                    }
                    else{
                        sum+=10;
                    }
                }
                else{
                    sum+=10;
                }
            }
            else if(s[i]== 'L'){
                if(i!=0){
                    if(s[i-1]=='X'){
                        sum+=40;
                        i--;
                    }
                    else{
                        sum+=50;
                    }
                }
                else{
                    sum+=50;
                }
            }
            else if(s[i]== 'C'){
                if(i!=0){
                    if(s[i-1]=='X'){
                        sum+=90;
                        i--;
                    }
                    else{
                        sum+=100;
                    }
                }
                else{
                    sum+=100;
                }
            }
            else if(s[i]== 'D'){
                if(i!=0){
                    if(s[i-1]=='C'){
                        sum+=400;
                        i--;
                    }
                    else{
                        sum+=500;
                    }
                }
                else{
                    sum+=500;
                }
            }
            else if(s[i]== 'M'){
                if(i!=0){
                    if(s[i-1]=='C'){
                        sum+=900;
                        i--;
                    }
                    else{
                        sum+=1000;
                    }
                }
                else{
                    sum+=1000;
                }
            }
        }
        return sum;
    }
};