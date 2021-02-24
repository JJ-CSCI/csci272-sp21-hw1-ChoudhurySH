#include "catch.hpp"
#include "binomial.h"

Binomial::Binomial (double a,int c, double b,int d){
  coef1= a;
  coef2= b;
  if(c < 1){c=1;} 
  if(d <1){d=1;}
  expo1= c; 
  expo2= d;
}

double Binomial::GetCoefficient(int index)const{
  if(index == 1){
    return coef1;
  }
  if(index == 2){
    return coef2;
  }
  else 
    return -1;
}

int Binomial::GetPower(int index)const{
  if(index == 1){
    return expo1;
  }
  if(index == 2){
    return expo2;
  }
  else 
    return -1;
  
}

int Binomial::SetPower(int index, int expovalue){
  if(expovalue <=0 ){
    expovalue = 1;
  }
  if(index == 1){
    expo1 = expovalue;
    return 0;
  }
  if(index == 2 ){
    expo2 = expovalue;
    return 0;
  }
  else return -1;
  
}

int Binomial::Add(const Binomial a){
  
  if(a.GetPower(1)== expo1 && a.GetPower(2) == expo2){
    coef1 = coef1 + a.GetCoefficient(1);
    coef2 = coef2 + a.GetCoefficient(2);
    return 0;
  }
  if(a.GetPower(2) == expo1 && a.GetPower(1) == expo2 ){
    coef1 = coef1 + a.GetCoefficient(2);
    coef2 = coef2 + a.GetCoefficient(1);
    return 0;
  }
  else  
    return -1;
 
}

void Binomial::Multiply(double parameter){
   coef1= coef1*parameter;
   coef2 = coef2*parameter;
}

void Binomial::Multiply(double fparameter, int iparameter){
   coef1 = coef1 * fparameter;
   coef2 = coef2 * fparameter;
   expo1 = expo1 + iparameter;
   expo2 = expo2 + iparameter;
}