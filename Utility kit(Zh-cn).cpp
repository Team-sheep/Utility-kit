#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int person,computer,sum=1,cnt;
string input,p;
string year,month;//定义变量年月
bool flag=true;
int main()
{
	while(1)
	{
		int a,b,zd,zx,zl,zla,error,zlc,pwd,age;
		cout << "实用计算工具箱"<< endl;
		cout << "当前使用为中文版，英文版请从https://github.com/Team-sheep/Utility-kit下载"<<endl;
		cout << "使用什么功能?" << endl;
		cout << "项目列表:" << endl;
		cout << "最小公倍数与最大公因数计算器(1)" << endl;
		cout << "错误代码查询(2)" << endl;
		cout << "计算器(3)" << endl;
		cout << "更新日志(4)"<<endl;
		cout << "版本查询(5）"<<endl;
		cout << "关于(6)"<<endl;
		cout << "输入神秘代码（7）"<<endl;
		cout << "猜拳游戏(8)"<<endl;
		cin >> zla;
		if(zla == 1)
		{
			cout << "-----最小公倍数与最大公因数计算器-----" << endl;
			cout << "vesion = 0.0.2" << endl;
			cout << "请输入数字........." << endl;
			cin >> a >> b;
			cout << "计算最小公倍数(1)还是最大公因数(0)?" << endl;
			cin >> zl;
			cout << "loading...." << endl;
			if(zl == 1)
			{
				int hcf, temp, lcm;
				hcf = a;
				temp = b;

				while(hcf != temp)
				{
					if(hcf > temp)
						hcf -= temp;
					else
						temp -= hcf;
				}

				lcm = (a * b) / hcf;
				cout << "最小公倍数 = " << lcm<<endl;
				system("pause");
			}
			else if(zl == 2)
			{
				int  hcfl;
				if ( a > b)
				{
					int temp = b;
					b = a;
					a = temp;
				}

				for (int i = 1; i <=  b; ++i)
				{
					if (a % i == 0 && b % i ==0)
					{
						hcfl = i;
					}
				}
				cout << "最大公因数 :" << hcfl <<endl;
				system("pause");
			}
			else
			{
				cout << "未知错误"<<endl;
				cout << "错误代码：<0625>"<<endl;
				system("pause");
			}
		}
		else if ( zla == 2)
		{
			cout << "欢迎使用错误代码查询系统" << endl;
			cout << "请输入错误代码" << endl;
			cin >> error;
			if(error == 1546)
			{
				cout << "报错原因 :您输入了错误的功能编号!" << endl;
				system("pause");
			}
			else if(error == 0062)
			{
				cout << "报错原因 :您输入了错误的运算符号!" << endl;
				system("pause");
			}
			else if( error == 4050)
			{
				cout << "报错原因 :您输入了0作为除数!" << endl;
				system("pause");
			}
			else if(error == 0625)
			{
				cout << "报错原因 :您输入了错误的功能编号!" << endl;
				system("pause");
			}
			else
			{
				cout << "没有检索到该错误代码,请认真核对错误代码是否输入正确!" << endl;
				system("pause");
			}
		}
		else if( zla == 3)
		{
			char op;
			float num1, num2;
			cout << "-----计算器-----" << endl;
			cout << "输入运算符: ";
			cin >> op;

			cout << "输入两个数: " << endl;
			cin >> num1 >> num2 ;

			switch(op)
			{
				case '+':
					cout << "结果是:" << num1+num2 <<endl;
					break;
					system("pause");

				case '-':
					cout << "结果是:" << num1-num2 <<endl;
					break;
					system("pause");

				case '*':
					cout << "结果是:" << num1*num2 << endl;
					break;
					system("pause");

				case '/':
					if (num2 == 0)
					{
						cout << "未知错误" << endl;
						cout << "错误代码 :<4050>"  << endl;
						break;
						system("pause");
					}
					else
					{
						cout << "结果是:" << num1 / num2 <<endl;
						break;
						system("pause");
					}

				default:
					cout << "未知错误" << endl;
					cout << "错误代码 :<0062>" << endl;
					break;
					system("pause");
			}
		}
		else if ( zla == 4)
		{
			cout << "---------更新日志---------" <<endl;
			cout << "查询版本历史（1）"<<endl;
			cout << "查看当前版本更新内容（2）"<<endl;
			cin >> zlc;
			if(zlc == 1)
			{
				cout << "版本历史"<<endl;
				cout << "Dev - 0.0.1" <<endl;
				cout << "首个版本，拥有计算最大公因数和计算最小公倍数的功能"<<endl;
				cout << "Beta - 0.0.1 Part 1"<<endl;
				cout << "第二个版本，更新了计算器与错误代码系统"<<endl;
				cout << "Beta - 0.0.1 Part 2"<<endl;
				cout << "增加了石头剪刀布的小游戏"<<endl;
				cout << "Preview - 0.0.1"<<endl;
				cout << "石头剪刀布小游戏被移除" <<endl;
				cout << "Release - 0.0.1"<<endl;
				cout << "修复大量漏洞"<<endl;
				cout << "Dev - 0.0.2"<<endl;
				cout << "增加“版本查询”、“更新日志”、“关于”选项，增加猜拳游戏" <<endl;
				cout << "Beta - 0.0.2 Part 1(English Updata)"<<endl;
				cout << "全新英语版本来临！修复少量漏洞" <<endl;
				system ("pause");
			}
			else
			{
				cout << "当前版本更新内容" <<endl;
				cout << "增加“版本查询”、“更新日志”、“关于”选项" <<endl;
				cout << "提示：当前版本为Beta版本，比较稳定！"<<endl;
				system ("pause");
			}
		}
		else if( zla == 5)
		{
			cout << "当前版本为：Realease - 0.0.2 ( Beta Part 2 English Updata )" << endl;
			cout << "版本区别"<<endl;
			cout << "Release : 正式版，十分稳定"<<endl;
			cout << "Dev ：超前预览版，不稳定"<<endl;
			cout << "Beta : 测试预览版，比较稳定"<<endl;
			cout << "Preview : 公开预览版，更加稳定"<<endl;
			system("pause");
		}
		else if( zla == 6)
		{
			cout << "关于"<<endl;
			cout << "实用计算工具箱"<<endl;
			cout << "制作：烦得很而非无奈 QQ：1654316441"<<endl;
			cout << "本软件完全开源，禁止倒卖（虽然不会用人买），软件作者就是个普通的初中牲，别要求太高（大雾"<<endl;
			cout << "整合了一些常用功能，还有点bug，凑合着用吧，我还在努力的修补漏洞"<<endl;
			system("pause");
		}
		else if(zla == 7)
		{
			cout << "这个功能还在开发中！";
			system ("pause");
		}
		else if(zla == 8 )
		{
			cout<<"\n*************猜拳游戏*************\n";
			while(sum>0)
			{
				cout<<"\n 请出拳（1.剪刀 2.石头 3.布）\n";
				cin >> p;
				if((p!="1" && p!="2" && p!="3" )||( p.size()!=1))
				{
					cout<<"!!!---输入识别有误（只能1,2,3）,请重新输入---!!!";
					continue;
				}
				srand(time(NULL));//当前的时间值来作为随机数种子.保证不重复
				int computer = 1 + rand()%3;//其中的1是起始值,3是整数的范围。

				string Marks="拳头";//这是给人做一个标记；
				string Marks2="拳头";//这是给电脑做一个标记；

				if(p=="1")
				{
					person=1;
					Marks="剪刀";
				}
				else if(p=="2")
				{
					person=2;
					Marks="石头";
				}
				else if(p=="3")
				{
					person=3;
					Marks="布";
				}

				if(computer==1)  Marks2="剪刀";
				else if(computer==2)  Marks2="石头";
				else if(computer==3)  Marks2="布";

				if(person==computer)
				{
					cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---还好还好---"+char(128)+"---平局--->");
				}
				else if(person==1&&computer==2||person==2&&computer==3||person==3&&computer==1)
				{
					cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---运气差了点---"+char(128)+"---输了--->");
				}
				else
				{
					cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---赢了"+char(128)+"真棒--->");
					cnt++;
				}
				for(int i=1;; i++)
				{
					cout<<"\n\n>>>>>>是否继续游戏(y/n)<<<<<<\n";
					cin>>input;
					if(input=="y" && input.size()==1)
					{
						sum=1;
						break;
					}
					else if(input =="n" && input.size()==1)
					{
						sum=0;
						cout<<"\n\n&&&---###--->>>游戏结束,本轮游戏赢了";
						cout<<cnt;
						cout<<"次<<<---###----&&&\n";
						cout<<"&&&---###--->>>大吉大利, 祝你上分顺利  <<<---###----&&&\n";
						return 0;
					}
					else
					{
						cout<<"\n\n>>>---!!!---输入识别有误（y/n）,请重新输入---!!!---<<<";
						continue;
					}
				}
			}
		}
		else
		{
			cout << "未知错误" << endl;
			cout << "错误代码 : <1546>" << endl;
			cout << "可以使用查询功能查询报错原因"<<endl;
			system("pause");
		}
		cout <<"-------------分割线---------------\n" << endl; 
	}
	return 0;
}

