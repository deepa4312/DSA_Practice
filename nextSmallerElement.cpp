
// entire approach is similar to next greater element except for comparision
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n){

    stack <int> st;
    vector <int> res(n);

    for(int i = n-1; i>=0; i--){

        long long currval = arr[i];
        
         while(!st.empty() && st.top()<currval){
            st.pop();
         }

         res[i] = !st.empty() ? -1 : st.top();
         st.push(currval);
    }
    return res;
}