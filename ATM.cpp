#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
float y;int x;

 cin>>x;  // Total account balance

 cin>>y; // Amout to be withdrawn
 
 float z=y-0.5;
    if(x<z){
        if(x%5==0){
            cout<<z-x;
        }
        else{
            cout << fixed << setprecision(2) << y; 
        }
    }
    else{
        cout<< fixed << setprecision(2)<<y;
    }
}
