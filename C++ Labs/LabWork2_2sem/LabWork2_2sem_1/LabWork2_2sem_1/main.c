#include <stdio.h>
#include <string.h>
#
int fun2() {//вариант 3 1
/* Дан файл вещественных чисел, содержащий элементы квадратной матрицы(по строкам)
, причем начальный элемент файла содержит значение количества столбцов ма
трицы.
Создать новый файл той же структуры, содержащий транспонированную матрицу.*/
int a; errno_t err, columns = 4;
FILE* f;
err = fopen_s(&f, "variant3.txt", "w");
if (err != 0)
{
perror("Невозможно создать файл\n");
return EXIT_FAILURE;
}
int Matrix[16] = { 2,7,12,-4,
6,-45,0,13,
96,43,-2,8,
33,-5,63,-11 };
// вывод первой матрицы
fprintf(f, "В матрице %d столбца.\n============================\n", columns);
for (int j = 0; j < 16; j += 4)
{
for (int i = j; i < j + 4; i++)
{
fprintf(f, "%d\t", Matrix[i]);
}
fprintf(f, "\n", "\n");
}
fprintf(f, "============================\n");
// вывод второй матрицы
err = fopen_s(&f, "variant3Transporate.txt", "w");
if (err != 0)
{
perror("Невозможно создать файл\n");
return EXIT_FAILURE;
}
fprintf(f, "В матрице %d столбца.\n============================\n", columns);
for (int j = 0; j < 4; j++)
{
for (int i = j; i <= j + 12; i += 4)
{
fprintf(f, "%d\t", Matrix[i]);
}
fprintf(f, "\n", "\n");
}
fprintf(f, "============================\n");

printf("Данные записаны в файл variant3Transporate.txt\n");
fclose(f);
return 0;
}
Файл не выбран
Ещё
