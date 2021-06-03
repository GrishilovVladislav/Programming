#include <iostream>
#include "tree.h"

using namespace std;


int main() {
    Tree tree;
    string str;
    cout << "Enter your string:\n";
    cin >> str;
    for (auto i : str) {
        tree.insert(i);
    }
    cout << "Enter a letter:\n";
    char ch;
    cin >> ch;
    cout << "There are " << tree.countNodes(ch) << " under this node";
    return 0;
}