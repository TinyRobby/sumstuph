#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << argv[0] << endl;
    string dn;
    cout << "your domain name(example.com):" << endl;
    getline(cin,dn);
    return 0;
}