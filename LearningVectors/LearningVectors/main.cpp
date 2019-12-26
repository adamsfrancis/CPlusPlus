/*
- Declare 2 empty vectors of integers named vector1 and vector 2
- Add 10 and 20 to vector1 using push_back
- Display the elements in vector1 using the at() method and it's size using the size() method
- Add 100 and 200 to vector2, repeat above step for vector2
- Declare an empty 2d vector called vector_2d
- Add vector1 and vector2 to vector_2d using push_back
- Display the elements in vector_2d using the at() method
- Change vector1.at(0) to 1000
- Display again
*/

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(100);
	vector2.push_back(200);

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Vector 1 contains: " << vector1.size() << "elements." << "\n" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "Vector 2 contains: " << vector1.size() << "elements." << "\n" << endl;

	vector <vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1) << "\n" << endl;
	cout << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1) << "\n" << endl;

	vector1.at(0) = 1000;

	cout << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1) << "\n" << endl;
	cout << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1) << "\n" << endl;

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Vector 1 contains: " << vector1.size() << "elements." << endl;
}