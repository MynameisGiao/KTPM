#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}


int main() {
    int choice;

    do {
        cout << "==== MENU ====\n";
        cout << "1. Kiểm tra số nguyên tố\n";
        cout << "2. Kiểm tra năm nhuận\n";
        cout << "0. Thoát\n";
        cout << "Chọn chức năng: ";
        cin >> choice;

        if (choice == 1) {
            int num;
            cout << "Nhập một số nguyên dương: ";
            cin >> num;

            if (isPrime(num)) {
                cout << num << " là số nguyên tố.\n";
            }
            else {
                cout << num << " không phải là số nguyên tố.\n";
            }
        }
        else if (choice == 2) {
           // chuc nang 2
        }
        else if (choice != 0) {
            cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại.\n";
        }

    } while (choice != 0);

    cout << "Thoát chương trình.\n";
    return 0;
}
