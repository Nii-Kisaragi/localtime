#include<stdio.h>
#include<time.h>
int main()
{
	const char *wday[]={"日","月","火","水","木","金","土"};
	time_t ct=time(NULL);
	struct tm *lst=localtime(&ct);

	printf("%4d年%2d月%2d日 (%s) %2d時%2d分%2d秒\n",1900+lst->tm_year,1+lst->tm_mon,lst->tm_mday,wday[lst->tm_wday],lst->tm_hour,lst->tm_min,lst->tm_sec);
	return 0;
}
