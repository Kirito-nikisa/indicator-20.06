#include <iostream>
using namespace std;

int main() {

    int M;
    cout << "Enter the size of array A: ";
    cin >> M;

    int* A = new int[M];

 
    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    
    int choice;
    cout << "What do you want to remove? Enter 1 for even numbers, 2 for odd numbers: ";
    cin >> choice;

  
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (choice == 1 && A[i] % 2 != 0) {
            count++;
        }
        if (choice == 2 && A[i] % 2 == 0) {
            count++;
        }
    }

    int* B = new int[count];
    int index = 0;


    for (int i = 0; i < M; i++) {
        if (choice == 1 && A[i] % 2 != 0) {
            B[index++] = A[i];
        }
        if (choice == 2 && A[i] % 2 == 0) {
            B[index++] = A[i];
        }
    }
    cout << "Elements of array B: ";
    for (int i = 0; i < count; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;

    return 0;
}
