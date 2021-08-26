#include <iostream>
#include <windows.h>
#include "modulesivanenko.h"
#include <wchar.h>

using namespace std;
void dev_information()
{
    cout << " ----------------------------------------------------------------------------" << endl;
    cout << "| Даний застосунок розроблено студентом центральноукраїнського нацiонального |" << endl;
    cout << "| технiчного унiверситету Іваненко Максимом Олеговтчем.                      |" << endl;
    cout << " ---------------------------©ALL_RIGHTS_ARE_RESERVED-------------------------" << endl;
}
int main()
{
system("chcp 1251 & cls");
dev_information();
char checkbox=0;
while (true){
cout<<"Введiть d для виконaння S_calculation"<<endl;
cout<<"Введiть g для розрaхунку чисельностi нaселення облaстi"<<endl;
cout<<"Введiть h для розрaхунку сили вiтру"<<endl;
cout<<"Введiть j для розрaхунку кiлькостi бiтiв"<<endl;
cout<<"Введiть нa вибiр k,K,к для виходу iз прогрaми"<<endl;
cout<<"====>";
cout<<endl;
cin>>checkbox;
if(checkbox=='d'){
    int x,y,z;
    while(true)
    {
        cout << "Введiть х: ";
        if(!scanf("%d", &x)){
            scanf("%*[^\n]");
            cout << "Ви ввели символ, введіть число." << endl;
        }
        else
            break;
    }
    while(true)
    {
        cout << "Введiть y: ";
        if(!scanf("%d", &y)){
            scanf("%*[^\n]");
            cout << "Ви ввели символ, введіть число." << endl;
        }
        else
            break;
    }
        while(true)
    {
        cout << "Введiть z: ";
        if(!scanf("%d", &z)){
            scanf("%*[^\n]");
            cout << "Ви ввели символ, введіть число." << endl;
        }
        else
            break;
    }
cout << "s_calculation(): " << s_calculation(x,y,z) << endl;
}
if(checkbox=='g'){
Task_9_1();
}
if(checkbox=='h'){
Task_9_2();
}
if(checkbox=='j'){
Task_9_3();
}
if(checkbox=='k'|| checkbox =='K' || checkbox =='\234' ){
break;
}
else{
Beep(500,500);
}
}
system("pause");
getchar();
return 0;
}
