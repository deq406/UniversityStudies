#include <iostream>

using namespace std;

int f1();
int f2(int k);
int f3();

int main() {
	int k = 0;
	setlocale(LC_CTYPE, "RUS");
	cout << "\nЗадание 9-1\n" << f1();
	cout << "Число k: "; cin >> k;
	cout << "\nЗадание 15-2\n" << f2(k);
	cout << "\nЗадание 13-2\n" << f3();
}

int f1() {
	int arr[100], k = 1;
	int a = 0;
	FILE* f;
	fopen_s(&f, "fileA.txt", "r");
	for (int i = 0; i < 19; i++) {
		fscanf_s(f, "%d", &a);
		for (int j = 0, n = 0; j < k, n < 1; j++) {
			if ((j == k - 1) && (n == 0) && (a != arr[j])) {
				arr[k - 1] = a;
				k++;
				cout << arr[j] << " ";
				break;
			}
			else if (arr[j] == a) n++;
		}
	}
	k--;
	fclose(f);
	fopen_s(&f, "fileB.txt", "w");
	for (int i = 0; i < k; i++) {
		fprintf(f, "%d ", arr[i]);
	}
	fclose(f);
	return 0;
}

int f2(int k) {
	char tmp[51];
	int n;
	FILE* f1;
	FILE* f2;
	fopen_s(&f1, "F1.txt", "r");
	fopen_s(&f2, "F2.txt", "w");
	for (int i = 0; i < 8; i++) {
		fgets(tmp, 50, f1);
		n = strlen(tmp);
		if ((i >= k-1) && (i <k+2)) {
			fputs(tmp, f2);
		}
	}
	return 0;
}

int f3() {
	char tmp[51];
	char a[1];
	int n;
	FILE* f1;
	FILE* f2;
	fopen_s(&f1, "F1.txt", "r");
	fopen_s(&f2, "File2.txt", "w");
	for (int i = 0; i < 6; i++) {
		fgets(tmp, 50, f1);
		n = strlen(tmp);
		a[0] = tmp[0];
		if (atoi(a) != 0) {
			fputs(tmp, f2);
		}
	}
	return 0;
}