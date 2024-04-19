#include <iostream>
using namespace std;
#include <string>

/*
int bai1(int n) {
    if (n == 0) { 
        return 0;
    }
    else {
        return n + bai1(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong S(n) = " << bai1(n) << endl;

    return 0;
}
*/
/*
int bai2(int n) {
    if (n == 0) {
        return 0 ;
    }
    else {
        return (n * n) + (bai2(n - 1) * bai2(n - 1));
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S(n) = " << bai2(n) << endl;
    return 0;
}
*/
/*double bai3(int n) {
    if (n == 1) { 
        return 1;
    }
    else {
        return 1 / n + bai3(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai3(n) << endl;
    return 0;
}
*/
/*
double bai4(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 1 /(2 * n) + bai4(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai4(n) << endl;
    return 0;
}
*/
/*
double bai5(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return 1 /(2*n + 1) + bai3(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai5(n) << endl;
    return 0;
}
*/
/*
double bai6(int n) {
    if (n == 2) {
        return 1;
    }
    else {
        return 1 /(n * (n-1)) + bai6(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai6(n) << endl;
    return 0;
}
*/
/*
double bai7(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n /(n+1) + bai7(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai7(n) << endl;
    return 0;
}   
*/
/*
double bai8(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return ((2.0 * n + 1) / (2.0 * n + 2)) + bai8(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai8(n) << endl;
    return 0;
}
*/
/*
double bai9(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return ( n * bai9(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai9(n) << endl;
    return 0;
}
*/
/*
double bai10(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else {
        return x * bai10(x, n - 1);
    }
}

int main() {
    double x;
    int n;
    cout << "Nhập x: ";
    cin >> x;
    cout << "Nhập n: ";
    cin >> n;

    cout << "T(x, n) = " << bai10(x, n) << endl;

    return 0;
}
*/
/*
double bai11(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return ( n * bai11(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng S(n) = " << bai11(n) << endl;
    return 0;
}
*/
/*
int bai12(int x, int n) {
    if (n == 0) {
        return 0.0;
    } else {
        return pow(x, n) + bai12(x, n - 1);
    }
}

int main() {
    int x;
    int n;
    cout << "Nhập x: ";
    cin >> x;
    cout << "Nhập n: ";
    cin >> n;

    cout << "Tổng S(x, n) = " << bai12(x, n) << endl;

    return 0;
}
*/
/*
double bai13(double x, int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return pow(x, 2 * n) + bai13(x, n - 1); 
    }
}

int main() {
    double x;
    int n;
    cout << "Nhập x: ";
    cin >> x;
    cout << "Nhập n: ";
    cin >> n;

    cout << "Tổng S(x, n) = " << bai13(x, n) << endl;

    return 0;
}
*/
/*
double bai14(double x, int n) {
    if (n == 0) {
        return x;
    }
    else {
        return pow(x, 2 * n + 1) + bai14(x, n - 1);
    }
}

int main() {
    double x;
    int n;
    cout << "Nhập x: ";
    cin >> x;
    cout << "Nhập n: ";
    cin >> n;

    cout << "Tổng S(x, n) = " << bai14(x, n) << endl;

    return 0;
}
*/
/*
double bai15(int n) {
    if (n == 1) { 
        return 1;
    }
    else {
        double vjp = bai15(n - 1);
        return vjp + 1 / (n * (n + 1) / 2.0);
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    cout << "Tổng S(n) = " << bai15(n) << endl;

    return 0;
}
*/
/* bai 34
bool Chan(char c) {
    int chuSo = c - '0'; 
    return (chuSo % 2 == 0);
}

bool AllChan(int n) {
    string chuoi = to_string(n);
    for (char c : chuoi) {
        if (! Chan(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "nhập n: ";
    cin >> n;

    if (AllChan(n)) {
        cout << "toàn bộ các chữ số của " << n << " đều là chẵn." << endl;
    }
    else {
        cout << "không phải tất cả các chữ số của " << n << " đều chẵn." << endl;
    }

    return 0;
}
*/