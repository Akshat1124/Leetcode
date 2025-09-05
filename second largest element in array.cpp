#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if( arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }

    }
    if(slargest==INT_MIN)
    return -1;
    return slargest;
}