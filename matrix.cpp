#include <iostream>
using namespace std;
class CMatrix {
private:
    int **matrix; // Ma trận
    int size;     // Kích thước ma trận
public:
    // Constructor
    CMatrix(int size) {
        this->size = size;
        matrix = new int*[size];
        for (int i = 0; i < size; ++i) {
            matrix[i] = new int[size];
        }
    }
    // Destructor
    ~CMatrix() {
        for (int i = 0; i < size; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Phương thức nhập ma trận từ bàn phím
    void readMatrixFromInput() {
        cout << "Nhap cac phan tu cua ma tran:" << endl;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << "Nhap phan tu tai vi tri [" << i << "][" << j << "]: ";
                cin >> matrix[i][j];
            }
        }
    }

    // Tính tổng giá trị các phần tử trong ma trận
    int operator!() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                sum += matrix[i][j];
            }
        }
        return sum;
    }

    // Toán tử cộng 2 ma trận
    CMatrix operator+(const CMatrix& other) {
        CMatrix result(size);
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    // In ma trận
    void printMatrix() {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Nhap kich thuoc cua ma tran vuong: ";
    cin >> size;

    CMatrix A(size);
    CMatrix B(size);

    // Nhập ma trận A và B từ bàn phím
    cout << "Nhap ma tran A:" << endl;
    A.readMatrixFromInput();
    cout << "Nhap ma tran B:" << endl;
    B.readMatrixFromInput();

    // Tính tổng giá trị các phần tử của ma trận A và B
    int sumA = !A;
    int sumB = !B;

    // Tạo ma trận C = A + B
    CMatrix C = A + B;

    // In ma trận C
    cout << "Ma tran C = A + B:" << endl;
    C.printMatrix();

    // In tổng giá trị các phần tử của ma trận A và B
    cout << "Tong cac phan tu cua ma tran A: " << sumA << endl;
    cout << "Tong cac phan tu cua ma tran B: " << sumB << endl;

    return 0;
}

