#include <iostream>
#include <string>

using namespace std;

class Wheel {
    public:
      int size;

      static void printer() {cout << "HEY" << endl;}
      
};
class MFSwheels : public Wheel {
    public:
      int size = 99;      
};
class Yamaha : public Wheel {
    public:
      int size = 50;     
};
class Car {
  public:
    template <class T>
    void setWheel(T t) {
        wheelSize = t.size;
    }
    int wheelSize = 0;

    template <class Wheeltype>
    class WT {
        public:
          Wheeltype w;
          WT(Wheeltype &x) : w(x) {}
    };
    
    
    
};

int main () {
    Wheel::printer();
    Yamaha yama;
    Car porshe;
    porshe.setWheel(yama);
    
    cout << "Wheel size with yamaha wheels = " << porshe.wheelSize << endl;

    MFSwheels mfs;
    porshe.setWheel(mfs);
    cout << "wheel size with MFSwheels = " << porshe.wheelSize << endl;

    Car Mustang;
   
    return 0;
}
