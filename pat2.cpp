#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    //floyd's triangle
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<count<<" ";
            count++;

        }
        cout<<endl;
    }

    cout<<endl;

    //butterfly pattern

    //upper half
    for(int i=0;i<n;i++){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;

    }

    //lower half
    for(int i=n;i>0;i--){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}