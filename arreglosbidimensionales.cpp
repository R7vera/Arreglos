#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

string conversion( int entero){
    string numeroCadena = "";
    stringstream ss;
    ss << entero;
    ss >> numeroCadena;
    return numeroCadena;
}

int main(){
    //int entero;
    int max = 50;
    string dat[max/10][max/5];
    string da;
    int opc;
    string numero, letrainser;
    int q = 1, e = 0;
    for( int z = 0; z < 5; z++ ){
        for( int b = 0; b < 10; b++){
            da = conversion(b+(1+(z*10)));
            dat[z][b] = da;
        }
    }

reg:
    system("cls");
    for( int z = 0; z < (max/10); z++ ){
         for( int b = 0; b < 10; b++){
              if( z == e){
                  cout <<" " << dat[5-(z+1)][b]<< " ";
              }
              else if( z == q ){
                  cout <<" " << dat[5-(z+1)][10 - (b+1)]<< " ";
              }
         }
         if( z == e ){
             e += 2;
         }
         else if( z == q ){
             q += 2;
         }
         cout << endl;

     }
     e = 0;
     q = 1;
     cout << "Ingresa caracter a cambiar: ";
     cin >> numero;
     for( int z = 0; z < 5; z++ ){
          for( int b = 0; b < 10; b++){
               if( dat[z][b]== numero){
                   cout << "Escribe nuevo dato: ";
                   cin >> letrainser;
                   dat[z][b] = letrainser;
                   break;
               }
          }
     }
     goto reg;




}
