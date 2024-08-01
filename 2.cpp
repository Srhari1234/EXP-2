// Name: Saaj Mulik
// PRN: 23070123109
// Class: EnTC-B2
#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    short int c;
    long int d;
    float e;
    double f;
    bool g;

    cout<<"enter a character: ";
    cin>>a;
    cout<<"size of char: "<< sizeof(a)<<endl;

    cout<<"enter an int: ";
    cin>>b;
    cout<<"size of int: "<< sizeof(b)<<endl;

    cout<<"enter an short int: ";
    cin>>c;
    cout<<"size of short int: "<< sizeof(c)<<endl;

    cout<<"enter an long int: ";
    cin>>d;
    cout<<"size of long int: "<< sizeof(d)<<endl;

    cout<<"enter an float: ";
    cin>>e;
    cout<<"size of float: "<< sizeof(e)<<endl;

    cout<<"enter an double: ";
    cin>>f;
    cout<<"size of double: "<< sizeof(f)<<endl;

    cout<<"enter an bool: ";
    cin>>g;
    cout<<"size of bool: "<< sizeof(g)<<endl;

    return 0;
}
/* OUTPUT:
enter a character: a
size of char: 1
enter an int: 8
size of int: 4
enter an short int: 2
size of short int: 2
enter an long int: 99
size of long int: 4
enter an float: 9.9
size of float: 4
enter an double: 1234
size of double: 8
enter an bool: 4567
size of bool: 1

--------------------------------
Process exited after 17.31 seconds with return value 0
Press any key to continue . . . */
