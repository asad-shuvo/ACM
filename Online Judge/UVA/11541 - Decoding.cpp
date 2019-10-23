#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","rt",stdin);
     //freopen("output.txt","w",stdout);

    char a[500],b[500],c;
    int i,j,k,l,m,n,value,test,te=0;
    cin>>test;
    getchar();
    while(test--){
            gets(a);
        k=0;
    te++;
           // strrev(a);
            int ln=strlen(a);
        value=0;
        printf("Case %d: ",te);
    for(i=0;i<ln;i++){
            /*
            if(a[i]>='0' && a[i]<='9'){
                value=(value*10)+(a[i]-'0');
               // cout<<value<<endl;
            }
            */
         if(a[i]>='A' && a[i]<='Z'){
        c=a[i];
        value=0;
        }

            if(a[i]>='0' && a[i]<='9'){
                value=(value*10)+(a[i]-'0');
    //            cout<<value<<endl;
            }
            int rem;
            if(value>9){
               int p=value;
                while(value>0){
                    rem=value%10;
                    value=value/10;
                }
               // cout<<rem;
                p=p-rem;
                for(j=0;j<p;j++){
            printf("%c",c);//b[k++]=a[i];
        }
            }
            else
            {
                for(j=0;j<value;j++){
            printf("%c",c);//b[k++]=a[i];
        }
            }
            /*

         //else if(a[i+1]>='A' && a[i+1]<='Z'){   //if(value>0){
        for(j=0;j<value;j++){
            printf("%c",c);//b[k++]=a[i];
        }
        */

            //}
       // value=0;
   //cout<<b<<endl;
   //printf("\n");
    }
    //strrev(b);
    //b[k++]='\0';
    //strrev(b);
    //cout<<b<<endl;;
    printf("\n");
    }
    return 0;
}





