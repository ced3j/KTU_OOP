#include <iostream>
using namespace std;

class Bricks{
    private:
        int x, y;

    public:
        Bricks(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }

        Bricks operator +(const Bricks& other){
            return Bricks(this->x + other.x, this->y + other.y);
            /*
                    Bu kod, Bricks sınıfının kurucusunu çağırarak this->x + other.x ve this->y + other.y 
                    ile yeni bir nesne oluşturur ve bu nesneyi return ile döndürür.
            */
        }

        void display(){
            cout << this->x << " - "<< this->y << endl;
        }
};



int main(){
    Bricks b1(10, 20);
    Bricks b2(10, 50);
    Bricks b3 = b1 + b2;

    b3.display();
    return 0;
}



/*  
return Bricks(this->x + other.x, this->y + other.y);

        Bu kod, Bricks sınıfının kurucusunu çağırarak this->x + other.x ve this->y + other.y 
        ile yeni bir nesne oluşturur ve bu nesneyi return ile döndürür.
*/



/*

    2. return (this->x + other.x, this->y + other.y);
    Bu ifade virgül operatörünün davranışını kullanır. C++'da virgül operatörü, en sağdaki değeri döndürür. 
    Yani, this->x + other.x hesaplanır ve bir kenara bırakılır; sadece this->y + other.y döndürülür.
    Yukarıdaki ile karıştırılmamalıdır

*/