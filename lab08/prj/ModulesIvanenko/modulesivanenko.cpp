#include "modulesivanenko.h"
#include <cmath>
#include<fstream>

#include<iostream>
using namespace std;
float s_calculation(int x, int y, int z){
    float S = pow((2*z + 1), x) - sqrt(abs(y - 1/2 * z)) + 3.14 + z;
    S = int(S*100 + 0.5)/100.0;
    return S;
}


int validation_1(){
    int a=0;
    while (!(cin >> a)){
        cout << "Введiть числ : ";
        cin.clear();
        fflush(stdin);
        cout<<"===>";
    }
    while(a<0 || a==0 || a>908000){
        if(a<0 || a==0 || a>908000){
            cout<<"Ввеiть число бiльше з 0:"<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        a=validation_1();
    }
    return a;
}

double Task_9_1(){
    int a=0,b=0,c=0,d=0;
    a = 41880268;
    cout<<"Введiть вибувших(померлих бо якi знялися з регiстр цiї): ";
    b=validation_1();
    cout<<"Введiть кiлькiсть людей якi прибули: ";
    c=validation_1();
    d=a-b+c;

    cout<<"Статистичнi данi чисельностi населення України станом на 1 сiчня 2021р.: "<<a<<"\n";
    cout<<"Кiлькiсть громадян, якi вибули, знялись з реєстр цiї, вмерли: "<<b<<"\n";
    cout<<"Кiлькiсть громадян, якi з реєструв лися на постiйне мiсце прожив ння, на родились: "<<c<<"\n";
    d=a-b+c;
    cout<<"Чисельнiсть на селення в Українi станом на 1 травня 2021р. ст новитиме: "<<d<<"\n";
    if(d>a){
        cout<<"Кiлькiсть людей якi з реєструв лися на постiйне мiсце тa кiлькiсть новонароджених бiльше нiж кiлькiсть людей якi \nзнялись з реєстр цiї, бо померли.Станом на 1 число цього мiсяця \nкiлькiсть людей становить: "<<d;
    }
    else{
        cout<<"Кiлькiсть людей якi знялись з реєстр цiї, бо померли бiльше нiж кiлькiсть \nлюдей якi з реєструвалися на постiйне мiсце тa кiлькiсть новон роджених.Станом на 1 число цього мiсяця \nкiлькiсть людей становить: "<<d<<"\n";
    }
    return 0;
}

int validation()
{
    float arr;
    while (!(cin >> arr)){
        cout << "Помилка введiть числ \n";
        cin.clear();
        fflush(stdin);
        cout<<"Введiть швидкiсть руху повiтрянних масс: ";
    }
    while(arr<0 || arr==0 || arr>100){
        if(arr<0|| arr==0 || arr>100){
            cout<<"Введiть показники не менше 0 тa не бiльше нiж 32.6: "<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        arr=validation();
    }
    return arr;
}

double Task_9_2(){
    float arr[24];
    int w[24];
    cout<<"Введiть швидкiсть руху повiтряних масс впродовж доби:\n";
    for (int i = 0; i < 24; i++) {
        w[i]=0;
    }
    for (int i = 0; i < 24; i++) {
        cout<<i + 1<<": ";
        arr[i]=validation();
    }
    for (int i = 0; i < 24; i++) {
        if(arr[i]<0.3){
            w[i]=0;
        }
        if(arr[i]>=0.3 && arr[i]<=1.5){
            w[i]=1;
        }
        if(arr[i]>=1.6 && arr[i]<=3.3){
            w[i]=2;
        }
        if(arr[i]>=3.4 && arr[i]<=5.4){
            w[i]=3;
        }
        if(arr[i]>=5.5 && arr[i]<=7.9){
            w[i]=4;
        }
        if(arr[i]>=8.0 && arr[i]<=10.7){
            w[i]=5;
        }
        if(arr[i]>=10.8 && arr[i]<=13.8){
            w[i]=6;
        }
        if(arr[i]>=13.9 && arr[i]<=17.1){
            w[i]=7;
        }
        if(arr[i]>=17.2 && arr[i]<=20.7){
            w[i]=8;
        }
        if(arr[i]>=20.8 && arr[i]<=24.4){
            w[i]=9;
        }
        if(arr[i]>=24.5 && arr[i]<=28.4){
            w[i]=10;
        }
        if(arr[i]>=28.5 && arr[i]<=32.6){
            w[i]=11;
        }
        if(arr[i]>32.7){
            w[i]=12;
        }
    }
    int min = w[0];

    for (int i = 0; i < 24; i++) {
        if (w[i] < min) {
            min = w[i];
        }
    }
    cout<<" Найменша швидкiсть вiтру зафiксованна впродовж доби (В балах Бофорта ): ";
    cout<<min<<"\n";
    return 0;
}

int validation_2(){
    int a=0;
    while (!(cin >> a)){
        cout << "Введiть числo: ";
        cin.clear();
        fflush(stdin);
        cout<<"===>";
    }
    while(a<0 || a==0 || a>908000){
        if(a<0 || a==0 || a>908000){
            cout<<"Введiть число бiльше 0 тa до 9008000:"<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        a=validation_2();
    }
    return a;
}

double Task_9_3(){
    cout<<"Введiть число бiльше 0 тa до 9008000 ==> ";
    string text;
    int a=0;
    int k=0;
    a=validation_2();
    while(a) {
        k = a % 2;
        a = a / 2;
        text =to_string(k)+text;
    }
    cout << text << endl;
    int i=0,count_null=0,count_one=0;
    while (text[i]) {
        if(text[i]=='0') count_null++;
        else if(text[i]=='1') count_one++;
        i++;
    }
    cout<<L"7 element is : "<<text[text.length()-7]<<endl;
    if(text[text.length()-7]=='0') {
        cout<<L"count of 0 : "<<count_null<<endl;
    }
    else {
        cout<<L"counto of 1 : "<<count_one<<"\n"<<endl;
    }
    return 0;
}

void binarySystem()
{

    cout << "Введiть число вiд 0 до 7483650: ";
    string str = "";
    int num1 = 0, i = 0, counterNull = 0, counterOne = 0, num2 = 0;
    num1 = validationForBinary();
    while (num1) {
        num2 = num1 % 2;
        num1 = num1 / 2;
        str = to_string(num2) + str;
    }
    while (str[i]) {
        if(str[i] == '0')
            counterNull++;
        else if(str[i] == '1')
            counterOne++;
        i++;
    }
    ofstream f;

    f.open("outputText.txt", ios_base::app);
    f << "\n0 бiт: " << str[str.length() - 1] << endl << "\nДвійковий код: " << str;
    f.close();
    if (str[str.length() - 1] == '0') {
        ofstream f;

        f.open("outputText.txt", ios_base::app);
        f << "\nКiлькiсть 0: " << counterNull << endl;
        f.close();
    }
    else {
        ofstream g;

        f.open("outputText.txt", ios_base::app);
        f << "\nКiлькiсть 1: " << counterOne << endl;
        f.close();
    }
}

int validationForBinary(){

    int i = 0;
    while (!(cin >> i)) {
        cout << "Введiть число: ";
        cin.clear();
        fflush(stdin);
    }
    while(i < 0 || i == 0 || i > 7483650) {
        if(i < 0 || i == 0 || i > 7483650) {
            cout << "Число повинне бути бiльше 0 та менше 7483650: ";
            cin.clear();
            fflush(stdin);
        }
        i = validationForBinary();
    }
    return i;
}

void checkingFile() {

    ifstream in;
    in.open("inputText.txt");
    if (!(in.is_open())) {
        cout << "Файл не знайдено...";
    }
    else {
        cout << "Файл успiшно вiдкритий" << endl;
    }
}
