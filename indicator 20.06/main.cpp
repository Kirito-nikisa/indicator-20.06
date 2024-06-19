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

 
    set<int> commonElements;

    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                commonElements.insert(A[i]);
                break;
            }
        }
    }
    int* C = new int[commonElements.size()];
    int index = 0;

    for (auto elem : commonElements) {
        C[index++] = elem;
    }

 
    cout << "Elements of array C (common elements without duplicates): ";
    for (int i = 0; i < commonElements.size(); i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
