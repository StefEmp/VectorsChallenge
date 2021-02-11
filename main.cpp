#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main() {
    //delcare 2 empty int vectors
    std::vector <int> vector1;
    std::vector<int> vector2;
    //add 10 and 20 dynamically to first vector
    vector1.push_back(10);
    vector1.push_back(20);
    //add 100 and 200 to vector 2
    vector2.push_back(100);
    vector2.push_back(200);
    //display vector 2 elements and size of vector
    cout << "In vector 2 the value at the first element is: " << vector2.at(0) << endl;
    cout << "In vector 2 the value at the second element is: " << vector2.at(1) << endl;
    cout << "The size of vector 2 is: " << vector2.size() << endl;
    //create a 2d vector
    std::vector <std::vector<int>> vector2D;
    //push vector 1 and 2 into vector2D
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    
    //print out the elements in vector2D
    cout << "The elements in vector2d are: " << vector2D.at(0).at(0) << "  " << vector2D.at(0).at(1) << "  " << vector2D.at(1).at(0) << "  " << vector2D.at(1).at(1) << endl;
  //change the first element of vector 1 to 1000
    vector1.at(0) = 1000;
  //see what happens if you reprint all elements in vector2D
   cout << "The elements in vector2d are: " << vector2D.at(0).at(0) << "  " << vector2D.at(0).at(1) << "  " << vector2D.at(1).at(0) << "  " << vector2D.at(1).at(1) << endl;
   //check vector1 to make sure the element changed
   cout << "In vector 1 the elements values are: " << vector1.at(0) << "  and: " << vector1.at(1) << endl;
   //the reason it does not change in vector2D is because the values from vector1 were pushed previously. To fix this easily, you would need to change that element within vector2D, unless you wanted to remove and re-push vector1
  
}
