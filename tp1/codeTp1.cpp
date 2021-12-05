#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
 {

//1:
    char nameChar = 'A';
    cout << nameChar << endl;

//2:
    char hexaChar[3] = "57";
    cout << hexaChar << endl;

//3: 
    char fullName[20] = "ABDOU ABDELOUAHAB";
    cout << fullName << endl;

//4:
    int a;
    cout << a << endl;

//5:
    int b = -1;
    cout << b << endl;

//6:
    double x = 3.18*pow(10, -5);
    cout << "x = " << x << " size of x = " << sizeof(x) << endl;

//7: 
    char& refNameChar = nameChar;
    cout << refNameChar << endl;

//8:
    char *pFullName = fullName;
    cout << pFullName << endl;
    pFullName += 4;
    cout << pFullName << endl;

//9:
    char address[] = "National metallurgical academy of Ukraine, Dnipro, Gagarina avenue, 4";
    char *pAddress;
    
    pAddress = address;
    cout << pAddress << endl;


    return 0;
}