#include <iostream>
using namespace std;

class ArrFull {
public:
	void arrayType(int arr[]) {
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }

    }
};
class ChoiseSort {
public:
    void smth() {
        cout << "2";
    }
};

class InPutSort {
public:
    void name() {
        cout << "3";
    }
};



class BubbleSort {
public:
    void arraySort(int arr[]) {
        for (int j = 0; j < 10; j++) {
            for (int i = 0; i < 10; i++) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        arrayOutput(arr);
    }

    void arrayOutput(int arr[]) {
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
		cout << endl;
    }
};

class Choise {
public:
    void sortChoise(int arr[]) {
        char vibor;
        cout << "Выберите метод сортировки: \n";
        cout << "1. Пузырчатая сортировка \n";
        cout << "2. Сортировка выбора \n";
        cout << "3. Сортировка вставкой \n";

        cin >> vibor;
        switch (vibor) {
            
            case '1': {
                BubbleSort as;
                as.arraySort(arr);
                break;
            }
            case '2': {
                ChoiseSort cs;
                cs.smth();
                break;
            }
            case '3': {
                InPutSort ips;
                ips.name();
                break;
            }
            default:
                cout << "Неверный выбор\n";
                break;
        }
    }
};
int main() {
    setlocale(LC_ALL, "rus");

    cout << "Введите 10 чисел\n";

	int arr[10];

    ArrFull at;
    at.arrayType(arr);

    Choise obj;
    obj.sortChoise(arr);
}
