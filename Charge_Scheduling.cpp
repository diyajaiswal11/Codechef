#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v1.push_back(k);

        }
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v2.push_back(k);
        }
        
        int time = 0;
        int arr[n] = {0};
        bool b = true;
        vector<int> position_v;
        vector<int> time_v;
        vector<int> fin_time_v;
        int max1 = 0;
        int reject[n] =
        for(int i=0;i<v1.size();i++){
            if(v1[i]+time<=v2[i]){
                position_v.push_back(i+1);
                time_v.push_back(time);
                fin_time_v.push_back(time+v1[i]);
                time = v1[i]+time;
                if(v1[i]<max1){
                    max1 = v1[i];
                }
            }
            else if(time-max1+v1[i]<=v2[i]&&v1[i]){
                
            }
            
            
            
            
            
            
        }
    }
}