class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      //   int a=0,b=0;
      //   vector<int>tmp;
      //    n=nums1.size()-nums2.size();
      //   while(a<n and b<nums2.size()){
      //       if(nums1[a]<nums2[b]){
      //           tmp.push_back(nums1[a]);
      //           a++;
      //       }
      //       else {
      //             tmp.push_back(nums2[b]);
      //           b++;
      //       }
      //   }
      //   while(a<n){
      //       tmp.push_back(nums1[a]);
      //           a++;
      //   }
      //   while( b<nums2.size()){
      //        tmp.push_back(nums2[b]);
      //           b++;
      //   }
      //   nums1.empty();
      //   nums1=tmp;
      // //  return nums1;
        //With o(1)spacing
        int i=m+n;
        while(m>0 and n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[--i]=nums1[--m];
            }
            else nums1[--i]=nums2[--n];
        }
        while(i>0 and m>0){
             nums1[--i]=nums1[--m];
        }
        while(i>0 and n>0){
             nums1[--i]=nums2[--n];
        }
    }
};
