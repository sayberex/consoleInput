#include <iostream>

using namespace std;

int main() {
    /*
    cout << endl << "-----[read symbols from console until enter key won't pressed]-----" << endl;
    string in; char ch;
    while(cin.get(ch) )
    {
        if (ch == '\n')     break;
        else                in.push_back(ch);
    }
    cout << in << endl;
    cout << endl << "-----[read symbols from console until enter key won't pressed]-----" << endl;
     */

    /*
    cout << endl << "--------------[read different data types from console]-------------" << endl;
    int     ival;
    double  dval;
    string  strval;

    cin >> ival >> dval >> strval;

    cout << "ival   = " << ival << endl;
    cout << "dval   = " << dval << endl;
    cout << "strval = " << strval << endl; //if string have spaces reads only before space
    cout << endl << "--------------[read different data types from console]-------------" << endl;
    */

    // DOESN'T WORK LIKE THIS
    //cout << endl << "--------------[read all data from console]-------------" << endl;
    //string  strval; cin.unsetf(ios::skipws); cin >> strval; cout << "strval = " << strval << endl;
    //cout << endl << "--------------[read all data from console]-------------" << endl;
    // DOESN'T WORK LIKE THIS


    // DOESN'T WORK LIKE THIS
    //cout << endl << "--------------------[read all data from console]-------------------" << endl;
    //char ch; while (cin >> ch) { if (ch == '\n') break; else cout << ch; }
    //cout << endl << "--------------------[read all data from console]-------------------" << endl;
    // DOESN'T WORK LIKE THIS

    std::cout << "Terminate..." << std::endl;
    return 0;
}
