/*
wprowadzenie do funkcji "string"
wersja 1.1
nie jest to zadanie, a jedynie zapoznanie siê z funkcj¹ "string", która z pewnoœæi¹ siê wam przyda jeœli tylko bêdziecie chcieli mieæ silniejsze wiêzi z programowaniem
*/

#include <iostream>

using namespace std;

int main()
{
  char znak;
  string napis;//string s³u¿y do przechowywania ca³ych napisów, tylko tekst(tablica znaków)
  int tablica_intigerow[20];

  napis = "Ula"; //pojedyñcze litery dajemy w ', a ca³e napisy w "
  napis += " jest fajna";// do napisu masz dodaæ "jest fajna"
  cout << napis;


  //znak = 'g';
  //cout << znak;
    return 0;
}
