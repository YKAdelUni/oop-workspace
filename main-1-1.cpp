#include <iostream>

extern int sum_diagonal(int array[4][4]);

using namespace std;

int main(void){
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    cout << "The sum of the array is " << sum_diagonal(array) << endl;

    return 0;
}