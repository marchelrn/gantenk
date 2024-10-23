#include <iostream>
using namespace std;

void konversi(int detik){
     
    int  waktu2, jam, menit, detiksisa;

    cout<<"Masukan detik : ";  

    jam = detik  / 3600;

    detiksisa = detik  % 3600;

    menit = detiksisa / 60;

    detiksisa = detiksisa % 60;


    cout<<"Hasil konversi dari : "<< detik << " detik adalah " << jam << " jam " << menit << " menit " << detiksisa << " detik";
}
void 
int main(){
   int waktu1;

    cin >> waktu1;
    konversi(waktu1);
    return 0;
}
