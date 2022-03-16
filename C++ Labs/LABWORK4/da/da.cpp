#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

struct fio
{
    string name, surname;
};

struct grade
{
    string grade;
};

struct subject
{
    int MathAmount = 0, PhysicAmount = 0, BioAmount = 0, ChemAmount = 0;
    int *Math, *Physic, *Bio, *Chem;
    float MathAg = 0, PhysicAg = 0, BioAg = 0, ChemAg = 0, Ag = 0;
};

struct pupil
{
    fio _fio;
    grade _grade;
    subject _subject;
};

void DataInit(pupil* (&p), int& n);
void DataRead(pupil* (&p), int& n, string fileName);
void DataSave(pupil* p, int n, string fileName);
void DataCopy(pupil* (&p_n), pupil* (&p_o), int n);
void DataAdd(pupil* (&p), int& n);
void DataDelete(pupil* (&p), int& n);
void SetMark(pupil* (&p), int& n);
void DataSearch(pupil* p, int n);
void CountAg(pupil* p, int n);
void DataShow(pupil* p, int n);

int main()
{
    // Ученики. Ф.И.О., класс (цифра+буква) предметы, оценки, средний балл. Выбор по среднему баллу
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int amountofData = 0, choice, action;
    pupil* p;
    string fileName;

    p = new pupil[amountofData];


    do
    {
        system("cls");
        cout << "Выберите операцию:\n";
        cout << "0 - Выйти из программы\n";
        cout << "1 - Ввести учеников\n";
        cout << "2 - Вывод учеников на экран\n";
        cout << "3 - Добавить ученика\n";
        cout << "4 - Удалить ученика\n";
        cout << "5 - Сохранить данные в файл\n";
        cout << "6 - Сортировка по среднему баллу\n";
        cout << "7 - Поставить оценку\n";
        cout << "\nВвод: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            cout << "Ввод вручную или из файла?\n"; cin >> action;
            if (action == 1)
            {
                DataInit(p, amountofData);
            }
            else
            {
                system("cls");
                cout << "Введите название файла: "; cin >> fileName;
                DataRead(p, amountofData, fileName);
            }
            break;
        case 2:
            system("cls");
            DataShow(p, amountofData);
            break;
        case 3:
            system("cls");
            DataAdd(p, amountofData);
            break;
        case 4:
            system("cls");
            DataDelete(p, amountofData);
            break;
        case 5:
            system("cls");
            cout << "Введите название файла: "; cin >> fileName;
            DataSave(p, amountofData, fileName);
            system("pause");
            break;
        case 6:
            system("cls");
            DataSearch(p, amountofData);
            break;
        case 7:
            system("cls");
            SetMark(p, amountofData);
            break;
        }

    } while (choice != 0);

    delete[]p;
}

void DataInit(pupil* (&p), int& n)
{
    system("cls");
    cout << "Количество данных: "; cin >> n;
    cout << endl;
    cin.ignore();
    
    p = new pupil[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Данные ученика #" << i + 1 << ":\n";
        cout << "Фамилия: "; getline(cin, p[i]._fio.surname);
        cout << "Имя: "; getline(cin, p[i]._fio.name);
        cout << "Класс: "; getline(cin, p[i]._grade.grade);
        cout << "\n------------------------------------------\n\n";
    }
}

