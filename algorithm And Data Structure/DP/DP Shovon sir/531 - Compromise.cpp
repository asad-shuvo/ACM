
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{

    //freopen("input.txt", "r", stdin);
     string A,B;
    while(cin>>A){
            vector<string>str1,str2;
    string lcs;
            str1.clear();
    str2.clear();
    lcs.clear();
//    memset(dp,-1,sizeof(dp));
    str1.push_back(A);
    while(cin>>A && A!="#"){
        str1.push_back(A);
    }
    while(cin>>B && B!="#"){
            str2.push_back(B);
    }
    int m=str1.size();
        int n=str2.size();
        int L[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    L[i][j]=0;
                else if(str1[i-1]==str2[j-1])
                    L[i][j]=L[i-1][j-1]+1;
                else
                    L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }

  //  cout<<L[m][n]<<endl;
    // Following code is used to print LCS
   int index = L[m][n];

   // Create a character array to store the lcs string
  // char lcs[index+1];
 // vector<string>lcs;
//  string lcs;
  lcs="";
  // lcs[index] = '\0'; // Set the terminating character

   // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (str1[i-1] == str2[j-1])
      {
          lcs+=str1[i-1]+" ";
       //   lcs[index-1]=str1[i-1]+" ";
         // lcs.p_b(str1[i-1]);
          //lcs[index-1] = X[i-1]; // Put current character in result
          i--; j--; //index--;     // reduce values of i, j and index
      }

      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
 for(int k=0;k<lcs.size()-1;k--)
    cout<<lcs[k];

 cout<<endl;
   // Print the lcs
   //cout << "LCS of " << X << " and " << Y << " is " << lcs;
}

}
