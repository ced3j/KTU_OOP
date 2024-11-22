#include <iostream>
using namespace std;

class Rectangle{
    private:
        double length, width;

    public:
        
        Rectangle(double l, double w){
            length = l;
            width = w;
            cout << "Rectangle olusturuldu: " << length << " - width: " << width << endl; 
        }

        ~Rectangle(){
            cout << "Rectangle yok edildi. " << endl;
        }

        double calculateCircumference(){
            return 2 * (length + width);
        }

};

class Triangle{
    private:
        double a, b, c;

    public:
        Triangle(double x, double y, double z){
            a = x;
            b = y;
            c = z; 
        }

        ~Triangle(){
            cout << "Triangle destroyed." << endl;
        }

        double calculateCircumference(){
            return a + b + c;
        }
};

double calcTotalCirc(Rectangle* ptr_r[], Triangle* ptr_t[], int n1, int n2){
    double sum = 0.0;
    for(int i = 0; i < n1; i++){
        sum += ptr_r[i]->calculateCircumference();
    }
    
    for(int i = 0; i < n2; i++){
        sum += ptr_t[i]->calculateCircumference();
    }

    return sum;
}

int main(){
    Rectangle* ptr_r[3];
    Triangle* ptr_t[3];

    Rectangle r1(3.0, 5.0), r2(2.0, 4.0), r3(4.0, 5.0);
    Triangle t1(3.0, 4.0, 5.0), t2(6.0, 8.0, 10.0), t3(5.0, 12.0, 13.0);

    // pointer dizilerine nesneleri ata
    ptr_r[0] = &r1; 
    ptr_r[1] = &r2; 
    ptr_r[2] = &r3;

    ptr_t[0] = &t1; 
    ptr_t[1] = &t2; 
    ptr_t[2] = &t3;

    // Toplam çevreyi hesapla
    double circumference = calcTotalCirc(ptr_r, ptr_t, 3, 3);
    cout << "Total circumference = " << circumference << endl;
    
    return 0;
}