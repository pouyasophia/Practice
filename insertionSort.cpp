#include <iostream>
#include <vector>

std::vector<int> InsertionSortAscending(std::vector<int> vectorA) {

    int n=vectorA.size();
    for (int i=1; i<n; i++) {
        int j = i;
        while (j>0 & (vectorA[j-1] > vectorA[j])) {
            std::swap(vectorA[j-1], vectorA[j]);
            j=j-1;
        }
        
    }
    return vectorA;
}

std::vector<int> InsertionSortDescending(std::vector<int> vectorA) {

    int n=vectorA.size();
    for (int i=1; i<n; i++) {
        int j = i;
        while (j>0 & (vectorA[j-1] < vectorA[j])) {
            std::swap(vectorA[j-1], vectorA[j]);
            j=j-1;
        }
    }
    return vectorA;
}

void printVector(std::vector<int> vectorA) {

    for (int i=0; i<vectorA.size(); ++i) {
        std::cout << vectorA[i] << " ";
    }
    std::cout << "\n";
}