void DataSave(pupil* p, int n, string fileName)
{
    ofstream file(fileName, ios_base::out);
    if (!file)
    {
        cout << "Ошибка! Файл не был открыт!\n";
    }
    else
    {
        file << n << endl;

        for (int i = 0; i < n; i++)
        {
            file << p[i]._fio.name << endl;
            file << p[i]._fio.surname << endl;
            file << p[i]._grade.grade << endl;
            file << p[i]._subject.MathAmount;
            if (p[i]._subject.MathAmount > 0)
            {
                for (int j = 0; j < p[i]._subject.MathAmount; ++j)
                {
                    if (j < p[i]._subject.MathAmount - 1)
                    {
                        file << " " << p[i]._subject.Math[j];
                    }
                    else file << " " << p[i]._subject.Math[j] << endl;
                }
            }
            else file << endl;
            file << p[i]._subject.PhysicAmount;
            if (p[i]._subject.PhysicAmount > 0)
            {
                for (int j = 0; j < p[i]._subject.PhysicAmount; ++j)
                {
                    if (j < p[i]._subject.PhysicAmount - 1)
                    {
                        file << " " << p[i]._subject.Physic[j];
                    }
                    else file << " " << p[i]._subject.Physic[j] << endl;
                }
            }
            else file << endl;
            file << p[i]._subject.BioAmount;
            if (p[i]._subject.BioAmount > 0)
            {
                for (int j = 0; j < p[i]._subject.BioAmount; ++j)
                {
                    if (j < p[i]._subject.BioAmount - 1)
                    {
                        file << " " << p[i]._subject.Bio[j];
                    }
                    else file << " " << p[i]._subject.Bio[j] << endl;
                }
            }
            else file << endl;
            file << p[i]._subject.ChemAmount;
            if (p[i]._subject.ChemAmount > 0)
            {
                for (int j = 0; j < p[i]._subject.ChemAmount; ++j)
                {
                    if (j < p[i]._subject.ChemAmount - 1)
                    {
                        file << " " << p[i]._subject.Chem[j];
                    }
                    else file << " " << p[i]._subject.Chem[j] << endl;
                }
            }
            else file << endl;
        }

        file.close();
        cout << "Запись прошла успешно!\n";
    }
}

void DataRead(pupil* (&p), int& n, string fileName)
{
    ifstream file(fileName);

    if (!file)
    {
        cout << "Ошибка! Файл не был откырт!\n";
    }
    else
    {
        file >> n;
        file.seekg(2, ios_base::cur);

        p = new pupil[n];

        for (int i = 0; i < n; i++)
        {
            getline(file, p[i]._fio.name);
            getline(file, p[i]._fio.surname);
            getline(file, p[i]._grade.grade);

            file >> p[i]._subject.MathAmount;
            p[i]._subject.Math = new int[p[i]._subject.MathAmount];
            for (int j = 0; j < p[i]._subject.MathAmount; j++)
            {
                file >> p[i]._subject.Math[j];
            }
            file.seekg(2, ios_base::cur);

            file >> p[i]._subject.PhysicAmount;
            p[i]._subject.Physic = new int[p[i]._subject.PhysicAmount];
            for (int j = 0; j < p[i]._subject.PhysicAmount; j++)
            {
                file >> p[i]._subject.Physic[j];
            }
            file.seekg(2, ios_base::cur);

            file >> p[i]._subject.BioAmount;
            p[i]._subject.Bio = new int[p[i]._subject.BioAmount];
            for (int j = 0; j < p[i]._subject.BioAmount; j++)
            {
                file >> p[i]._subject.Bio[j];
            }
            file.seekg(2, ios_base::cur);

            file >> p[i]._subject.ChemAmount;
            p[i]._subject.Chem = new int[p[i]._subject.ChemAmount];
            for (int j = 0; j < p[i]._subject.ChemAmount; j++)
            {
                file >> p[i]._subject.Chem[j];
            }
            file.seekg(2, ios_base::cur);
        }
        file.close();

        cout << "Данные были считаны!\n";
        system("pause");
    }
}

void DataShow(pupil* p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Данные ученика #" << i + 1 << ":\n\n";
        cout << "Фамилия: " << p[i]._fio.surname << endl;
        cout << "Имя: " << p[i]._fio.name << endl;
        cout << "Класс: " << p[i]._grade.grade << endl;
        cout << "\nОценки:\n";
        cout << "Математика: ";
        for (int j = 0; j < p[i]._subject.MathAmount; ++j)
        {
            if (j < p[i]._subject.MathAmount - 1)
                cout << p[i]._subject.Math[j] << ", ";
            else cout << p[i]._subject.Math[j];
        }
        cout << "\nФизика: ";
        for (int j = 0; j < p[i]._subject.PhysicAmount; ++j)
        {
            if (j < p[i]._subject.PhysicAmount - 1)
                cout << p[i]._subject.Physic[j] << ", ";
            else cout << p[i]._subject.Physic[j];
        }
        cout << "\nБиология: ";
        for (int j = 0; j < p[i]._subject.BioAmount; ++j)
        {
            if (j < p[i]._subject.BioAmount - 1)
                cout << p[i]._subject.Bio[j] << ", ";
            else cout << p[i]._subject.Bio[j];
        }
        cout << "\nХимия: ";
        for (int j = 0; j < p[i]._subject.ChemAmount; ++j)
        {
            if (j < p[i]._subject.ChemAmount - 1)
                cout << p[i]._subject.Chem[j] << ", ";
            else cout << p[i]._subject.Chem[j];
        }
        if (i < n - 1)
            cout << "\n\n------------------------------------------\n\n";
    }
    cout << endl << endl;
    system("pause");
}

