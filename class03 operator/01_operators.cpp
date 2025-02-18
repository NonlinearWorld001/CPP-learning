#include<iostream>
using namespace std;
/*
运算符：
* 算术运算符
* 赋值运算符
* 比较运算符
* 逻辑运算符

*/

int main(){
    //1. 算术运算符：+ - * / % ++(前置后置递增) --(前置后置递减)
    // int a = 10;
    // int b = 3;
    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl; // 整数相除结果依然是整数，小数部分会舍弃
    // cout << a % b << endl;

    //1.1 前置递增：让变量+1，然后进行表达式运算
    // int a1 = 10;
    // ++ a1;
    // cout << a1 << '\n' << endl;

    // int a3 = 10;
    // int b3 = ++a3 * 10;
    // cout << a3 << endl;
    // cout << b3 << '\n' <<endl;

    // //1.2 后置递增：先进行表达式运算，再让变量+1
    // int a2 = 10;
    // a2++;
    // cout << a2 << '\n' << endl;

    // int a4 = 10;
    // int b4 = a4++ * 10;
    // cout << a4 << endl;
    // cout << b4 << endl;

    //2. 赋值运算符：= += -= *= /= %=

    // int a1 = 10;
    // cout << "a1 = " << a1 << endl;
    // a1 =100;
    // cout << "a1 = " << a1 << endl;

    // int a2 = 10;
    // a2 += 2;
    // cout << "a2 = " << a2 << endl;

    // int a3 = 10;
    // a3 -= 2;
    // cout << "a3 = " << a3 << endl;

    // int a4 = 10;
    // a4 *= 2;
    // cout << "a4 = " << a4 << endl;

    // int a5 = 10;
    // a5 /= 2;
    // cout << "a5 = " << a5 << endl;
    
    // int a6 = 10;
    // a6 %= 3;
    // cout << "a6 = " << a6 << endl;

    //3. 比较运算符：== != > < >= <=
    // int a = 10;
    // int b = 20;
    // cout << (a == b) << endl;
    // cout << (a != b) << endl;
    // cout << (a > b) << endl;
    // cout << (a < b) << endl;

    //4. 逻辑运算符：&&-> 与运算符，||-> 或运算符，!-> 非运算符
    int a = 10;
    int b = 10;
    int c = 0;
    cout << (a && b) << endl;
    cout << (a && c) << endl;
    cout << (a || c) << endl;
    cout << (!a) << endl;

    return 0;
}
