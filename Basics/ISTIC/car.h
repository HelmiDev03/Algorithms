#include <iostream>
#include<string.h>
#pragma once
using namespace std;
class car {
public:
    static int counter;
protected:
    string brand;
    int model;

public:
    car(string b,int m){
        brand=b;
        model=m;
        counter++;
        cout << "base constructor called" << endl;
    }
    car(){counter++;}
    ~car(){counter--;}
    void setBrand(string b){
        brand=b;
    }
    void setModel(int m){
        model=m;
    }
    string getBrand(){
        return brand;
    }
     int getModel(){
        return model;
    }
    static void sayhi(){
        cout << "hi";
    }
    int getCounter(){
        return counter;
    }
     static int getCounter2(){
        return counter;
    }
    void display(){
        cout << "brand is " << brand << endl;
        cout << "model is " << model << endl;
    }
    static int getCounter3(car x){
        return x.counter;}

    car operator ++(){
        ++model;

        return car(brand,model);

    }
    car operator ++(int){
        model++;
        return car(brand,model);

    }
    car operator+ (car d) const {
        return car(brand,model+d.model);
    }
    /*sum of 2 car objects*/
    /*class name::operator type_of_operator + (class name object2 name)*/

    car operator * ( car d ) const{
        return car(brand,this->model*d.model);
    }
    /*function that print an object of class car*/





};
/*inheritence*/
/*new class name : (how i will take attribute of base class) base class name
 * public : i will take all the public attributes of the base class as public and  will take all the protected attributes of the base class as protected
   protected :  i will take all the attributes of the base class as protected
   private:  i will take all the attributes of the base class as private */
class velo:public car{
public:
    string color;
    velo(string b, int m,string c):car(b,m){
        this->color= c;
        cout << "derived constructor called" << endl;
    }
    void display(){
        car::display();

        cout << "color is " << color << endl;
    }
};
