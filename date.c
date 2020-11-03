#include <stdio.h>

int main(void)
{
	int week, day, month, year, x;
		
	printf("Enter date (dd/mm/yy): ");
	scanf("%d/%d/%d", &day, &month, &year);
 
	
    printf("Dated ");  //若不再表现输入数字（即dd/mm/yy等)switch不用再加%d和&week，否则会读出数字 。
	                   //注意算式或是赋值的先后，否则会所求值会算作0 ,且要注意{}的包含在内的式子，不会对接下来的其它算式有影响 如13行内的15行不影响58行。 
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
	printf(" day of ", month);//month接在day of 的后面，用switch表现出来 
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
