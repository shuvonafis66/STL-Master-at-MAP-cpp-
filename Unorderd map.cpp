#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Creating an unordered_map
    unordered_map<int, string> myUnorderedMap;

    // empty()
    cout << "Is unordered_map empty? " << (myUnorderedMap.empty() ? "Yes" : "No") << endl;

    // insert()
    myUnorderedMap.insert({1, "One"});
    myUnorderedMap.insert({2, "Two"});
    myUnorderedMap.insert({3, "Three"});

    // size()
    cout << "Size of the unordered_map: " << myUnorderedMap.size() << endl;

    // erase()
    int keyToErase = 2;
    myUnorderedMap.erase(keyToErase);

    // clear()
    // myUnorderedMap.clear();

    // find()
    int keyToFind = 3;
    auto it = myUnorderedMap.find(keyToFind);
    if (it != myUnorderedMap.end()) {
        cout << "Key " << keyToFind << " found. Value: " << it->second << endl;
    } else {
        cout << "Key " << keyToFind << " not found." << endl;
    }

    // count()
    int keyToCount = 1;
    int count = myUnorderedMap.count(keyToCount);
    cout << "Number of elements with key " << keyToCount << ": " << count << endl;

    return 0;
}

