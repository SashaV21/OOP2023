#include <iostream>
using namespace std;

int readInt(string *prompt){
    cout << prompt << endl;
    int resultOfRead = 0;
    while(cin >> resultOfRead){
        cout << "ILLEGAL INPUT> TRY AGAIN!" << endl;
    }
    return resultOfRead;
}
