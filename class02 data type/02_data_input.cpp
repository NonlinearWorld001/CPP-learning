#include<iostream>
#include<string>

using namespace std;
/*
关键字：
cin >>  输入
cout << 输出
endl    换行
*/
 
int main(){

    //1.整型
    // int a = 0;
    // cout<<"请输入一个整数："<<endl;
    // cin>>a;
    // cout<<"整型变量a = "<<a<<endl;

    // //2.浮点型
    // float b = 3.14;
    // cout<<"请为单精度浮点数 b 赋值："<<endl;
    // cin>>b;
    // cout<<"单精度浮点数 b = "<<b<<endl;

    // //3.字符型
    // char ch = 'a';
    // cout<<"请为字符型变量 ch 赋值："<<endl;
    // cin>>ch;
    // cout<<"字符型变量 ch = "<<ch<<endl;

    //4.字符串型
    // string str = "hello";
    // cout<<"请为字符串型变量 str 赋值："<<endl;
    // cin>>str;
    // cout<<"字符串型变量 str = "<<str<<endl;

    //字符串以空格为分隔符：
    // string str1, str2;
    // cout << "请输入字符串：" << endl;
    // cin >> str1 >> str2;
    // cout << "str1 = " << str1 << endl;
    // cout << "str2 = " << str2 << endl;

    //5.布尔型 
    //改为真的时候不能输入true， 而应该是任意的非零值；
    bool flag = false;
    cout<<"请为布尔型变量 flag 赋值："<<endl;
    cin>>flag;
    cout<<"布尔型变量 flag = "<<flag<<endl;

    return 0;
}