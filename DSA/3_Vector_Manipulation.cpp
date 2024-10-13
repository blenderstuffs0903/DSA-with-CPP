#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

int main() {
     vector <int> vector(1);
     cout << vector[0] << endl;
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << endl;
     vector.push_back(1);
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << endl;
     vector.push_back(2);
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << endl;
     vector.push_back(3);
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << endl;
     vector.resize(5);
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity(5) = " <<vector.capacity() << endl;
     vector.resize(7);
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << "\n\n";
     for (int i : vector) {
          cout << i << endl;
     }
     vector.pop_back();
     cout << "Size = " <<vector.size() << endl;
     cout << "capacity = " <<vector.capacity() << endl;
     for (int i : vector) {
          cout << i << endl;
     }
}