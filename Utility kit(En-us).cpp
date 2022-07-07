#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int person,computer,sum=1,cnt;
string input,p;
string year,month;//定义变量年月
bool flag=true;
int main()
{
    int a,b,zd,zx,zl,zla,error,zlc,pwd,age;
    int  
    cout << "Utility kit"<< endl;
	cout << "Warning!You are currently using an earlier developer version of Dev Channel!"<<endl;
    cout << "What features are used?" << endl;
    cout << "Project List:" << endl;
    cout << "Calculator for Minimum Common Multiple and Maximum Common Factor press1" << endl;
    cout << "Error Code Query press2" << endl;
    cout << "Calculators press3" << endl;
    cout << "Changelog press4"<<endl;
    cout << "Version Lookup press5"<<endl; 
	cout << "About press6"<<endl;
	cout << "Enter Mystery Code press7"<<endl;
	cout << "Guess The Boxing Games press8"<<endl;
    cin >> zla;
    if(zla == 1)
    {
    cout << "-----Calculator for the least common multiple and the largest common factor-----" << endl;
    cout << "vesion = 0.0.2" << endl;
    cout << "Please enter a number........." << endl;
    cin >> a >> b;
    cout << "Calculate the minimum common multiple (press1) or the maximum common factor (press0)?" << endl;
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
    cout << "minimum common multiple = " << lcm<<endl;
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
    cout << "the maximum common factor :" << hcfl <<endl;
    system("pause");
    }
    else
    {
    	cout << "Error"<<endl;
		cout << "Error code：<0625>"<<endl;
		system("pause"); 
	}
    }
    else if ( zla == 2)
    {
        cout << "Welcome to query the system with error codes" << endl;
        cout << "Please enter the error code" << endl;
        cin >> error;
        if(error == 1546)
        {
            cout << "Reason for error: You entered the wrong function number!" << endl;
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
			system ("pause");
		}
		else
		{
			cout << "当前版本更新内容" <<endl;
			cout << "增加“版本查询”、“更新日志”、“关于”选项" <<endl;
			cout << "警告：当前版本为Dev版本，不稳定！"<<endl; 
		    system ("pause");
		}
	}
	else if( zla == 5)
	{
		cout << "当前版本为：Dev - 0.0.2(insider preview 20226000.2)" << endl;
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
		cout << "制作：嗯. QQ：1654316441"<<endl;
		cout << "本软件完全开源，禁止倒卖（虽然不会用人买）"<<endl; 
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
        if((p!="1" && p!="2" && p!="3" )||( p.size()!=1)){
            cout<<"!!!---输入识别有误（只能1,2,3）,请重新输入---!!!";
            continue;
        }
        srand(time(NULL));//当前的时间值来作为随机数种子.保证不重复
        int computer = 1 + rand()%3;//其中的1是起始值,3是整数的范围。

        string Marks="拳头";//这是给人做一个标记；
        string Marks2="拳头";//这是给电脑做一个标记；

        if(p=="1"){ person=1; Marks="剪刀";}
        else if(p=="2"){   person=2; Marks="石头";}
        else if(p=="3"){  person=3; Marks="布";}

        if(computer==1)  Marks2="剪刀";
        else if(computer==2)  Marks2="石头";
        else if(computer==3)  Marks2="布";

        if(person==computer){
            cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---还好还好---"+char(128)+"---平局--->");
        }else if(person==1&&computer==2||person==2&&computer==3||person==3&&computer==1){
            cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---运气差了点---"+char(128)+"---输了--->");
        }else {
            cout<<("  你猜拳的是:  "+Marks+   "\n  电脑出的是:  "+Marks2+"\n\n  <---赢了"+char(128)+"真棒--->");
            cnt++;
        }
        for(int i=1;;i++){
            cout<<"\n\n>>>>>>是否继续游戏(y/n)<<<<<<\n";
            cin>>input;
            if(input=="y" && input.size()==1){
                sum=1;
                break;
            }else if(input =="n" && input.size()==1){
                sum=0;
                cout<<"\n\n&&&---###--->>>游戏结束,本轮游戏赢了";
                cout<<cnt;
                cout<<"次<<<---###----&&&\n";
                cout<<"&&&---###--->>>大吉大利, 祝你上分顺利  <<<---###----&&&\n";
                return 0;
            }else{
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
    return 0;
}
