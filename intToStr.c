/*
 * intToStr.c
 *
 *  Created on: 2018年3月11日
 *      Author: xubov
 */

int intlen(int m);
char itoa(int n);

// 将int 转化为对应的字符串
int intToStr(char a[],int m){
    int length = intlen(m);
    int i;
    for(i = 1; i <= length ; i++){
        a[length - i] = itoa(m % 10);
        m /= 10;
    }
    return length;
}
// 计算整形变量的长度
int intlen(int m){
    int length = 0;
    while (m != 0) {
        length++;
        m /= 10;
    }
    return length;
}
// 将一个数0 - 9 转化为对应的 字符'0' - '9'
char itoa(int n){
	if(n  >= 0 && n <= 9)
	{
		return (n + '0');
	}else
	{
		return -1;
	}
}
