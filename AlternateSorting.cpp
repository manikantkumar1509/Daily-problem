//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int i=0;
        int j = n-1;
        while(i<j){
            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            j--;
            i++;
        }
        if(n%2!=0){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

