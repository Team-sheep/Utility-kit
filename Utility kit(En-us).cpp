#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int person,computer,sum=1,cnt;
string input,p;
string year,month;//Define the variable year and month
bool flag=true;
int main()
{
	while(1)
	{
    int a,b,zd,zx,zl,zla,error,zlc,pwd,age;
    cout << "Utility kit" << endl;
    cout << "The current version is English, please download the Chinese version from the https://github.com/Team-sheep/Utility-kit"<<endl;
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
        int hcfl;
    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    
    for (int i = 1; i <= b; ++i)
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
cout << "Error code: <0625>"<<endl;
system("pause");
}
    }
    else if (zla == 2)
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
            cout << "Reason for error : You entered the wrong operator symbol!" << endl;
            system("pause");
        }
        else if(error == 4050)
        {
            cout << "Reason for error: You entered 0 as a divisor!" << endl;
            system("pause");
        }
        else if(error == 0625)
        {
        cout << "Reason for error: You entered the wrong function number!" << endl;
            system("pause");
}
        else
        {
            cout << "If you don't retrieve the error code, please check that the error code was entered correctly and try again!" << endl;
            system("pause");
        }
    }
    else if( zla == 3)
    {
    char op;
    float num1, num2;
    cout << "-----calculator-----" << endl;
    cout << "Input operator: ";
    cin >> op;
 
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2 ;
 
    switch(op)
    {
        case '+':
            cout << "The result is:" << num1+num2 <<endl;
            break;
            system("pause");
 
        case '-':
            cout << "The result is:" << num1-num2 <<endl;
            break;
            system("pause");
 
        case '*':
            cout << "The result is:" << num1*num2 << endl;
            break;
            system("pause");
 
        case '/':
            if (num2 == 0)
            {
                cout << "Unknown Error" << endl;
                cout << "Error code: <4050>" << endl;
                break;
                system("pause");
            }
            else
            {
                cout << "The result is:" << num1 / num2 <<endl;
                break;
                system("pause");
            }
 
        default:
            cout << "Unknown Error" << endl;
            cout << "Error code: <0062>" << endl;
            break;
            system("pause");
    }
    }
    else if (zla == 4)
    {
    cout << "---------Changelog---------" <<endl;
cout << "Query version history (1)"<<endl;
cout << "View the updated content of the current version (2)"<<endl;
    cin >> zlc;
    if(zlc == 1)
    {
    cout << "version history" <<endl;
cout << "Dev - 0.0.1" <<endl;
cout << "The first version, with the functions of calculating the greatest common factor and calculating the least common multiple"<<endl;
cout << "Beta - 0.0.1 Part 1"<<endl;
cout << "Second version, updated calculator and error code system"<<endl;
cout << "Beta - 0.0.1 Part 2"<<endl;
cout << "Added a small game of rock-paper-scissors"<<endl;
cout << "Release - 0.0.1"<<endl;
cout << "Fix a lot of bugs"<<endl;
cout << "Dev - 0.0.2"<<endl;
cout << "Add Version Query, Update Log, About options, add guessing game" <<endl;
cout << "Beta - 0.0.2 Part 1(English Updata)"<<endl;
cout << "New English version is coming! Minor bug fixes" <<endl;
system("pause");
}
}
else if( zla == 5)
{
cout << "The current version is: Realease - 0.0.2 ( Beta Part 2 English Updata )"<< endl;
cout << "version difference" <<endl;
cout << "Release : official version, very stable"<<endl;
cout << "Dev: advance preview, unstable"<<endl;
cout << "Beta : Test preview version, relatively stable"<<endl;
cout << "Preview : public preview, more stable"<<endl;
system("pause");
}
else if( zla == 6)
{
cout << "About" <<endl;
cout << "Practical Computing Toolbox"<<endl;
cout << "Production: QQ: 1654316441"<<endl;
cout << "This software is completely open source, and reselling is prohibited (although no one will buy it)"<<endl;
cout << "Integrated some common functions, there are still some bugs, make do with it, I'm still working hard to patch the loopholes"<<endl;
system("pause");
}
else if(zla == 7)
{
cout << "This feature is still under development!";
system("pause");
}
else if(zla == 8 )
{
cout<<"\n****************guessing game*************\n";
while(sum>0)
{
cout<<"\n Please punch (1. Scissors 2. Rock 3. Cloth)\n";
cin >> p;
if((p!="1" && p!="2" && p!="3" )||( p.size()!=1))
{
cout<<"!!!---The input recognition is wrong (only 1,2,3), please re-enter---!!!";
continue;
}
srand(time(NULL));//The current time value is used as the random number seed. Guaranteed not to repeat
int computer = 1 + rand()%3;//where 1 is the starting value and 3 is the range of integers.

string Marks="fist";//This is to make a mark for people;
string Marks2="fist";//This is to make a mark for the computer;

if(p=="1")
{
person=1;
Marks="scissors";
}
else if(p=="2")
{
person=2;
Marks="stones";
}
else if(p=="3")
{
person=3;
Marks="cloth";
}

if(computer==1) Marks2="Scissors";
else if(computer==2) Marks2="stone";
else if(computer==3) Marks2="cloth";

if(person==computer)
{
cout<<(" Your guess is: "+Marks+ "\n The computer output is: "+Marks2+"\n\n <---It's okay, it's okay---"+char(128)+"-- -Tie--->");
}
else if(person==1&&computer==2||person==2&&computer==3||person==3&&computer==1)
{
cout<<(" Your guess is: "+Marks+ "\n The computer is: "+Marks2+"\n\n <---A little bit of luck---"+char(128)+"-- -lose--->");
}
else
{
cout<<(" Your guess is: "+Marks+ "\n The computer is: "+Marks2+"\n\n <---Win "+char(128)+"Awesome--->" );
cnt++;
}
for(int i=1;; i++)
{
cout<<"\n\n>>>>>>Whether to continue the game(y/n)<<<<<<\n";
cin>>input;
if(input=="y" && input.size()==1)
{
sum=1;
break;
}
else if(input == "n" && input.size()==1)
{
sum=0;
cout<<"\n\n&&&---###--->>>The game is over, the game is won";
cout<<cnt;
cout<<"Times<<<---###----&&&\n";
cout<<"&&&---###--->>>Good luck, good luck with your score <<<---###----&&&\n";
return 0;
}
else
{
cout<<"\n\n>>>---!!!---The input recognition is incorrect (y/n), please re-enter---!!!---<<<";
continue;
}
}
}
}
else
{
cout << "Unknown Error" << endl;
cout << "Error code: <1546>" << endl;
cout << "You can use the query function to query the reason for the error"<<endl;
system("pause");
}
cout <<"-------------split line---------------\n" << endl;
}
return 0;
}

