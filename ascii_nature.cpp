#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    cout << "enter a character: "<< endl;
    ch = cin.get();

    if (int(ch) >= 97 && int(ch) <= 122) {
        cout << "the charcater '" << ch << "' is a small letter with ascii value: "<< int(ch) << endl;
    }
    else if (int(ch) >= 65 && int(ch) <= 90) {
        cout << "the charcater " << ch << " is a capital letter with ascii value: "<< int(ch) << endl;
    }
    else if (int(ch) >=48 && int(ch) <=57 ) {
        cout << "the charcater '"<< ch <<"' is a number with ascii value: "<< int(ch) << endl;
    }
    else {
        cout << "other character" << endl;
    }

    

    return 0;
}


