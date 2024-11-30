#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double cost;

    // Varsayılan Yapıcı
    Product(string n = "", double c = 0.0) : name(n), cost(c) {
        cout << n << " " << c << " TL" << endl; 
    }

    // Varsayılan Kopya Yapıcı
    Product(const Product& other) : name(other.name), cost(other.cost) {}
};

class ShoppingCart {
private:
    static const int MAX_PRODUCTS = 4;
    Product products[MAX_PRODUCTS];
    int productCount;

public:
    ShoppingCart() : productCount(0) {}

    ShoppingCart& operator+=(const Product& product) {
        if (productCount < MAX_PRODUCTS) {
            products[productCount++] = product; // Kopyalama yapılabilir
        } else {
            cout << "Sepet dolu!" << endl;
        }

        return *this;
    }

    ShoppingCart& operator-=(const Product& product) {
        for (int i = 0; i < productCount; ++i) {
            if (products[i].name == product.name) {
                for (int j = i; j < productCount - 1; ++j) {
                    products[j] = products[j + 1];
                }
                --productCount;
                cout << product.name << " sepetten cikarildi." << endl;
                return *this;
            }
        }
        cout << product.name << " sepetinizde bulunamadi." << endl;
        return *this;
    }

    double getTotalPrice() const {
        double total = 0.0;
        for (int i = 0; i < productCount; ++i) {
            total += products[i].cost;
        }
        return total;
    }

    void showCart() const {
        cout << "Sepetinizdeki urunler: " << endl;
        for (int i = 0; i < productCount; ++i) {
            cout << "- " << products[i].name << " : " << products[i].cost << " TL" << endl;
        }

        if (productCount == 0) {
            cout << "Sepetiniz boş." << endl;
        }
    }
};

int main() {
    Product apple("Apple", 3.0);  // Elma 3TL
    Product banana("Banana", 2.0);
    Product orange("Orange", 4.0);

    ShoppingCart cart;
    cart += apple; // Sepete elma ekle
    cart += banana;
    cart += orange;

    cart.showCart(); // Sepeti göster
    cout << "Toplam fiyat: " << cart.getTotalPrice() << " TL" << endl;

    cart -= banana; // Sepetten muzu çıkar
    cart.showCart(); // Güncellenmiş sepeti göster
    cout << banana.name << " cikarildiktan sonra toplam fiyat: " << cart.getTotalPrice() << " TL" << endl;

    return 0;
}
