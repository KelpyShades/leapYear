#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "...Program To Calculate If A Year Is A Leap Year Or Not..." << endl;
    cout << "\nEnter Year: ";
    cin >>x;
    x= x % 4;
    if (x == 0){
        cout << "\nIt's A Leap Year!" <<endl;
    }else {
        cout << "\nIt's Not A Leap Year!" <<endl;
    }
    return 0;
}
