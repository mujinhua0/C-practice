#include <vector>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

#define mouth 30 //定义常量
void practice_dataType();//数据类型练习
void operator1();//运算符练习
void practice_if();//if语句练习,三目运算符
void practice_switch();//switch语句练习
void practice_while1();//while语句练习，猜数字
void practice_for();//for语句练习


//================================================================================================
int main()
{
practice_for();
}

//===========数据类型联系================================================================================

void practice_dataType()
{
const int n=10; //定义常量
short a=1;     //短整型
int b=222;     //整型
long c=222;   //长整型
long long d=2; //长长整型
std::cout<<"short:"<<sizeof(a)<<std::endl;//sizeof()函数可以用来计算变量的大小
std::cout<<"int:"<<sizeof(b)<<std::endl;
std::cout<<"long:"<<sizeof(c)<<std::endl;
std::cout<<"long long:"<<sizeof(d)<<std::endl;

float e=1.422222222f;//加f表示float类型,如果不加f则数值为double类型,在变量赋值时转换为float类型
//float类型只能存储7位有效数字，float可以存储15位有效数字
double f=1.23456789;
std::cout<<"float:"<<sizeof(e)<<"and"<<e<<std::endl;
std::cout<<"double:"<<sizeof(f)<<"and"<<f<<std::endl;  //cout的输出精度是有限的，一般为六位小数

char g='a';//字符类型，只占用一个字节
std::cout<<"char:\\"<<sizeof(g)<<"and "<<(int)g<<std::endl;//对应的ASCII码
std::string h="hello world";//字符串类型

std::cout<<"\\"<<"\n"<<"\?"<<std::endl;//转义字符
//水平制表符
std::cout<<"aa\thello\tworld"<<std::endl;
std::cout<<"aaaa\the\tworld"<<std::endl;

//C风格字符串：加中括号，后面双引号
char i[]="hello world";
//C++风格字符串
std::string j="hello world";
std::cout<<"i:"<<i<<std::endl;
std::cout<<"j:"<<j<<std::endl;

//布尔类型
bool k=true;
std::cout<<"k:"<<k<<std::endl;
}

//========运算符练习=====================================================================================

void operator1()
{
    int a=1;
    int b=2;
    std::cout<<"a+b="<<a+b<<std::endl;
    std::cout<<"a-b="<<a-b<<std::endl;
    std::cout<<"a*b="<<a*b<<std::endl;
    std::cout<<"a/b="<<a/b<<std::endl;//两个整数相除还是整数
    std::cout<<"a%b="<<a%b<<std::endl; //取余数
    std::cout<<"a==b="<<(a==b)<<std::endl;//比较
    std::cout<<"a!=b="<<(a!=b)<<std::endl;//不等
    std::cout<<"a&&b="<<(a&&b)<<std::endl;//与
    std::cout<<"a||b="<<(a||b)<<std::endl;//或
    //前置++,先++后计算
    int c=++a*b;
    std::cout<<"++a="<<++a<<std::endl;
    std::cout<<"c="<<c<<std::endl;
    //后置++，先计算后++
    int a1=1;
    int b1=2;
    int d=a1++ *b1;
    std::cout<<"d= "<<d<<std::endl;

}

//==========练习if语句和三目运算符练习====================================================================

void practice_if()
{
    float a;
    std::cout<<"请输入分数：";
    std::cin>>a;
    if (a>600)
    {
        std::cout<<"优秀"<<std::endl;
    }
    else if (a>500)
    {
        std::cout<<"合格"<<std::endl;
    
    }
    else
        std::cout<<"不及格"<<std::endl;
    
    //三目运算符，condition?true:false
    a>600?std::cout<<"优秀":std::cout<<"不及格";

}

//==============Switch语句练习====================================================================================

void practice_switch()
{
    int a;
    std::cout<<"请输入月份：";
    std::cin>>a;
    int b=a/3;
    switch (b)
    {
        case 0:
        std::cout<<"春季"<<std::endl;
        break;

        case 1:
        std::cout<<"夏季"<<std::endl;
        break;

        case 2:
        std::cout<<"秋季"<<std::endl;
        break;

        case 3:
        std::cout<<"冬季"<<std::endl;
        break;

        default:
        std::cout<<"输入错误"<<std::endl;
        break;
    }

}

//==============while语句练习====================================================================================

void practice_while1()//猜数字
{
    std::srand(std::time(nullptr));//随机数种子
    int a=rand()%100+1;
    int b;
    std::cout<<"输入数字"<<std::endl;
    std::cin>>b;
    while (b!=a)
    {
        if (b>a)
         std::cout<<"猜大了"<<std::endl;
        else
         std::cout<<"猜小了"<<std::endl;
        std::cin>>b;
    }
    std::cout<<"猜对了"<<std::endl;
}


//==============for语句练习====================================================================================

void practice_for()//敲桌子
{
    for (int i=1;i<101;i++)
    {
        int a=i%10;
        int b=i/10;
        int c=i%7;
        if (a==7||b==7||c==0)
        {
            std::cout<<"敲桌子"<<std::endl;
        }
        else
        {
            std::cout<<i<<std::endl;
        }
    }
    
}



