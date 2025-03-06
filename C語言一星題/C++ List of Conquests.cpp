#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<string, int> country;
    string index;

    while (n--) {
        cin >> index;
        country[index]++;
        getline(cin, index);
    }

    for (const auto& pair : country) {
        cout << pair.first << " " << pair.second << endl;
    }
}
