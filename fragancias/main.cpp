#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){

//    void gotoxy(int x, int y){
//    HANDLE hCon;
//    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pw;
//    pw.X = x;
//    pw.Y = y;
//   SetConsoleCursorPosition(hCon, pw);
//}
char a;
  a=getch();

  switch(a)
  {
   case char(80):
    cout <<"hola";
   break;

   case char(72):
cout <<"hola2";
   break;

   default:
    cout << "nada";
   }









//
//    char a;
// a=getch();
//if(a == char(13)){
//cout << "hola";
//system("pause");
//}
return 0;
/*
    while(){
        int opc;
        cin >> opc;
        switch(opc){

    case 1:

    case 2:
        }
    }





return 0;
*/



}
