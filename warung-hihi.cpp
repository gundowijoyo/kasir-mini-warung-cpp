#include <iostream> /*include  modul input output*/
#include <string>  /*include variabel string*/
using namespace std;
int main(){
cout<<"Selamat Datang\n";
cout<<"Di Warung Rumah Makan Mini\n";
cout<<"Menu Makanan :";
cout<<"\n1. Nasi Padang - Rp20000\n2. Ayam Krispy- Rp15000\n3. Mie Ayam Ngenah - Rp12000\n4. Bakso Kuah - Rp18000\n5. Chiken - Rp10000\n==========================================\n";
std::string nama;
int select;
int jm;
int uangBayar;
int uangBalik;
/*singktan dari menu makanan*/
int n,a,m,b,c;
/*harga setiap makanan di tampung dalam variabel*/
n = 25000;
a = 15000;
m = 12000;
b = 18000;
c = 10000;

cout<<"Masukan Nama Kamu : ";
std::cin>>nama;
cout<<"Nama Pelanggan : "<<nama;
cout<<"\nMasukan kode pesanan (1,2,3,4,5) :";
std::cin>>select;
/*kondisi logika*/
if(select==1){
 cout<<"Menu Makanan Yang Di Pilih Adalah Nasi Goreng \n";
 cout<<"Jumblah Makanan Yang Di Pesan : ";
std::cin>>jm;
  cout<<"Total Rp"<<n*jm;
 cout<<"\n-------------------------------------------\n";
 cout<<"Uang Yang Di Bayarkan : Rp ";
 std::cin>>uangBayar;
 cout<<"\nKembalian : Rp"<<uangBayar-n*jm;
 
}else if(select==2){
 cout<<"Menu Makanan Yang Di Pilih Adalah Ayam Bakar\n";
 cout<<"Jumblah Makanan Yang Di Pesan : ";
std::cin>>jm;
  cout<<"Total Rp"<<a*jm;
 cout<<"\n-------------------------------------------\n";
 cout<<"Uang Yang Di Bayarkan : Rp ";
 std::cin>>uangBayar;
 cout<<"\nKembalian : Rp"<<uangBayar-a*jm;
 
}else if(select==3){
 cout<<"Menu Makanan Yang Di Pilih Adalah Mie Ayam\n";
 cout<<"Jumblah Makanan Yang Di Pesan : ";
std::cin>>jm;
  cout<<"Total Rp"<<m*jm;
 cout<<"\n-------------------------------------------\n";
 cout<<"Uang Yang Di Bayarkan : Rp ";
 std::cin>>uangBayar;
 cout<<"\nKembalian : Rp"<<uangBayar-m*jm;
 
}else if(select==4){
 cout<<"Menu Makanan Yang Di Pilih Adalah Bakso Kuah \n";
 cout<<"Jumblah Makanan Yang Di Pesan : ";
std::cin>>jm;
  cout<<"Total Rp"<<b*jm;
 cout<<"\n-------------------------------------------\n";
 cout<<"Uang Yang Di Bayarkan : Rp ";
 std::cin>>uangBayar;
 cout<<"\nKembalian : Rp"<<uangBayar-b*jm;
 
}else if(select==5){
 cout<<"Menu Makanan Yang Di Pilih Adalah Chiken\n";
 cout<<"Jumblah Makanan Yang Di Pesan : ";
std::cin>>jm;
  cout<<"Total Rp"<<c*jm;
 cout<<"\n-------------------------------------------\n";
 cout<<"Uang Yang Kamu Bayar : Rp ";
 std::cin>>uangBayar;
 cout<<"\nKembalian : Rp"<<uangBayar-c*jm<<"\n";
}else{
 cout<<"Input Ngga Valid Keknya.";
}
return 0;
