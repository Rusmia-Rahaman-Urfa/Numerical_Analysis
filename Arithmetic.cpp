
//Computer arithmetic
#include <bits/stdc++.h>
using namespace std;
int main() {
 //common part (intput)
 double num1 = 0.876543E-5;
 double num2 = 0.200000E-3;
 cout<<fixed<<setprecision(6);
 //-------- Addtion ------//
 double sum = num1 + num2;
 int count=0;
 while(sum>=1){
 sum/=10;
 count++;
 }
 while(sum<0.1){
 sum*=10;
 count--;
 }
 cout<<"Addtion = "<<sum<<"E"<<count<<endl;

 //---------Substraction--------//
 /*double substraction = max(num1,num2)-min(num1,num2);
 count=0;
 while(substraction>=1){
 substraction/=10;
 count++;
 }
 while(substraction<0.1){
 substraction*=10;
 count--;
 }
 cout<<"substraction = "<<substraction<<"E"<<count<<endl;

 //---------Multiplication--------//
 double multiplication= num1*num2;
 count=0;
 while(multiplication>=1){
 multiplication/=10;
 count++;
 }
 while(multiplication<0.1){
 multiplication*=10;
 count--;
 }
 cout<<"multiplication = "<<multiplication<<"E"<<count<<endl;

 //----------Division-----------//
 double division=num1/num2;
 count=0;
 while(division>=1){
 division/=10;
 count++;
 }
 while(division<0.1){
 division*=10;
 count--;
 }
 cout<<"Division = "<<division<<"E"<<count<<endl;*/
 return 0;
}
