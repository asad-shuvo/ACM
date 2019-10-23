#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);
    int L,W,H,i,j,k,test,V;
while(1){
    scanf("%d",&test);
  if(test==0)
       break;
    int mxH=0,mxV=0;
    while(test--){
        scanf("%d%d%d",&L,&W,&H);
        if(H>mxH){
                mxH=H;
            mxV=L*W*H;
        }
        else if(H==mxH){
            V=L*W*H;
            if(V>mxV)
                mxV=V;
        }
    }
   printf("%d\n",mxV);

}
}
