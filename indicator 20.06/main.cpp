#include <iostream>
#include <set>
using namespace std;

int main() {
  
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "Enter elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    
    set<int> setB;
    for (int i = 0; i < N; i++) {
        setB.insert(B[i]);
    }

    set<int> resultSet;
    for (int i = 0; i < M; i++) {
        if (setB.find(A[i]) == setB.end()) {
            resultSet.insert(A[i]);
        }
    }

    int* C = new int[resultSet.size()];
    int index = 0;

   
    for (auto elem : resultSet) {
        C[index++] = elem;
    }

    cout << "Elements of array C (elements of A not in B without duplicates): ";
    for (int i = 0; i < resultSet.size(); i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
