#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
int siz,qr,i,j,k,l,x,y,t=0;
    string a;
    while(test--){
             deque<int>dq;
            printf("Case %d:\n",++t);



    scanf("%d%d",&siz,&qr);
  //  int m=0;
   // getchar();
    for(i=0;i<qr;i++){

        cin>>a;
        if(a=="pushLeft"){
                cin>>x;
            if(dq.size()!=siz){

                    dq.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
        }
                else if(a=="pushRight"){
                    cin>>x;
                        if(dq.size()!=siz){

                    dq.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                    //m++;
                }
                else
                     cout<<"The queue is full"<<endl;
            }
        else if(a=="popLeft"){
                if(dq.empty())
                cout<<"The queue is empty"<<endl;
                else{
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }

        }
                else if(a=="popRight"){
                        if(dq.empty())
                            cout<<"The queue is empty"<<endl;
                        else{
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                        }

                }
            }
    //dq.clear();
   // deque<int>::iterator it;
    //while(!dq.empty()){
     ///   cout<<dq.back()<<endl;
       // dq.pop_back();
      //  cout<<dq.front()<<endl;

       // dq.pop_front();
    }
    return 0;
    }
    //for(it=dq.begin();it!=dq.end();it++)
      //  cout<<*it<<endl;
    //for(int i=1;i<=5;i++)
      //  cout<<dq[i]<<endl;

