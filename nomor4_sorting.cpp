#include<iostream>
using namespace std;

struct mhs{
    string nama[50];
    int nim[11];
    string kom[5];
    };

main(){
    int jumlah, temp, i, j;
    mhs data;

    cout<<"Jumlah data Mahasiswa : "; cin>>jumlah;
    cout<<"==================================================="<<endl;

    for (int i = 0; i < jumlah ; i++)
    {
        cout<<"Input Nama       : "; cin>>data.nama[i];
        cout<<"Input NIM        : "; cin>>data.nim[i];
        cout<<"Input KOM        : "; cin>>data.kom[i];
        cout<<endl;
    }

cout<<"==================================================="<<endl;
cout<<">>Hasil pengurutan berdasarkan nim(asc)<<"<<endl;
cout<<endl;
cout<<"           Data Mahasiswa :"<<endl;
cout<<"==================================================="<<endl;
cout<<endl;
        for(i = 0; i < jumlah; i++ ){
            for (j = i; j < jumlah; j++)
            {
                if (data.nim[j] < data.nim[i]){
                    data.nama[j].swap (data.nama[i]);
                    data.kom[j].swap (data.kom[i]);
                    temp = data.nim[j];
                    data.nim[j] = data.nim[i];
                    data.nim[i] = temp;
                }
            }
                cout<<"NIM      : "<<data.nim[i]<<endl;
                cout<<"Nama     : "<<data.nama[i]<<endl;
                cout<<"KOM      : "<<data.kom[i]<<endl;
                cout<<endl<<endl;
        }

cout<<"==================================================="<<endl;
cout<<">>Hasil pengurutan berdasarkan nim(dsc)<<"<<endl;
cout<<endl;
cout<<"           Data Mahasiswa :"<<endl;
cout<<"==================================================="<<endl;
cout<<endl;
        for(i = 0; i < jumlah; i++ ){
            for (j = i; j < jumlah; j++)
            {
                if (data.nim[j] > data.nim[i]){
                    data.nama[j].swap (data.nama[i]);
                    data.kom[j].swap (data.kom[i]);
                    temp = data.nim[j];
                    data.nim[j] = data.nim[i];
                    data.nim[i] = temp;
                }
            }
                cout<<"NIM      : "<<data.nim[i]<<endl;
                cout<<"Nama     : "<<data.nama[i]<<endl;
                cout<<"KOM      : "<<data.kom[i]<<endl;
                cout<<endl;
        }
}
