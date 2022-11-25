#include<iostream>
#include<queue>
using namespace std;

main()
{
    queue<string> n;
    string barang;
    int i,j,jum;

    cout<<"Jumlah antrian barang : "; cin>>jum;
    cout<<"-------------------------"<<endl;
    for(i=0; i<jum; i++){
        cout<<"Antrian ke-"<<i+1<<" : ";
        cin>>barang;
        n.push(barang);
    }
        cout<<"-------------------------"<<endl;
        cout<<"Barang yang dibeli : "<<endl;
        cout<<"-------------------------"<<endl;
    for(j=0; j<jum; j++){
        cout<<j+1<<". ";
        cout<<n.front();
        cout<<endl;
        n.pop();
    }
}

