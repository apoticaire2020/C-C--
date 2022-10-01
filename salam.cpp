#include<iostream>
using namespace std;

int pgcd (int a , int b){
   
   do
   {
    if (a>b)
    {
        a=a-b;
    }
    else{
        b=b-a;
    }
    
   } while (a!=b);
  
   return a;
}
int pgcd_recursif(int a, int b){
    if (a%b==0)
    {
        return b;
    }else{
        return pgcd_recursif(b , a%b);
    }
    return b;
    
}
int main(){
 
cout<<"pgcd = "<<endl;
cout<< pgcd_recursif(13,25);
    return 0;
}