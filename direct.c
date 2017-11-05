#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define EMPTY 0

struct director{//포인터 포현이 안되서 그냥 배열로 함 수정 필요
	int serial_number;
	char director[20];//감독 이름
	char sex;//성
	int birth[9];//생일
	char title[3][20];//제목
	struct director *next_director;//다음 항목으로
	//title 링크리스트 필요
};
typedef struct director linklist;

linklist *get_director(){//동적 할당
	linklist *tmp;
	tmp = (linklist*)malloc(sizeof(linklist));
	tmp -> next_director = EMPTY;
	return tmp;
}

void add(linklist **first){//입력하기
	linklist *tmp;
	tmp = *first;
	char director[20];//감독 이름
	char sex;//성
	int birth[9];//생일
	char title[3][20];//제목

	if(*first==NULL){ //처음입력할 때 저장, 입출력은 데이터를 저장한후 따로 할 예정
		*first = get_director();
		printf("director : ");//감독 입력
		fgets((*first)->director, sizeof(director), stdin);
		getchar();
		printf("sex : ");//성별입력
		fgets((*first)->sex, sizeof(sex), stdin);
		getchar();
		printf("birth : ");//생일입력
		fgets((*first)->birth, sizeof(birth), stdin);
		getchar();
		for(int i = 0; i < 3 ; i++){//대표작 입력
			printf("title%d : ", i+1);
			fgets((*first)->title[i], sizeof(title[i]), stdin);
			getchar();
		}
		add(&(*first)->next_director);
	}// 추가 필요사항 : 계속 입력할 것인지 질문
}//문제점 입력이 조금 이상하게 되는 듯 - scanf로 바꾸는 방향으로 연구

int main(){
	int i = 0;
	linklist *first = EMPTY;
	add(&first);
	return 0;
	}
