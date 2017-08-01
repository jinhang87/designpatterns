#pragma once

//抽象基类，代表A类产品的基类
class AbstractProductA{
public:
    virtual ~AbstractProductA() = 0;
    virtual void operate() = 0;
protected:
    AbstractProductA();//屏蔽构造函数    
};

//产品A1
class ProductA1 : public AbstractProductA{
public:
    ProductA1();
    virtual ~ProductA1();
    virtual void operate();
};

//产品A2
class ProductA2 : public AbstractProductA{
public:
    ProductA2();
    virtual ~ProductA2();
    virtual void operate();
};


//抽象基类，代表B类产品的基类
class AbstractProductB{
public:
    virtual ~AbstractProductB() = 0;
    virtual void operate() = 0;
protected:
    AbstractProductB();//屏蔽构造函数    
};

//产品B1
class ProductB1 : public AbstractProductB{
public:
    ProductB1();
    virtual ~ProductB1();
    virtual void operate();
};

//产品B2
class ProductB2 : public AbstractProductB{
public:
    ProductB2();
    virtual ~ProductB2();
    virtual void operate();
};






