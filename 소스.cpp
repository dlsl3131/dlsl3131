#include<stdio.h>

int main() {
	char name[10];			// 이름
	char number[10];        // 학번
	char subject[10];       // 과목
	long score[4] = { 0 };	//국어 영어, 수학, 총점
	float avg = 0.f;

	int i;

	// input
	scanf("%s", &name[0]);	    // 이름
	scanf("%s", &number[0]);	    // 학번
	scanf("%s", &subject[0]);	// 과목

	//점수를 4개를 받는다.
	for (i = 0; i < 3; i++) {
		scanf("%d", &score[i])
			;
		//총점
		score[3] += score[i];
	}
	////연산
	//score[3] = score[0] + score[1] + score[2];

	//평균
	avg = score[3] / 3.f;


	// 출력
	// c 언어에서는 항상 주소값이 필요하다.
	// 마지막에 항상 null 문자가 들어간다. 그래서 null이 인식이 되면 자동으로 끊긴다.
	printf("%s\t", name);
    //평균 출력
	printf("%f\n", avg);
	printf("%s\t", number);
}