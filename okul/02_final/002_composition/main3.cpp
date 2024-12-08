#include <iostream>
using namespace std;


class CPU{
    public:
        void process(){
            cout << "CPU is processing data." << endl;
        }
};


class RAM{
    public:
        void load(){
            cout << "RAM is loading data." << endl;
        }
};

class Disk{
    public:
        void store(){
            cout << "Disk is storing data." << endl;
        }
};


class Computer{
    private:
        CPU cpu;   // Composition: computer sınıfı bir CPU içeriyor
        RAM ram;   // Composition: computer sınıfı bir RAM içeriyor
        Disk disk; // Composition: Computer sınıfı bir Disk içeriyor
    public:
        void run(){
            cpu.process();
            ram.load();
            disk.store();
            cout << "Computer is running." << endl;
        }
};


int main(){
    Computer myComputer;
    myComputer.run();


    return 0;
}