#include<stdio.h>

int no = 11;        // Global Variable (Data)

void fun()
{
    int i = 51;     // Local Varibale (Stack)

    printf("Inside main : %d\n",i);     //51
    printf("Inside main : %d\n",no);    //11

}
int main()
{
    int i = 21;

    printf("Inside main : %d\n",i);     //21
    printf("Inside main : %d\n",no);    //11

    fun();

    return 0;
}