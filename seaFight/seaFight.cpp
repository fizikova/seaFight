#include <iostream>
using namespace std;
void printField(char**& fieldUser, char**& fieldComp) {
    
    cout << "  1 2 3 4 5 6 7 8 9 10\t  1 2 3 4 5 6 7 8 9 10" << endl;
    for (int i = 0; i < 10; i++) { // 
        cout << char('A' + i) << ' ';
        for (int j = 0; j < 10; j++) { //
            cout << fieldUser[i][j] << ' ';
        }
        cout << '\t';
        cout << char('A' + i) << ' ';
        for (int j = 0; j < 10; j++) {
            cout << fieldComp[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    char** fieldUser = new char* [10];
    char** fieldComp = new char* [10];

    for (int i = 0; i < 10; i++) {
        fieldUser[i] = new char[11];
        fieldUser[i][10] = '\0';
        _strnset_s(fieldUser[i], 11, '-', 10);
        fieldComp[i] = new char[11];
        fieldComp[i][10] = '\0';
        _strnset_s(fieldComp[i], 11,  '-', 10);
    }
    printField(fieldUser, fieldComp);
}

