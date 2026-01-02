#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    cout << "enter a character: "<< endl;
    ch = cin.get();

    if (ch >= 'a' && ch <= 'z') {
        cout << "Small letter, ASCII: " << int(ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Capital letter, ASCII: " << int(ch);
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit, ASCII: " << int(ch);
    }
    else {
        cout << "Symbol, ASCII: " << int(ch);
}


    

    return 0;
}


