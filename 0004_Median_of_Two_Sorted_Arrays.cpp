#include <bits/stdc++.h>
using namespace std;

/*
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size(),
        size2 = nums2.size(),
        size  = size1 + size2;
    int i=0, j=0,k=0;
    vector<int> num(size);
    while( i<size1 && j<size2)
    {
        if(nums1[i]<= nums2[j])
            num[k++] = nums1[i++];
            
        else
            num[k++] = nums2[j++];

    }
    while(i<size1)
    {
        num[k++] = nums1[i++];
    }
    while(j<size2)
    {
        num[k++] = nums2[j++];
    }
    if ( size%2==0 ) return (num[size/2]+num[size/2-1])*1.0/2;
    else return num[size/2];
}
*/
// O(m+n)

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
}

    




int main()
{
    vector<int> num1 = {  1,2,3,4,5  },
                num2 = {3,4,5,6,7,8,9};
}