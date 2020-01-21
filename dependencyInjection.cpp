#include <iostream>
#include <string>

using namespace std;

class Wheel {
    public:
      virtual void size() = 0;
      void setTopspeed(); 
      int topspeed;
};
class MFSwheels : public Wheel {
    public:
      void size() {cout << "5" << endl;}
      void setTopspeed() {
        topspeed = 99;
      }
};
class Yamaha : public Wheel {
    public:
      void size() {cout << "7" << endl;}
      void setTopspeed() {
        topspeed = 250;
      }
};
class Car {
  public:
    void printSize(Wheel *w) {
        w->size();
    }
    
    template <class T>
    void printTopspeed(T *w) {
      cout << "Top speed = " << w->topspeed << endl;
    }
    private:
      Wheel *w;
};

int main () {
    MFSwheels mfs;
    Yamaha yama;
    //polymorphism
    Wheel *w = &mfs;
    Car porshe;
    //dependency injection
    porshe.printSize(w);
    //dependency injection
    w = &yama;
    porshe.printSize(w);
    //practice with templates/inheritance
    yama.setTopspeed();
    porshe.printTopspeed(&yama);

    // yama.setTopspeed();
    // cout << yama.topspeed << endl;
    return 0;
}
