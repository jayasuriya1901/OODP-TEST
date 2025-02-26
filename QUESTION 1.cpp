#include <iostream>
#include<vector>

using namespace std;
int main() {
    int n;
    cout << "Enter the number of products (N): ";
    cin >> n;

    vector<int> stock(n);
    cout << "Enter the stock for each product: ";
    for (int i = 0; i < n; ++i) {
        cin >> stock[i];
    }

    int m;
    cout << "Enter the number of customer purchases (M): ";
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int productIndex, quantity;
        cout << "Enter product index (0 to " << n - 1 << ") and quantity for purchase " << i + 1 << ": ";
        cin >> productIndex >> quantity;

        if (productIndex < 0 || productIndex >= n) {
            cout << "Invalid product index." << endl;
            continue;
        }
        
        if (quantity <= stock[productIndex]) {
            stock[productIndex] -= quantity;
        } else {
            cout << "Insufficient stock for product " << productIndex << "." << endl;
        }
    }

    cout << "Updated stock:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Product " << i << ": " << stock[i] << endl;
    }

    return 0;
}
