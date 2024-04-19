#include <iostream>
#include <string>
using namespace std;
/* bai24
int main() {
    int n, sum = 0;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Tong cac chu so cua so nguyen la: " << sum << endl;
    return 0;
}
*/
/*bai25
int main()
{
    long vjp, n;
    int P = 1;
    do
    {
        cout << "\nNh?p vào s? nguyên n l?n h?n 0: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "\n S? n ph?i l?n h?n 0, vui lòng nh?p l?i !";
        }
    } while (n <= 0);
    vjp = n;
    while (vjp != 0)
    {
        P = P * (vjp % 10);
        vjp = vjp / 10;
    }
    cout << "\nTích các ch? s? c?a " << n << " là: " << P;

}
*/
/* bai 29
int first(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    std::cout << "Nh?p s? nguyên d??ng n: ";
    std::cin >> n;

    int sodau = first(n);
    std::cout << "Ch? s? ??u tiên c?a " << n << " là: " << sodau << std::endl;

    return 0;
}
*/
/* bai 30
int reverseDigit(int n) {
    int reversedNumber = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    int reversedDigit = reverseDigit(n);
    std::cout << "The reverse digit of " << n << " is: " << reversedDigit << std::endl;

    return 0;
}
*/