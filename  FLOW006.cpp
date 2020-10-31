#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    string ar [x];

    for(int i=0; i<x ; i++)
    {
        cin>>ar[i];
    }
    int z;int p;
    for(int i=0; i<x; i++){

        string txt=ar[i];
        z=txt.size();
        int sum=0; p=48*z;

        for(int i=0; i<z; i++){
            sum=sum + txt[i];
        }
        cout<<sum - 48*z<<endl;
    }
}
