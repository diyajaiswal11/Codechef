//https://www.codechef.com/problems/PALL01

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    int arr[T];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    for(int i=0;i<T;i++){
        int originalNum=arr[i];
        int revNum=0,rem;
        do{
            rem=arr[i]%10;
            revNum= (revNum*10) + rem;
            arr[i]=arr[i]/10;
        }while(arr[i]!=0);

        if(originalNum==revNum)
        cout<<"wins"<<endl;
        else 
        cout<<"loses"<<endl;
    }
    return 0;
}
