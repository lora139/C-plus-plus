#include <iostream>
//Да се напише програма, която при зададено число от клавиатурата k (k –естествено число <=27),
// извежда на екрана всички естествени трицифрени числа,
// чиято сума от цифрите е равна на k.
//?
using namespace std;
int main(){
    int sum,k,i;

    cout<<"k= ";
    cin>>k;

    for(int i=100;i<1000;i++){
        sum=i%10;
        sum+=i/10%10;
        sum+=i/100;

        if(sum==k)
            cout<<i;

    }
    return 0;
}
