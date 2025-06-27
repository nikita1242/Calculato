#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    setlocale(LC_ALL,"RUS");

    bool i;
    bool a;
    string action;


    cout << ("напише 1 булевое выражения: \n");
    cin >> i;
    cin >> a;

    cout << ("выбери действие: ");
    cin >> action;

    if(action == "AND"){
        cout << ("получаеться:")  << (i && a );
    }
    if(action == "XOR"){
        cout << ("получаеться:")  << (i ^ a );
    }
    if(action == "OR"){
        cout << ("получаеться:")  << (i || a );
    }





    return 0;
}
