#include <stdio.h>

int main(void)
{
	int week, day, month, year, x;
		
	printf("Enter date (dd/mm/yy): ");
	scanf("%d/%d/%d", &day, &month, &year);
 
	
    printf("Dated ");  //�����ٱ����������֣���dd/mm/yy��)switch�����ټ�%d��&week�������������� ��
	                   //ע����ʽ���Ǹ�ֵ���Ⱥ󣬷��������ֵ������0 ,��Ҫע��{}�İ������ڵ�ʽ�ӣ�����Խ�������������ʽ��Ӱ�� ��13���ڵ�15�в�Ӱ��58�С� 
	switch (week) {
	
	if(month < 3) {
	month = month + 12,year = year - 1; 
	}
	
	x = year + year/4 + 20/4 - 2*20 + 26*(month +1)/10 + day - 1;
	week = x % 7;

		case 1: printf("Monday");    break;
		case 2: printf("Tuseday");   break;
		case 3: printf("Wednseday"); break;
		case 4: printf("Turseday");  break;
		case 5: printf("Friday");    break;
		case 6: printf("Saturday");  break;
		case 0: printf("Sunday");    break;
	}
	
	
	printf(", this %d",day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default: printf("th"); break;
	}
	printf(" day of ", month);//month����day of �ĺ��棬��switch���ֳ��� 
	switch (month) {
		case 1: printf("January");   break;
		case 2: printf("February");  break;
		case 3: printf("March");     break;
		case 4: printf("April");     break;
		case 5: printf("May");       break;
		case 6: printf("June");      break;
		case 7: printf("July");      break;
		case 8: printf("August");    break;
		case 9: printf("September"); break;
		case 10: printf("October");  break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
	}
	
	printf(", 20%.2d.\n", year);
	return 0;
}
