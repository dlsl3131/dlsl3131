#include<stdio.h>

int main() {
	char name[10];			// �̸�
	char number[10];        // �й�
	char subject[10];       // ����
	long score[4] = { 0 };	//���� ����, ����, ����
	float avg = 0.f;

	int i;

	// input
	scanf("%s", &name[0]);	    // �̸�
	scanf("%s", &number[0]);	    // �й�
	scanf("%s", &subject[0]);	// ����

	//������ 4���� �޴´�.
	for (i = 0; i < 3; i++) {
		scanf("%d", &score[i])
			;
		//����
		score[3] += score[i];
	}
	////����
	//score[3] = score[0] + score[1] + score[2];

	//���
	avg = score[3] / 3.f;


	// ���
	// c ������ �׻� �ּҰ��� �ʿ��ϴ�.
	// �������� �׻� null ���ڰ� ����. �׷��� null�� �ν��� �Ǹ� �ڵ����� �����.
	printf("%s\t", name);
    //��� ���
	printf("%f\n", avg);
	printf("%s\t", number);
}