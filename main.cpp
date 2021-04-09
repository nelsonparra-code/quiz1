#include <iostream>

using namespace std;

int amountDigits(int);
int pot(int,int);

int main()
{

    int num;
    cin>>num;
    int dig = amountDigits(num), res=0, x;


    for(int i=1;i<=dig;i++){
        float exp = dig-i, base = 10.0;
        if(exp>0) x = int(float(num)/(pot(base,exp)))%10;
        else x = int(num)%10;
        res += pot(x,x);
    }

    cout<<"La suma de los digitos de "<<num<<" es: "<<res<<endl;

    return 0;
}

int amountDigits(int n){
    int count = 0;
    do{
        count += 1;
        n /= 10;
    }while(n!=0);
    return count;
}

int pot(int a,int b)
{
    int r=a;
    for(int i=1;i<=(b-1);i++){
        r*=a;
    }
    return r;
}
