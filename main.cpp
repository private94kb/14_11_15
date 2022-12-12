#include <iostream>
#include <ctime>//бібліотека для time
#include <cstdlib>//бібліотека для random
using namespace std;
int main(){
	int arr[3][3];
	int diagonal1 = 0;
	int diagonal2 = 0;
	srand(time(NULL));//кожного разу, коли програма запускається, буде створюватися нова початкова точка для генерації послідовності чисел 
	for (int i = 0; i < 3; i++) {// цикл для рядків
	for (int j = 0; j < 3; j++) {// цикл для стовпців
			arr[i][j] = rand() %10; }
	}
	for (int i = 0; i < 3; i++) {
		diagonal1 = arr[i][i] + diagonal1;//перша діагональ
	}
	for (int i = 0,j=2; i < 3; i++,j--) {
		diagonal2 = arr[i][j] + diagonal2;//друга діагональ
	}	
	for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ';//вивід масиву
		}
		cout << endl;
	}
	cout << diagonal1 << " - first diagonal\n" << diagonal2 << " - second diagonal";
}