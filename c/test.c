#include <stdio.h>
#include <windows.h>
int x=1;
int y=2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
//    Sleep(3000);
    printf("result 为：%d\n",result);

    printf("这里暂停三秒以便于查看输出结果。");
//    Sleep(3000);
    return 0;
}