#include <iostream>
using namespace std;

struct barang
{
   char nama[20];
   long harga;
   int jlh;
};

struct trans
{
 int jlh_trans, bayar;

   barang * data;
};
 trans t;

long total(int a){
    long tot_harga;
    tot_harga = t.data[a].harga*t.data[a].jlh;
    return tot_harga;
}

long subtotal(){
    long sub;
    sub = 0;

    for(int i = 0; i < t.jlh_trans; i++){
        sub = sub+total(i);
    }
   return sub;
}

long diskon(){
    long dis;
    if (subtotal()>100000){
        dis = subtotal()*0.10;
    }
    else if (subtotal()>50000){
        dis = subtotal()*0.05;
    }
    else{
        dis = 0;
    }
   return dis;
}

long seluruh(){
    long all;
    all = subtotal() - diskon();
    return all;
}

void tampil(int n){
   cout<<n+1<<". "<<t.data[n].nama<<"    :   Rp. "<<t.data[n].harga<<" ("<<t.data[n].jlh<<")"<<endl;
}

int main(){
    cout<<"===================================="<<endl;
    cout<<"            GROSIR UCUL             "<<endl;
    cout<<"===================================="<<endl;
    cout<<"Jumlah transaksi : ";cin>>t.jlh_trans;
    t.data = new barang[t.jlh_trans];
    cout<<endl;

    for(int i = 0; i < t.jlh_trans; i++){
    cout<<endl;
    cout<<"Transaksi ke-"<<(i+1)<<endl;
    cout<<"Nama Barang  : "; cin>>t.data[i].nama;
    cout<<"Harga Satuan : Rp "; cin>>t.data[i].harga;
    cout<<"Jumlah       : "; cin>>t.data[i].jlh;
    cout<<endl;
    }

system ("cls");
    cout<<"======================================"<<endl;
    for(int i = 0; i < t.jlh_trans; i++){
        tampil(i);
    }
    cout<<endl;
    cout<<"======================================"<<endl;
    cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
    cout<<"Diskon      : Rp. "<<diskon()<<endl;
    cout<<"Total       : Rp. "<<seluruh()<<endl<<endl;
    return 0;

}