void DataCopy(pupil* (&p_n), pupil* (&p_o), int n)
{
    for (int i = 0; i < n; i++)
    {
        p_n[i] = p_o[i];
    }
}

void DataAdd(pupil* (&p), int& n)
{
    pupil* buf = new pupil[n];

    DataCopy(buf, p, n);
    delete[]p;

    n++;

    p = new pupil[n];

    DataCopy(p, buf, --n);
    delete[]buf;
    cout << "Данные ученика #" << n + 1 << ":\n";
    cin.ignore();
    cout << "Фамилия: "; getline(cin, p[n]._fio.surname);
    cout << "Имя: "; getline(cin, p[n]._fio.name);
    cout << "Класс: "; getline(cin, p[n]._grade.grade);
    cout << "\n------------------------------------------\n\n";

    n++;
}

void DataDelete(pupil* (&p), int& n)
{
    cout << "Выберите ученика:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - " << p[i]._fio.surname << endl;
    }
    pupil* buf = new pupil[n];
    DataCopy(buf, p, n);
    delete[]p;

    --n;
    p = new pupil[n];

    int q = 0, _n;


    cout << "\nУдаляемый ученик: "; cin >> _n;
    --_n;

    for (int i = 0; i <= n; i++)
    {
        if (_n != i)
        {
            p[q] = buf[i];
            ++q;
        }
    }

    delete[]buf;

    cout << "Ученик удален!\n";
    system("pause");


}

void SetMark(pupil* (&p), int& n)
{
    int _n, action, digit;
    cout << "Выберите ученика:\n";
    for (int i = 0; i < n; i++)
    {
            cout <<i+1<<" - " << p[i]._fio.surname << endl;
    }
    cout << "\n0 - Выход\n\n";
    cout << "Ввод: "; cin >> _n;

    if (_n != 0)
    {
        system("cls");
        cout << "Выберите предмет:\n";
        cout << "1 - Математика\n2 - Физика\n3 - Биология\n4 - Химия\n5 - Назад\nВвод: "; cin >> action;
        switch (action)
        {
        case 1:
            if (p[_n - 1]._subject.MathAmount > 0)
            {
                ++p[_n - 1]._subject.MathAmount;

                int* buf = new int[p[_n - 1]._subject.MathAmount - 1];
                buf = p[_n - 1]._subject.Math;

                p[_n - 1]._subject.Math = new int[p[_n - 1]._subject.MathAmount];
                for (int i = 0; i < p[_n - 1]._subject.MathAmount - 1; i++)
                {
                    p[_n - 1]._subject.Math[i] = buf[i];
                }

                delete[]buf;

                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Math[p[_n - 1]._subject.MathAmount - 1] = digit;

            }
            else
            {
                ++p[_n - 1]._subject.MathAmount;
                p[_n - 1]._subject.Math = new int[p[_n - 1]._subject.MathAmount];
                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Math[0] = digit;
            }
            break;
        case 2:
            if (p[_n - 1]._subject.PhysicAmount > 0)
            {
                ++p[_n - 1]._subject.PhysicAmount;

                int* buf = new int[p[_n - 1]._subject.PhysicAmount - 1];
                buf = p[_n - 1]._subject.Physic;

                p[_n - 1]._subject.Physic = new int[p[_n - 1]._subject.PhysicAmount];
                for (int i = 0; i < p[_n - 1]._subject.PhysicAmount - 1; i++)
                {
                    p[_n - 1]._subject.Physic[i] = buf[i];
                }

                delete[]buf;

                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Physic[p[_n - 1]._subject.PhysicAmount - 1] = digit;

            }
            else
            {
                ++p[_n - 1]._subject.PhysicAmount;
                p[_n - 1]._subject.Physic = new int[p[_n - 1]._subject.PhysicAmount];
                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Physic[0] = digit;
            }
            break;
        case 3:
            if (p[_n - 1]._subject.BioAmount > 0)
            {
                ++p[_n - 1]._subject.BioAmount;

                int* buf = new int[p[_n - 1]._subject.BioAmount - 1];
                buf = p[_n - 1]._subject.Bio;

                p[_n - 1]._subject.Bio = new int[p[_n - 1]._subject.BioAmount];
                for (int i = 0; i < p[_n - 1]._subject.BioAmount - 1; i++)
                {
                    p[_n - 1]._subject.Bio[i] = buf[i];
                }

                delete[]buf;

                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Bio[p[_n - 1]._subject.BioAmount - 1] = digit;

            }
            else
            {
                ++p[_n - 1]._subject.BioAmount;
                p[_n - 1]._subject.Bio = new int[p[_n - 1]._subject.BioAmount];
                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Bio[0] = digit;
            }
            break;
        case 4:
            if (p[_n - 1]._subject.ChemAmount > 0)
            {
                ++p[_n - 1]._subject.ChemAmount;

                int* buf = new int[p[_n - 1]._subject.ChemAmount - 1];
                buf = p[_n - 1]._subject.Chem;

                p[_n - 1]._subject.Chem = new int[p[_n - 1]._subject.ChemAmount];
                for (int i = 0; i < p[_n - 1]._subject.ChemAmount - 1; i++)
                {
                    p[_n - 1]._subject.Chem[i] = buf[i];
                }

                delete[]buf;

                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Chem[p[_n - 1]._subject.ChemAmount - 1] = digit;

            }
            else
            {
                ++p[_n - 1]._subject.ChemAmount;
                p[_n - 1]._subject.Chem = new int[p[_n - 1]._subject.ChemAmount];
                cout << "Оценка: "; cin >> digit;
                p[_n - 1]._subject.Chem[0] = digit;
            }
            break;
        case 5:
            system("cls");
            SetMark(p, n);
            break;
        }
    }
}

