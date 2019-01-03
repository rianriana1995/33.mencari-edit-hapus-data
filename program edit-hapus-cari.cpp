#include <iostream>
using namespace std;

int main(){

int b[10],jumlah,ganti,hapus,cari,ketemu=0;
std::cout << "masukan jumlah data :"<< '\n';
std::cin >> jumlah;

if(jumlah>9)
{
    std::cout << "\nmaaf maximal data adalah 10\n"<< '\n';

}
else
{
    for(int i=0;i<jumlah; i++){
    std::cout<<"data ke-"<<":";
    std::cin>>b[i];
    }
    std::cout<<"data yang telah di masukan:"<< '\n';
    for (int j=0;j<jumlah;j++){
    std::cout<< "b["<<j<<"]="<<b[j]<< '\n';

    }
}
std::cout<<"\n\n masukan nilai data yang akan di ubah:"<< '\n';
std::cin>>ganti;

for(int g=0;g<jumlah;g++){
    if(b[g]==ganti){
    std::cout<<"masukan nilai bilangan baru :"<< '\n';
    std::cin>>b[g];
    }
}
std::cout<<"\n\ndata setelah di ubah"<< '\n';
for(int h=0;h<jumlah;h++){
std::cout<<"\nb["<<h<<"]="<<b[h]<< '\n';
}

std::cout<<"\n\nmasukan data yang akan di hapus:"<< '\n';
std::cin>>hapus;

for (int j=0; j< jumlah; j++){
    if(hapus==b[j]){

        for (int k=j            ;k<jumlah; k++){
            b[k]=b[k+1];
    }
    jumlah =1;
    break;
}
}
std::cout<<"\n\ndata baru:"<< '\n';
for (int p=0;p<jumlah;p++){
    std::cout<<"\nb["<<p<<"]="<<b[p]<< '\n';
}
std::cout<<"\n\nmasukan nilai data ysng akan di cari :"<< '\n';
std::cin>>cari;

for (int n=0;n<jumlah;n++){
    if(cari==b[n]){

    std::cout<<"\nnilai"<<cari<<"ditemukanpada indeks:"<<n<< '\n';
    ketemu=1;
    break;
    }
}

if (ketemu==0)
    std::cout<<"maaf data yang anda cari tidak ditemukan"<< '\n';
return 0;
}
