#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode;
cout<<"masukkan kode barang[A..C]: ";
cin>>kode;
switch(kode)
{
case 'A':
case 'a':
cout<<"alat olah raga";
break;
case 'B':
case 'b':
cout<<"alat elektronik";
break;
case 'C':
case 'c':
cout<<"alat masak";
break;
default:
cout<<"anda salah memasukan kode";
break;
}
getch();
}
