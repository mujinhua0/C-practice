#include <vector>
#include <iostream>
#include <ostream>
#include <algorithm>

#define mouth 30 //定义常量
void practice_dataType();

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
std::cout<<sizeof(a)<<std::endl;
std::cout<<sizeof(b)<<std::endl;
std::cout<<sizeof(c)<<std::endl;
std::cout<<sizeof(d)<<std::endl;

}