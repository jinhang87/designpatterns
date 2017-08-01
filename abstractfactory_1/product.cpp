#include "product.h"
#include <iostream>

using namespace std;

//抽象产品A
AbstractProductA::AbstractProductA(){
    cout << "AbstractProductA" << endl;
}

AbstractProductA::~AbstractProductA(){
    cout << "~AbstractProductA" << endl;
}


//具体产品A1
ProductA1::ProductA1(){
    cout << "ProductA1" << endl;
}

ProductA1::~ProductA1(){
    cout << "~ProductA1" << endl;
}

void ProductA1::operate(){
    cout << "ProductA1::operate" << endl;
}

//具体产品A2
ProductA2::ProductA2(){
    cout << "ProductA2" << endl;
}

ProductA2::~ProductA2(){
    cout << "~ProductA2" << endl;
}

void ProductA2::operate(){
    cout << "ProductA2::operate" << endl;
}

//抽象产品B
AbstractProductB::AbstractProductB(){
    cout << "AbstractProductB" << endl;
}

AbstractProductB::~AbstractProductB(){
    cout << "~AbstractProductB" << endl;
}


//具体产品B1
ProductB1::ProductB1(){
    cout << "ProductB1" << endl;
}

ProductB1::~ProductB1(){
    cout << "~ProductB1" << endl;
}

void ProductB1::operate(){
    cout << "ProductB1::operate" << endl;
}

//具体产品B2
ProductB2::ProductB2(){
    cout << "ProductB2" << endl;
}

ProductB2::~ProductB2(){
    cout << "~ProductB2" << endl;
}

void ProductB2::operate(){
    cout << "ProductB2::operate" << endl;
}
