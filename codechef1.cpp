//https://www.codechef.com/problems/LUCKFOUR

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    for(int i=0;i<T;i++){
        int counter=0;
        int checkNum = arr[i];
        while(arr[i]!=0){
            checkNum=arr[i]%10;
            if(checkNum==4){
                counter++;
            }
            arr[i]=arr[i]/10;
        }
        cout<<counter<<endl;
    }
    return 0;
}


