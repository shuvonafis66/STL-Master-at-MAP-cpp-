#include <iostream>
#include <map>

using namespace std;

int main() {
    // Creating a multimap
    multimap<int, string> myMultiMap;

    // empty()
    cout << "Is multimap empty? " << (myMultiMap.empty() ? "Yes" : "No") << endl;

    // insert()
    myMultiMap.insert({1, "One"});
    myMultiMap.insert({2, "Two"});
    myMultiMap.insert({3, "Three"});
    myMultiMap.insert({1, "Uno"}); // Inserting a duplicate key

    // size()
    cout << "Size of the multimap: " << myMultiMap.size() << endl;

    // erase()
    int keyToErase = 1;
    myMultiMap.erase(keyToErase);

    // clear()
    // myMultiMap.clear();

    // find()
    int keyToFind = 3;
    auto it = myMultiMap.find(keyToFind);
    if (it != myMultiMap.end()) {
        cout << "Key " << keyToFind << " found. Value: " << it->second << endl;
    } else {
        cout << "Key " << keyToFind << " not found." << endl;
    }

    // count()
    int keyToCount = 1;
    int count = myMultiMap.count(keyToCount);
    cout << "Number of elements with key " << keyToCount << ": " << count << endl;

    // lower_bound()
    auto lowerBoundIt = myMultiMap.lower_bound(2);
    cout << "Lower bound of key 2: " << lowerBoundIt->second << endl;

    // upper_bound()
    auto upperBoundIt = myMultiMap.upper_bound(2);
    cout << "Upper bound of key 2: " << upperBoundIt->second << endl;

    // equal_range()
    auto equalRange = myMultiMap.equal_range(2);
    for (auto it = equalRange.first; it != equalRange.second; ++it) {
        cout << "Equal range for key 2: " << it->second << endl;
    }

    return 0;
}

