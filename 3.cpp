// Name: Saaj Mulik
// PRN: 23070123109
// Class: EnTC-B2
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter any integer: ";
    cin>>a;
    cout<<"\ninteger = "<<a<<" and size is "<<sizeof(a)<< "bytes";
    int register b;
    cout<<"\nenter a number: ";
    cin>>b;
    cout<<"\nREGISTER = "<<b<<" and size is "<<sizeof(b)<< "bytes";
    int auto c;
    cout<<"\nenter an integer: ";
    cin>>c;
    cout<<"/nAuto = "<<c<<" and size is "<<sizeof(c)<< "bytes";
    return 0;
}
/* OUTPUT:
enter any integer: 1

integer = 1 and size is 4bytes
enter a number: 56

REGISTER = 56 and size is 4bytes
enter an integer: 3456
/nAuto = 3456 and size is 4bytes
--------------------------------
Process exited after 10.3 seconds with return value 0
Press any key to continue . . . */
