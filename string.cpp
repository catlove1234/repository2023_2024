/*
wprowadzenie do funkcji "string"
wersja 1.1
nie jest to zadanie, a jedynie zapoznanie si� z funkcj� "string", kt�ra z pewno��i� si� wam przyda je�li tylko b�dziecie chcieli mie� silniejsze wi�zi z programowaniem
*/

#include <iostream>

using namespace std;

int main()
{
  char znak;
  string napis;//string s�u�y do przechowywania ca�ych napis�w, tylko tekst(tablica znak�w)
  int tablica_intigerow[20];

  napis = "Ula"; //pojedy�cze litery dajemy w ', a ca�e napisy w "
  napis += " jest fajna";// do napisu masz doda� "jest fajna"
  cout << napis;


  //znak = 'g';
  //cout << znak;
    return 0;
}
