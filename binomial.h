

class Binomial{
  double coef1, coef2;
  int expo1, expo2;

public:

  Binomial(double a = 1.0,int c= 1, double b= 1.0,int d= 1);
  double GetCoefficient(int index)const;
  int GetPower(int index)const;
  int SetPower(int index, int expovalue);
  int Add(const Binomial a) ;
  void Multiply(double parameter);
  void Multiply(double fparameter, int iparameter);
};