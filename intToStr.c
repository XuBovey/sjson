/*
 * intToStr.c
 *
 *  Created on: 2018��3��11��
 *      Author: xubov
 */

int intlen(int m);
char itoa(int n);

// ��int ת��Ϊ��Ӧ���ַ���
int intToStr(char a[],int m){
    int length = intlen(m);
    int i;
    for(i = 1; i <= length ; i++){
        a[length - i] = itoa(m % 10);
        m /= 10;
    }
    return length;
}
// �������α����ĳ���
int intlen(int m){
    int length = 0;
    while (m != 0) {
        length++;
        m /= 10;
    }
    return length;
}
// ��һ����0 - 9 ת��Ϊ��Ӧ�� �ַ�'0' - '9'
char itoa(int n){
	if(n  >= 0 && n <= 9)
	{
		return (n + '0');
	}else
	{
		return -1;
	}
}
