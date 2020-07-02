#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	 vector<int> out;
	 stringstream s(str);

	 char c;
	 int i;
	 while (s>>i){
        out.push_back(i);
        s>>c;
	 }
	 return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
