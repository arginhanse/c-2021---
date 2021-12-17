/*
本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。
输入格式：

输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。

输出格式：
按照以下格式输出：
average = 平均成绩
max = 最高成绩
min = 最低成绩
结果均保留两位小数。

输入样例：
3
85 90 95

输出样例：
average = 90.00
max = 95.00
min = 85.00


*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    float *p,sum=0,max=0,min=100,avg=0;
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    if (p==NULL) return 0;
    for (int i=0;i<n;i++) {
        scanf("%f",p+i);
        sum=sum + *(p+i);
        if (max<*(p+i)) max = *(p+i);
        if (min>*(p+i)) min = *(p+i);
    }
    avg = sum/n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f",avg,max,min);
    free(p);
    return 0;
}
