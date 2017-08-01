#pragma once

class AbstractProductA;
class AbstractProductB;

//抽象工厂基类
class AbstractFactory{
public:
    virtual ~AbstractFactory() = 0;
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
protected:
    AbstractFactory();
};

//具体工厂类1，代表某产品线
class ConcreteFactory1: public AbstractFactory{
public:
    ConcreteFactory1();
    virtual ~ConcreteFactory1();
    virtual AbstractProductA* CreateProductA();
    virtual AbstractProductB* CreateProductB();
};


//具体工厂类2
class ConcreteFactory2: public AbstractFactory{
public:
    ConcreteFactory2();
    virtual ~ConcreteFactory2();
    virtual AbstractProductA* CreateProductA();
    virtual AbstractProductB* CreateProductB();
};
