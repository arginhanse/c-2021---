/*
为学生歌唱比赛设计一个评分系统
评分规则如下：共有n名评委给分（0~100分），要求去掉一个最高分，去掉一个最低分，剩余成绩的平均分为最终得分。
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
输入一个正整数n(3≤n≤10)，表示有n个评委，输入n个成绩，输出最终得分，结果保留小数点后两位。

例：括号内是说明
输入样例:
1 (repeat=1)
5 (n=5)
90 85 86 91 88

输出样例:
score:88.00
*/

#include <stdio.h>

int main() {
    int repeat,n;
    int max,min,sum=0,a;
    float score;
    
    scanf("%d\n",&repeat);
    
    for (int i=0;i<repeat;i++) {
        scanf ("%d",&n);
        sum = 0;
        for (int j=0;j<n;j++) {
            scanf("%d",&a);
            if (j==0) min=max=a;
            if (min > a) min = a;
            if (max < a) max = a;
            sum = sum +a;
        }
        score=(sum-min-max)/(n-2);
        printf("score:%.2f\n",score);
    }
}
