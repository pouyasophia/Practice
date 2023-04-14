
#include <vector>
#include "insertionSort.cpp"
int main () {

    std::vector<int> testVector = {4,1,9,10,3,15};
    
    printVector(InsertionSortAscending(testVector));
    printVector(InsertionSortDescending(testVector));
}