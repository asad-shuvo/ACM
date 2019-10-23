#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch1[6];//={'A','G','G','T','A','B'};
char ch2[7];//={'G','X','T','X','A','Y','B'};
int index[7][8];
int i,j;
cin>>ch1;
cin>>ch2;
//scanf("%s",ch1);
//scanf("%s",ch2);
int len1=strlen(ch1);
int len2=strlen(ch2);
//cout<<len1<<endl;
//cout<<len2<<endl;
for(i=0;i<=len1;i++)
  for(j=0;j<=len2;j++)
{
    if(i==0&&j==0)
    {
        index[i][j]=0;
    }


    else if(ch1[i]==ch2[j])
    {
        index[i][j]=index[i-1][j-1]+1;
    }
    else
    {
        if(index[i][j-1]>index[i-1][j])
        index[i][j]=index[i][j-1];
        else
            index[i][j]=index[i-1][j];
    }
}

i=6;j=7;
while(i!=0)
{
    if(index[i][j]==index[i-1][j])
       i--;
    else if(index[i][j]==index[i][j-1])
        j--;
    else
    {
        cout<<ch1[i]<<" ";
        i--;
        j--;
    }
}
}
