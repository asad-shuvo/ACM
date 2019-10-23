#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,D;
    int mod,test;
    cin>>test;
    while(test--){
    cin>>M>>D;
    mod=D%7;
    ///Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.

    if(M==1 || M==10){
        if(mod==0)
            cout<<"Friday"<<endl;
            else if(mod==1)
            cout<<"Saturday"<<endl; else if(mod==2)
            cout<<"Sunday"<<endl; else if(mod==3)
            cout<<"Monday"<<endl; else if(mod==4)
            cout<<"Tuesday"<<endl; else if(mod==5)
            cout<<"Wednesday"<<endl; else if(mod==6)
            cout<<"Thursday"<<endl;
    } if(M==2 || M==11 || M==3){
        if(mod==0)
            cout<<"Monday"<<endl;
            else if(mod==1)
            cout<<"Tuesday"<<endl; else if(mod==2)
            cout<<"Wednesday"<<endl; else if(mod==3)
            cout<<"Thursday"<<endl; else if(mod==4)
            cout<<"Friday"<<endl; else if(mod==5)
            cout<<"Saturday"<<endl; else if(mod==6)
            cout<<"Sunday"<<endl;
    } if(M==4 || M==7){
        if(mod==0)
            cout<<"Thursday"<<endl;
            else if(mod==1)
            cout<<"Friday"<<endl; else if(mod==2)
            cout<<"Saturday"<<endl; else if(mod==3)
            cout<<"Sunday"<<endl; else if(mod==4)
            cout<<"Monday"<<endl; else if(mod==5)
            cout<<"Tuesday"<<endl; else if(mod==6)
            cout<<"Wednesday"<<endl;
    } if(M==5){
        if(mod==0)
            cout<<"Saturday"<<endl;
            else if(mod==1)
            cout<<"Sunday"<<endl; else if(mod==2)
            cout<<"Monday"<<endl; else if(mod==3)
            cout<<"Tuesday"<<endl; else if(mod==4)
            cout<<"Wednesday"<<endl; else if(mod==5)
            cout<<"Thursday"<<endl; else if(mod==6)
            cout<<"Friday"<<endl;
    } if(M==6){
        if(mod==0)
            cout<<"Tuesday"<<endl;
            else if(mod==1)
            cout<<"Wednesday"<<endl; else if(mod==2)
            cout<<"Thursday"<<endl; else if(mod==3)
            cout<<"Friday"<<endl; else if(mod==4)
            cout<<"Saturday"<<endl; else if(mod==5)
            cout<<"Sunday"<<endl; else if(mod==6)
            cout<<"Monday"<<endl;
    } if(M==8){
        if(mod==0)
            cout<<"Sunday"<<endl;
            else if(mod==1)
            cout<<"Monday"<<endl; else if(mod==2)
            cout<<"Tuesday"<<endl; else if(mod==3)
            cout<<"Wednesday"<<endl; else if(mod==4)
            cout<<"Thursday"<<endl; else if(mod==5)
            cout<<"Friday"<<endl; else if(mod==6)
            cout<<"Saturday"<<endl;
    } if(M==9 || M==12){
        if(mod==0)
            cout<<"Wednesday"<<endl;
            else if(mod==1)
            cout<<"Thursday"<<endl; else if(mod==2)
            cout<<"Friday"<<endl; else if(mod==3)
            cout<<"Saturday"<<endl; else if(mod==4)
            cout<<"Sunday"<<endl; else if(mod==5)
            cout<<"Monday"<<endl; else if(mod==6)
            cout<<"Tuesday"<<endl;
    }

}
}
