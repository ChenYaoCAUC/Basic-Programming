#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}
/* 你的代码将被嵌在这里 */
void CountOff( int n, int m, int out[] ) {
//	count代表已经退出的人数，初始为0
//	c是一个计数器，第一次是c=m-1，因为一开始是1，只需要加2（m-1）就可以到第3个了。
	int count=0,i,c=m-1;
//	数组，你可以试试用int flag[n]
//	这个数组用于标记哪些人已经退出了，退出的标记为1
	for(i=0;i<n;i++) {
//		初始时候都没退出，都是0
		out[i]=0;
	}
//	循环从0开始，i=(i+1)%n就是不要超过n，比如n=11，则i永远在0～10之间
	for(i=0;count!=n;i=(i+1)%n) {
//		如果遇到已经退出的数字就继续循环
		if(out[i]!=0) {
			continue;
		}
//		否则的话可以算，若c=0说明计数器到了（已经过了m个有效的人）
		if(c==0) {
//			设置out数组对应位为退出顺序序号，从1开始所以要+1
			out[i]=count+1;
//			设置该人已经退
//			一般情况，比如0 1 2，2退出之后，需要再加3才能到下一个（3 4 5），5=2+3才可以
			c=m;
//			已经退出的人数加1
			count++;
		}
//		c减小一个，代表经过了一个有效的数，如果遇到已经退出的数，不会执行这句话
//		那样的话在continue就直接跳过了，c不会变
		c--;
	}
}