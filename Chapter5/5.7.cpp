#include<iostream>
using namespace std;

int main()
{
	int grade;
	cout << "please enter your grade" << endl;
	cin >> grade;
	if (grade < 0 || grade>100)
	{
		cout << "the grade is illegal" << endl;
		return -1;
	}
	else if (grade == 100)  //处理满分
	{
		cout << "the grade is A++" << endl;
		return -1;
	}
	else if (grade < 60)    //处理不及格
	{
		cout << "the grade is F" << endl;
		return -1;
	}
	int iu = grade / 10;    //成绩的十位数
	int it = grade % 10;    //成绩的个位数
	string score, level, lettergrade;
	//根据成绩的十位数字确定score
	score = (iu == 9) ? "A"
		: (iu == 8) ? "B"
		: (iu == 7) ? "C" : "D";
	//根据成绩个位数字确定level
	level = (it < 3) ? "-"
		: (it > 7) ? "+" : "";
	//累加求得等级成绩
	lettergrade = score + level;
	cout << "the grade is:" << lettergrade << endl;
	return 0;
}
