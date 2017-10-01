#include<iostream>

double f(double x){
  return x*x;
}

double bisect(double a, double b, double tol, int maxIters){
  double error = 10.0*tol;
  fa=f(a);
  fb=f(b);
  if(fa*fb>0){
    std::cout<<"Error"<<std::endl;
  }
  int cnt = 0;
  int c; int fc;
  while(error>tol && cnt<maxIters){
    c=0.5*(a+b);
    fc=f(c);
    if(fa*fc)<0){
      b=c;
      fb=fc;
    }else{
      a=c;
      fa=fc;
    }
    error=b-a;
    cnt++;
    }
  return c;
}

int main(){
  int a;
  int b;
  double tol;
  int maxIters;
  cin>>a>>b>>tol>>maxIters;
  cout<<bisect(a,b,tol,maxIters)<<endl;
}
  
