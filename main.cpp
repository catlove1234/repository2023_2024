#include <iostream>

using namespace std;

int main()
{
    string name;
    string place;
    cout << "Hello world!" << endl;
    cout << "Hi there! What's your name?" << "\n";
    cin >> name;
    cout << "Hello, " << name <<"! Where are you from?" << "\n";
    cin >> place;
    cout << "I've been to" << place <<" and I hated it.";
    return 0;
}
