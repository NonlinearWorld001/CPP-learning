#include<iostream>
//#include<string>
using namespace std;

int main()
{
  //sizeof 关键字 -->数据类型大小：sizeof(数据类型/变量名)
  //整型
  //1、短整型
  short short_int_num = 10;

  //2、整型
  int int_num = 20;
 
  //3、长整型
  long long_int_num = 30;

  //4、长长整型
  long long long_long_int_num = 40;
  cout<<"short int is "<<short_int_num<<' '<<typeid(short_int_num).name()<<sizeof(short_int_num)<<"\n"<<endl;
  cout<<"int is "<<int_num<<" "<<typeid(int_num).name()<<sizeof(int_num)<<"\n"<<endl;
  cout<<"long long int is "<<long_long_int_num<<" "<<typeid(long_long_int_num).name()<<sizeof(long_long_int_num)<<"\n"<<endl;

  //实型(浮点数)
  //1、单精度
  float float_num = 1.0f;
  //2、双精度
  double double_num = 2.0;
  cout<<float_num<<'\n'<<double_num<<endl;
  //科学记数法
  float f2 = 3e2;
  printf("%.10f\n",f2);

  f2 = static_cast<int>(f2);
  cout<< (int)f2 <<typeid(f2).name()<<'\n'<<endl;

  //字符型:单引号，里面只能有一个字符,不能用双引号
  char ch = 'a';
  cout<<ch<<' '<<sizeof(ch)<<' '<<typeid(ch).name()<<endl;
  cout<<"ASCII: "<<(int)ch<<'\n'<<endl;

  //转义字符:整齐地输出数据
  //换行 \n
  //反斜杠 \\
  //水平制表符 \t
  cout<<"aaa\t hello world"<<endl;
  cout<<"aaaa\t hello world"<<endl;
  cout<<"aaaaa\t hello world"<<'\n'<<endl;

  //字符串类型
  //string 关键字, 需要包含头文件<string>(似乎在最新的编译器中不需要)
  string str = "hello, c++";
  cout<<str<<endl;
  return 0;
  
}