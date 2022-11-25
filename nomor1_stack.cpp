#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> n;
    string buku;
    int i, j, jum;

    cout<<"#### PENGEMBALIAN BUKU ####"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Banyak buku yang ingin dikembalikan ke rak : "; cin>>jum;
    for(i = 0; i < jum; i++){
        cout<<"Judul Buku : ";
        cin >> buku;
        n.push(buku);
    }

        cout<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Jumlah semua buku    : "<<n.size()<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Buku yang sudah dikembalikan ke rak : "<<endl;

        for(j=0; j<i; j++){
        cout<<j+1<<". ";
        cout<<n.top();
        cout<<endl;
        n.pop();
    }
}
