#include<iostream>
using namespace std;

double c (double);
float c (float);
int c (int);

int main(){
    double suhu1;
    float suhu2;
    int suhu3;
    cout << "Masukkan berapa fahrenheit 1: ";
    cin >> suhu1;
    cout << "Masukkan berapa fahrenheit 2: ";
    cin >> suhu2;
    cout << "Masukkan berapa fahrenheit 3: ";
    cin >> suhu3;
    cout << "Hasil konversi C = " << c(suhu1) << endl;
    cout << "Hasil konversi C = " << c(suhu2) << endl;
    cout << "Hasil konversi C = " << c(suhu3) << endl;
    return 0;
}
double c (double suhu1){
    return ((suhu1 - 32.0)*5/9);
}
float c (float suhu2){
    return ((suhu2 - 32.0)*5/9);
}
int c (int suhu3){
    return ((suhu3 - 32.0)*5/9);
}
