#include <iostream>
using namespace std;

int main()
{
    // //选择结构，单行if语句
    // //用户输入分数，如果分数大于600分，输出考上了一本大学
    // //1.用户输入分数
    // int score = 0;
    // cout << "input your score:" <<endl;
    // cin >> score;
    // //打印输入的分数
    // cout << "your score is:" << score << endl;

    // //2.判断分数是否大于600，如果大于600分，则输出考上了一本大学
    // if(score > 600)
    // {
    //     cout << "A excellent score!" << endl;
    // }

    //选择结构，多行if语句
    //用户输入分数，如果分数大于600分，输出考上了一本大学，如果小于600分，输出未考上一本大学
    //1.用户输入分数
    int score = 0;
    cout << "input your score:" << endl;
    cin >> score;
    cout << "your score is:" << score << endl;

    //2.判断分数是否大于600，如果大于600分，则输出考上了一本大学，如果小于600分，则输出未考上一本大学
    if(score > 600)
    {
        cout << "A excellent score!" << endl;
    }
    else
    {
        cout << "A good score!" << endl;
    }

    system("pause");
    
    return 0;
}