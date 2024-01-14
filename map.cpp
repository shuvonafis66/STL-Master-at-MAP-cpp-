#include <iostream>
#include <map>

using namespace std;

int main() {
    // Creating a map
    map<int, string> myMap;

    // empty()
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // insert()
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});

    // size()
    cout << "Size of the map: " << myMap.size() << endl;

    // erase()
    myMap.erase(2);

    // clear()
    // myMap.clear();

    // find()
    int keyToFind = 3;
    auto it = myMap.find(keyToFind);
    if (it != myMap.end()) {
        cout << "Key " << keyToFind << " found. Value: " << it->second << endl;
    } else {
        cout << "Key " << keyToFind << " not found." << endl;
    }

    // count()
    int keyToCount = 1;
    int count = myMap.count(keyToCount);
    cout << "Number of elements with key " << keyToCount << ": " << count << endl;

    // lower_bound()
    auto lowerBoundIt = myMap.lower_bound(1);
    cout << "Lower bound of key 1: " << lowerBoundIt->second << endl;

    // upper_bound()
    auto upperBoundIt = myMap.upper_bound(1);
    cout << "Upper bound of key 1: " << upperBoundIt->second << endl;

    // equal_range()
    auto equalRange = myMap.equal_range(1);
    cout << "Equal range for key 1: " << equalRange.first->second << " - " << equalRange.second->second << endl;

    return 0;
}