void DataSearch(pupil* p, int n)
{
    CountAg(p, n);
    float digit = -1, border = 999;
    int id, * check = new int[n], q = 0;
    bool flag;


    for (int j = 0; j < n; ++j)
    {
        digit = -1;
        for (int i = 0; i < n; i++)
        {
            flag = true;
            for (int k = 0; k < q; k++)
            {
                if (i == check[k]) flag = false;
            }
            if (p[i]._subject.Ag > digit && p[i]._subject.Ag < border && flag)
            {
                id = i;
                if (p[i]._subject.Ag > 0)
                    digit = p[i]._subject.Ag;
            }
        }
        check[q++] = id;
        if (digit > 0) border = digit;
        cout << "Данные ученика #" << id + 1 << ":\n\n";
        cout << "Фамилия: " << p[id]._fio.surname << endl;
        cout << "Имя: " << p[id]._fio.name << endl;
        cout << "Класс: " << p[id]._grade.grade << endl;
        cout << "\nСредний балл: " << p[id]._subject.Ag;
        cout << "\n\n------------------------------------------\n\n";
    }




    cout << endl;
    system("pause");
}

void CountAg(pupil* p, int n)
{
    int _n;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        _n = p[i]._subject.MathAmount;
        if (_n > 0)
        {
            for (int j = 0; j < _n; j++)
            {
                sum += p[i]._subject.Math[j];
            }
            p[i]._subject.MathAg = sum / _n;
        }

        sum = 0;
        _n = p[i]._subject.PhysicAmount;
        if (_n > 0)
        {
            for (int j = 0; j < _n; j++)
            {
                sum += p[i]._subject.Physic[j];
            }
            p[i]._subject.PhysicAg = sum / _n;
        }

        sum = 0;
        _n = p[i]._subject.BioAmount;
        if (_n > 0)
        {
            for (int j = 0; j < _n; j++)
            {
                sum += p[i]._subject.Bio[j];
            }
            p[i]._subject.BioAg = sum / _n;
        }

        sum = 0;
        _n = p[i]._subject.ChemAmount;
        if (_n > 0)
        {
            for (int j = 0; j < _n; j++)
            {
                sum += p[i]._subject.Chem[j];
            }
            p[i]._subject.ChemAg = sum / _n;
        }

        p[i]._subject.Ag = (p[i]._subject.MathAg + p[i]._subject.PhysicAg + p[i]._subject.BioAg + p[i]._subject.ChemAg) / 4;
    }
}