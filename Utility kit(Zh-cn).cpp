#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int person,computer,sum=1,cnt;
string input,p;
string year,month;//�����������
bool flag=true;
int main()
{
	while(1)
	{
		int a,b,zd,zx,zl,zla,error,zlc,pwd,age;
		cout << "ʵ�ü��㹤����"<< endl;
		cout << "��ǰʹ��Ϊ���İ棬Ӣ�İ����https://github.com/Team-sheep/Utility-kit����"<<endl;
		cout << "ʹ��ʲô����?" << endl;
		cout << "��Ŀ�б�:" << endl;
		cout << "��С���������������������(1)" << endl;
		cout << "��������ѯ(2)" << endl;
		cout << "������(3)" << endl;
		cout << "������־(4)"<<endl;
		cout << "�汾��ѯ(5��"<<endl;
		cout << "����(6)"<<endl;
		cout << "�������ش��루7��"<<endl;
		cout << "��ȭ��Ϸ(8)"<<endl;
		cin >> zla;
		if(zla == 1)
		{
			cout << "-----��С���������������������-----" << endl;
			cout << "vesion = 0.0.2" << endl;
			cout << "����������........." << endl;
			cin >> a >> b;
			cout << "������С������(1)�����������(0)?" << endl;
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
				cout << "��С������ = " << lcm<<endl;
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
				cout << "������� :" << hcfl <<endl;
				system("pause");
			}
			else
			{
				cout << "δ֪����"<<endl;
				cout << "������룺<0625>"<<endl;
				system("pause");
			}
		}
		else if ( zla == 2)
		{
			cout << "��ӭʹ�ô�������ѯϵͳ" << endl;
			cout << "������������" << endl;
			cin >> error;
			if(error == 1546)
			{
				cout << "����ԭ�� :�������˴���Ĺ��ܱ��!" << endl;
				system("pause");
			}
			else if(error == 0062)
			{
				cout << "����ԭ�� :�������˴�����������!" << endl;
				system("pause");
			}
			else if( error == 4050)
			{
				cout << "����ԭ�� :��������0��Ϊ����!" << endl;
				system("pause");
			}
			else if(error == 0625)
			{
				cout << "����ԭ�� :�������˴���Ĺ��ܱ��!" << endl;
				system("pause");
			}
			else
			{
				cout << "û�м������ô������,������˶Դ�������Ƿ�������ȷ!" << endl;
				system("pause");
			}
		}
		else if( zla == 3)
		{
			char op;
			float num1, num2;
			cout << "-----������-----" << endl;
			cout << "���������: ";
			cin >> op;

			cout << "����������: " << endl;
			cin >> num1 >> num2 ;

			switch(op)
			{
				case '+':
					cout << "�����:" << num1+num2 <<endl;
					break;
					system("pause");

				case '-':
					cout << "�����:" << num1-num2 <<endl;
					break;
					system("pause");

				case '*':
					cout << "�����:" << num1*num2 << endl;
					break;
					system("pause");

				case '/':
					if (num2 == 0)
					{
						cout << "δ֪����" << endl;
						cout << "������� :<4050>"  << endl;
						break;
						system("pause");
					}
					else
					{
						cout << "�����:" << num1 / num2 <<endl;
						break;
						system("pause");
					}

				default:
					cout << "δ֪����" << endl;
					cout << "������� :<0062>" << endl;
					break;
					system("pause");
			}
		}
		else if ( zla == 4)
		{
			cout << "---------������־---------" <<endl;
			cout << "��ѯ�汾��ʷ��1��"<<endl;
			cout << "�鿴��ǰ�汾�������ݣ�2��"<<endl;
			cin >> zlc;
			if(zlc == 1)
			{
				cout << "�汾��ʷ"<<endl;
				cout << "Dev - 0.0.1" <<endl;
				cout << "�׸��汾��ӵ�м�����������ͼ�����С�������Ĺ���"<<endl;
				cout << "Beta - 0.0.1 Part 1"<<endl;
				cout << "�ڶ����汾�������˼�������������ϵͳ"<<endl;
				cout << "Beta - 0.0.1 Part 2"<<endl;
				cout << "������ʯͷ��������С��Ϸ"<<endl;
				cout << "Preview - 0.0.1"<<endl;
				cout << "ʯͷ������С��Ϸ���Ƴ�" <<endl;
				cout << "Release - 0.0.1"<<endl;
				cout << "�޸�����©��"<<endl;
				cout << "Dev - 0.0.2"<<endl;
				cout << "���ӡ��汾��ѯ������������־���������ڡ�ѡ����Ӳ�ȭ��Ϸ" <<endl;
				cout << "Beta - 0.0.2 Part 1(English Updata)"<<endl;
				cout << "ȫ��Ӣ��汾���٣��޸�����©��" <<endl;
				system ("pause");
			}
			else
			{
				cout << "��ǰ�汾��������" <<endl;
				cout << "���ӡ��汾��ѯ������������־���������ڡ�ѡ��" <<endl;
				cout << "��ʾ����ǰ�汾ΪBeta�汾���Ƚ��ȶ���"<<endl;
				system ("pause");
			}
		}
		else if( zla == 5)
		{
			cout << "��ǰ�汾Ϊ��Realease - 0.0.2 ( Beta Part 2 English Updata )" << endl;
			cout << "�汾����"<<endl;
			cout << "Release : ��ʽ�棬ʮ���ȶ�"<<endl;
			cout << "Dev ����ǰԤ���棬���ȶ�"<<endl;
			cout << "Beta : ����Ԥ���棬�Ƚ��ȶ�"<<endl;
			cout << "Preview : ����Ԥ���棬�����ȶ�"<<endl;
			system("pause");
		}
		else if( zla == 6)
		{
			cout << "����"<<endl;
			cout << "ʵ�ü��㹤����"<<endl;
			cout << "���������úܶ������� QQ��1654316441"<<endl;
			cout << "�������ȫ��Դ����ֹ��������Ȼ���������򣩣�������߾��Ǹ���ͨ�ĳ���������Ҫ��̫�ߣ�����"<<endl;
			cout << "������һЩ���ù��ܣ����е�bug���պ����ðɣ��һ���Ŭ�����޲�©��"<<endl;
			system("pause");
		}
		else if(zla == 7)
		{
			cout << "������ܻ��ڿ����У�";
			system ("pause");
		}
		else if(zla == 8 )
		{
			cout<<"\n*************��ȭ��Ϸ*************\n";
			while(sum>0)
			{
				cout<<"\n ���ȭ��1.���� 2.ʯͷ 3.����\n";
				cin >> p;
				if((p!="1" && p!="2" && p!="3" )||( p.size()!=1))
				{
					cout<<"!!!---����ʶ������ֻ��1,2,3��,����������---!!!";
					continue;
				}
				srand(time(NULL));//��ǰ��ʱ��ֵ����Ϊ���������.��֤���ظ�
				int computer = 1 + rand()%3;//���е�1����ʼֵ,3�������ķ�Χ��

				string Marks="ȭͷ";//���Ǹ�����һ����ǣ�
				string Marks2="ȭͷ";//���Ǹ�������һ����ǣ�

				if(p=="1")
				{
					person=1;
					Marks="����";
				}
				else if(p=="2")
				{
					person=2;
					Marks="ʯͷ";
				}
				else if(p=="3")
				{
					person=3;
					Marks="��";
				}

				if(computer==1)  Marks2="����";
				else if(computer==2)  Marks2="ʯͷ";
				else if(computer==3)  Marks2="��";

				if(person==computer)
				{
					cout<<("  ���ȭ����:  "+Marks+   "\n  ���Գ�����:  "+Marks2+"\n\n  <---���û���---"+char(128)+"---ƽ��--->");
				}
				else if(person==1&&computer==2||person==2&&computer==3||person==3&&computer==1)
				{
					cout<<("  ���ȭ����:  "+Marks+   "\n  ���Գ�����:  "+Marks2+"\n\n  <---�������˵�---"+char(128)+"---����--->");
				}
				else
				{
					cout<<("  ���ȭ����:  "+Marks+   "\n  ���Գ�����:  "+Marks2+"\n\n  <---Ӯ��"+char(128)+"���--->");
					cnt++;
				}
				for(int i=1;; i++)
				{
					cout<<"\n\n>>>>>>�Ƿ������Ϸ(y/n)<<<<<<\n";
					cin>>input;
					if(input=="y" && input.size()==1)
					{
						sum=1;
						break;
					}
					else if(input =="n" && input.size()==1)
					{
						sum=0;
						cout<<"\n\n&&&---###--->>>��Ϸ����,������ϷӮ��";
						cout<<cnt;
						cout<<"��<<<---###----&&&\n";
						cout<<"&&&---###--->>>�󼪴���, ף���Ϸ�˳��  <<<---###----&&&\n";
						return 0;
					}
					else
					{
						cout<<"\n\n>>>---!!!---����ʶ������y/n��,����������---!!!---<<<";
						continue;
					}
				}
			}
		}
		else
		{
			cout << "δ֪����" << endl;
			cout << "������� : <1546>" << endl;
			cout << "����ʹ�ò�ѯ���ܲ�ѯ����ԭ��"<<endl;
			system("pause");
		}
		cout <<"-------------�ָ���---------------\n" << endl; 
	}
	return 0;
}

