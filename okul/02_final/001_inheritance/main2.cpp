#include <iostream>
using namespace std;

class BaseComputer{
    protected:
        string cpu;
        int ram;
        int disk;

    public:
        BaseComputer(string cpuType, int ramSize, int diskSize) : cpu(cpuType), ram(ramSize), disk(diskSize){}

    void showSpecs(){
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << ram << endl;
        cout << "Disk: " << disk << endl; 
    }

};


class GamingComputer : public BaseComputer{
    private:
        string gpu;

    public:
        GamingComputer(string cpuType, int ramSize, int diskSize, string gpuModel) : BaseComputer(cpuType, ramSize, diskSize), gpu(gpuModel) {}

    void playGame(){
        cout << "Playing a high-performance game with " << gpu << " GPU." << endl;
    }

    void showSpecs(){
        BaseComputer::showSpecs();
        cout << "GPU: " << gpu << endl;
    }
};


class OfficeComputer : public BaseComputer{
    private:
        bool hasOfficeSuite;
    
    public:
        OfficeComputer(string cpuType, int ramSize, int diskSize, bool officeSuite) : BaseComputer(cpuType, ramSize, diskSize), hasOfficeSuite(officeSuite) {}


        void work(){
            if (hasOfficeSuite) {
                cout << "Working on office tasks with Office Suite installed." << endl;
            } else {
                cout << "Working on office tasks without Office Suite." << endl;
            }
        }

        void showSpecs(){
            BaseComputer::showSpecs();
            cout << "Office suite installed: " << (hasOfficeSuite ? "Yes" : "No") << endl;
        }
};

int main(){

    GamingComputer gamingPc("Intel i9", 32, 2000, "NVIDIA RTX 4090");
    cout << "Gaming computer specifications: " << endl;
    gamingPc.showSpecs();
    gamingPc.playGame();

    cout << "\n";

    OfficeComputer officePc("Intel i5", 16, 500, true);
    cout << "Office Computer Specifications: " << endl;
    officePc.showSpecs();
    officePc.work();
    return 0;
}