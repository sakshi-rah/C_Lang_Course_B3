// 3. Assignment Operators (=,+=,-=,*=,/=,%=)
// mod = 7/4 = 7
//           - 4
//             3
#include<stdio.h>

int main(){
//_______***Assignment Operators***____________
int x;
printf("Enter value of X:");
scanf("%d", &x);

printf("Value of X is %d\n", x);
x+=3;//x=x+3//x=10+3=13
printf("x:%d\n",x);//13
x-=6;//x=x-6//13-6=7
printf("x:%d\n",x);//7
x*=2;//x=x*2
printf("x:%d\n",x);//7*2=14
x/=2;//x=x/2
printf("x:%d\n",x);//14/2=7
x%=4;//x=x%4
printf("x:%d\n",x);//7%4=3

    return 0;
}

