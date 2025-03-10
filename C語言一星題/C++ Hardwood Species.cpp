#include <iostream>
#include <iomanip> 
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    cin.ignore();

    while (n--) {
        map<string, float> tree;
        string index;
        
        int count = 0;
        while (getline(cin, index)) {
            if (index.empty()) break; //新招
            tree[index]++;
            count++;
        }
        
        cout << fixed << setprecision(4); //新招 記得加fixed
        for (const auto& pair : tree) {
            cout << pair.first << " " << pair.second * 100 / count << endl;
        }
        cout << endl;
    }
}
