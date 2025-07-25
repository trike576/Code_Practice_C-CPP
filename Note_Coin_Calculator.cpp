#include<iostream>
using namespace std;

int main() {
   int amount;
   int fiveHundred = 0, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
   cin>>amount;
   while(amount!=0){
    if(amount>=500){
        fiveHundred=amount/500;
        amount%=500;
    }
    else if(amount>=100){
        hundred=amount/100;
        amount%=100;
    }
    else if(amount>=50){
        fifty=amount/50;
        amount%=50;
    }
    else if(amount>=20){
        twenty=amount/20;
        amount%=20;
    }
    else if(amount>=10){
        ten=amount/10;
        amount%=10;
    }
    else if(amount>=5){
        five=amount/5;
        amount%=5;
    }
    else{
        one =amount/1;
        amount%=1;
    }
   }
  if (fiveHundred > 0)
    cout << fiveHundred << " notes of five hundred" << endl;

if (hundred > 0)
    cout << hundred << " notes of hundred" << endl;

if (fifty > 0)
    cout << fifty << " notes of fifty" << endl;

if (twenty > 0)
    cout << twenty << " notes of twenty" << endl;

if (ten > 0)
    cout << ten << " notes of ten" << endl;

if (five > 0)
    cout << five << " notes of five" << endl;

if (two > 0)
    cout << two << " coins of two" << endl;

if (one > 0)
    cout << one << " coins of one" << endl;
    return 0;
}
