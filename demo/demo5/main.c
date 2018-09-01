#include <stdio.h>

//自定义直接插入排序方法
void insort(int s[], int n){
    int i,j;
    for(i=2;i <= n;i++){
        s[0] = s[i];//给监视哨赋值
        j = i - 1;
        while (s[0] < s[j]){
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = s[0];
        for(int k=1;k<=n;k++){
            printf("%5d",s[k]);
        }
        printf("\n");
    }
}

int main() {
    int a[11],i;
    printf("请输入10个数据:\n");
    for(i=1;i<=10;i++){
        scanf("%d",&a[i]);
    }
    printf("原始顺序:\n");
    for(i=1;i<11;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    printf("过程ddcc\n");
    insort(a,10);
    printf("\n插入数据排序后顺序:\n");
    for(i=1;i<11;i++){
        printf("%5d",a[i]);
    }
    return 0;
}