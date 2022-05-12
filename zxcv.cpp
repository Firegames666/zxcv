#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

//пузырьковая сортировка
/*void bubbleSort(int a[], int s) {
	int temp;
	for (int i = 0; i < s; i++) {
		for (int j = s - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
}*/

//сортировка выбором
/*void selectSort(int a[], int s) {
	int temp, a1;
	for (int i = 0; i < s; i++) {
		temp = i;
		a1 = a[i];
		for (int j = i + 1; j < s; j++) {
			if (a[j] < a1) {
				temp = j;
				a1 = a[j];
			}
		}
		if (temp != i){
			a[temp] = a[i];
			a[i] = a1;
		}
	}
}*/

//сортировка вставками 
/*void insertSort(int a[], int s) {
	int temp, j;
	for (int i = 0; i < s; i++) {
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = temp; 
	}
}*/

//быстрая сортировка
/*void quickSort(int a[], int s) {
	int i = 0, j = s;
	int temp, p;
	p = a[s / 2];
	do {
		while (a[i] < p) i++;
		while (a[j] < p) i++;
		if (i <= j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) quickSort(a, j);
	if (s > i) quickSort(a + i, s - i);
}*/

// линейный поиск
/*int linearSearch(int a[], int s, int k) {
	for (int i = 0; i < s; i++) {
		if (a[i] == k)
			return i;
	}
	return -1;
}*/

// двойной поиск
/*int binarySearch(int a[], int Lb, int Ub, int k) {
	int M;
	while (1)
	{
		M = (Lb + Ub) / 2;
		if (k < a[M])
			Ub = M - 1;
		else if (k > a[M])
			Lb = M + 1;
		else
			return M;

		if (Lb > Ub)
			return -1;
	}
}*/

/*int Fg(int a, int b, int c) {
	int D;
	int x1, x2;
	D = b * b - 4 * a * c;
	if (D > 0) {
		return 2;
	}
	else if (D == 0) {
		return 1;
	}
	else if (D < 0)
		return 0;
	else if (D < 0)
		return -1;
}*/



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int wk, sroc;
	char doxod;
	cout << "Введите срок вклада\n";
	cin >> wk;
	cout << "Срок\n";
	cin >> sroc;
	switch (sroc)
	{
	case 3:
		cout << wk - (wk / 100 * 9);
			break;
	case 6:
		cout << wk - (wk / 100 * 11.5);
		break;
	case 12:
		cout << wk - (wk / 100 * 13.5);
		break;
	case 18:
		cout << wk - (wk / 100 * 15);
		break;
	case 24:
		cout << wk - (wk / 100 * 18);
		break;
	case 36:
		cout << wk - (wk / 100 * 24);
		break;
	default:
		break;
	}*/
	/*int a, b, mat;
	cout << "Введите материал: пластик, текстиль, алюминий (1/2/3)";
	cin >> mat;
	switch (mat){
	case 1:
		cout << "Пластик" << a * b * 11;
		break;
	case 2:
		cout << "Текстиль" << a * b * 12;
		break;
	case 3:
		cout << "Алюминий" << a * b * 14;
		break;
	default:
		break;
	}*/
	/*int a, summa = 0, t = 0;
	cin >> a;
	while (a != 0) {
		summa += a;
		cin >> a;
		t += 1;
	}
	cout << summa << endl;
	cout << summa / t;*/
	/*for (int i = 0; i < 10; i++) {
		i++;
		cout << i << endl;
		cout << "         " << i * i << endl;
	}*/
	/*int I, P, U;
	cout << "Введите мощность и напряжение\n";
	cin >> P, U;
	if (U == 0) {
		cout << "Error";
	}
	else
		cout << P / U;*/
	/*int a, b;
	char j;
	cout << "Введите количество фотографий\n";
	cin >> a;
	cout << "9*12 или 10*15?(1/2)\n";
	cin >> b;
	if (b == 1) {
		j = 3.45 * a;
		if (a > 10)
			cout << j - (j / 100 * 5) << "руб.";
	}
	else if (b == 2) {
		j = 5.04 * a;
		if (a > 10)
			cout << j - (j / 100 * 5) << "руб.";
	}*/
	/*int a, b, c;
	cin >> a >> b >> c;
	cout << Fg(a, b, c);*/
}