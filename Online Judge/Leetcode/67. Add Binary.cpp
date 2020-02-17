class Solution {
public:
     string add(string num1, string num2) {
        int carry=0;
        string s="";
          
        if(num1.size()>num2.size())swap(num1,num2);
        int r=num2.size()-num1.size();
        for(int i=num1.size()-1,j=num2.size()-1;i>=0,j>=r;i--,j--){
            int sum=num1[i]-'0'+num2[j]-'0'+carry;
            if(sum==3){s+=to_string(1);carry=1;}
            else if(sum==2){s+=to_string(0);carry=1;}
            else if(sum==1){s+=to_string(1);carry=0;}
            else if(sum==0){s+=to_string(0);carry=0;}
        }
      //  cout<<s<<endl;
      
        for(int i=r-1;i>=0;i--){
              int sum=num2[i]-'0'+carry;
            if(sum==3){s+=to_string(1);carry=1;}
            else if(sum==2){s+=to_string(0);carry=1;}
            else if(sum==1){s+=to_string(1);carry=0;}
            else if(sum==0){s+=to_string(0);carry=0;}
        }
        if(carry>0)s+=to_string(carry);
        reverse(s.begin(),s.end());
        return s;
    }
    string addBinary(string a, string b) {
        return add(a,b);
    }
};

