#include<iostream>
using namespace std;

int main()
{
	int grade;
	cout << "请输入您的成绩" << endl;
	cin >> grade;
	if (grade < 0 || grade>100)
	{
		cout << "成绩输入错误" << endl;
		return -1;
	}
	else if (grade == 100)  //处理满分
	{
		cout << "您的成绩等级是A++" << endl;
		return -1;
	}
	else if (grade < 60)    //处理不及格
	{
		cout << "您的成绩等级是F" << endl;
		return -1;
	}
	int iu = grade / 10;    //成绩的十位数
	int it = grade % 10;    //成绩的个位数
	string score, level, lettergrade;
	//根据成绩的十位数字确定score
	if (iu == 9)
	{
		score = "A";
	}
	else if (iu == 8)
	{
		score = "B";
	}
	else if (iu == 7)
	{
		score = "c";
	}
	else
		score = "D";
	//根据成绩个位数字确定level
	if (it < 3)
	{
		level = "-";
	}
	else if (it > 7)
	{
		level = "+";
	}
	else
	{
		level = "";
	}
	//累加求得等级成绩
	lettergrade = score + level;
	cout << "您的成绩等级是： " << lettergrade << endl;
	return 0;
}
