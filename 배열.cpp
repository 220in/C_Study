# include<stdio.h>

int main(void){

	// �Է¹��� ���� ����
	int ari_score, sam_score, joy_score;
	// �Է¹ޱ�
	scanf("%d %d %d", &ari_score, &sam_score, &joy_score);
	// ��� ���ϱ�
	float avg = (float)(ari_score + sam_score + joy_score)/3;
	printf("%.2f",avg); // ����ϱ� %.2f => �Ҽ��� �Ʒ� �ι��� �ڸ����� ǥ��, avg�� %�� ǥ��
	return 0; // ������

	// �迭 ���� (���� �Ҵ�)
	int arr[6]; // 6���� ������ �迭�� ����
	// �迭 �ʱ�ȭ (�� �־��ֱ�)
	for (int i = 0; i < 6; i++){
		arr[i] = 10 * (i + 1);
	}

	// ����� ���⿡ �� �־��ֱ�
	int arr2[6] = { 1, 2, 3, 4, 5, 6 };
}