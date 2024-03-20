#include <vector>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <string>

#define mouth 30 //定义常量
void practice_dataType();//数据类型练习

int main()
{
practice_dataType();
}
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
std::cout<<"char:"<<sizeof(g)<<"and "<<g<<std::endl;
std::string h="hello world";//字符串类型
}