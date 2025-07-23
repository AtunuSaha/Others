#include<iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {

    int myArray[] = {10, 25, 30, 44, 50, 78, 100};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    double average = calculateAverage(myArray, arraySize);
    cout << "The average of the array is: " << average << endl;

    return 0;
}
