#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main()
{
    AbstractFactory *fa1 = new ConcreteFactory1();//具体工厂仅初始化一次，使得切换改变工厂很容易，抽象工厂创建了完整的产品系列
    AbstractProductA *a1 = fa1->CreateProductA();
    AbstractProductB *b1 = fa1->CreateProductB();
    cout << endl;

    AbstractFactory *fa2 = new ConcreteFactory2();
    AbstractProductA *a2 = fa2->CreateProductA();
    AbstractProductB *b2 = fa2->CreateProductB();
    cout << endl;

    delete fa1;
    delete a1;
    delete b1;

    delete fa2;
    delete a2;
    delete b2;

    cout << "Hello World!" << endl;
    return 0;
}
