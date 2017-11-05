#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define EMPTY 0

struct director{
	int serial_number;
	char director[20];//감독 이름
	char sex;//성
	int birth[9]//생일
	char title[20];//제목
	struct director *next_director;//다음 항목으로
}

typedef struct director linklist;//링크리스트 선언
linklist *get_director(){//동적 할당
	linklist *tmp;
	tmp = (linklist*)malloc(sizeof(linklist));
	tmp -> link = EMPTY;
	return tmp;
}

void add(linklist **first){//입력하기
	linklist *tmp;
	tmp = *first;
	if(*first==NULL){
		printf("director : ");
		fgets((*first)->director, sizeof(director), stdin);
		printf("sex : ");
		fgets((*first)->sex, sizeof(char), stdin);
		printf("birth : ");
		fgets((*first)->birth, sizeof(birth), stdin)e
		printf("title1 : ) 
		scanf("
	
int main(){
	int a;
	int b;
	a = 10;
	b = 30;
	printf("%d %d", a, b);
return 0;
}
