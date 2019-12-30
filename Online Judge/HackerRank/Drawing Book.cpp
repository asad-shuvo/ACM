#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int cnt1=0;
     for(int i=1;;i++){
         if(p==i or p==i-1){
break;
         }
         i++;
        // i++;
         cnt1++;

     }
     int cnt2=0,f=0;
     if(n%2==0){
         if(n==p)f=1;
         else n--;
     }
     else{
         if(n==p or n-1==p){
             f=1;
         }
         else n=n-2;
     }
if(f==0){
    cnt2++;
    while(1){
if(n==p or n-1==p)break;
cnt2++;
n--;
n--;
    }
}
return min(cnt1,cnt2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

