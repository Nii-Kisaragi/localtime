#include<stdio.h>
#include<time.h>
int main()
{
	const char *wday[]={"��","��","��","��","��","��","�y"};
	time_t ct=time(NULL);
	struct tm *lst=localtime(&ct);

	printf("%4d�N%2d��%2d�� (%s) %2d��%2d��%2d�b\n",1900+lst->tm_year,1+lst->tm_mon,lst->tm_mday,wday[lst->tm_wday],lst->tm_hour,lst->tm_min,lst->tm_sec);
	return 0;
}
