namespace iostreamf
{
    using namespace std;
    #include "iostreamf.h"

    void console_i(int n, int* arr)
    {
        while(true)
        {
            string nvalue;
            cout << "Введите число n, которое будет являться количеством элементов массива: ";
            getline(cin, nvalue);
            if(checkutils::uint_check(nvalue))
                n = stoi(nvalue);
            else
            {
                cout << "Ввод некорректен(вероятно число n не является натуральным)";
                continue;
            }
            
            bool isNeg = false;
            for(int i = 0; i < n; i++ )
            {
                while(true)
                {
                    nvalue = "";
                    cout << "Введите число номер " << i << ": ";
                    getline(cin, nvalue);
                    if(checkutils::uint_check(nvalue))
                    {
                        arr[i] = stoi(nvalue);
                    }
                    else
                    {
                        cout << "Ввод некорректен";
                        continue;
                    }
                    
                    if(i == 0 && arr[i] <= 0)
                    {
                        cout << "Первое число массива обязательно положительное";
                        continue;
                    }
                    else if(arr[i] < 0)
                    {
                        isNeg = true;
                        break;
                    }
                    break;
                }
            }
            
            if(!(isNeg))
            {
                cout << "В массиве должно присутствовать хотя бы одно отрицательное число!";
                continue;
            }
            break;
        }
    }

    void file_i(int n, int* arr)
    {
        ifstream input("input.txt")
        if(!(input))
        {
            cout << "Файл в указанной директории не создан! Создайте и перезапустите программу!" << endl << endl;
            return;
        }
        string nvalue;
        getline(input, nvalue); 
        if(checkutils::uint_check(nvalue))
            n = stoi(nvalue);
        else
        {
            cout << "Содиржимое файла некорректно(вероятно число n не является натуральным)" << endl <<
            "Измените его и перезапустите программу!" << endl << endl;
            return;
        }

        for(int i = 0; i < n; i++)
        {
            nvalue = "";
            cout << "Введите число номер " << i << ": ";
            getline(cin, nvalue);
            if(checkutils::uint_check(nvalue))
                arr[i] = stoi(nvalue);
            else if(i == 0 && arr[i] <= 0)
            {
                cout << "Первое число массива обязательно положительное!" << endl <<
                "Измените содержимое файла и перезапустите программу!" << endl << endl;
                return;
            }
            else
            {
                cout << "Содержание файла некорректно" << endl <<
                "Измените его и перезапустите программу!" << endl << endl;
                return;
            }
        }
    }

    void console_o()
    {
        
    }

    void file_o()
    {

    }

}