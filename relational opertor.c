#include <stdio.h>
#include<conio.h>
void main() {
    int a_mani,b_mani,c_mani;
    
    printf("Enter a value of A:");
    scanf("%d",&a_mani);
    printf("Enter a value of B:");
    scanf("%d",&b_mani);
    printf("Enter a value of C:");
    scanf("%d",&c_mani);
    int a1=(a_mani<b_mani);
    int a2=(c_mani>a_mani);
    int a3=(a_mani==b_mani);
    int a4=(a_mani>=c_mani);
    int a5=(a_mani<=b_mani);
    printf("%d\n%d\n%d\n%d\n%d",a1,a2,a3,a4,a5);
    

    
    
    getch();
}