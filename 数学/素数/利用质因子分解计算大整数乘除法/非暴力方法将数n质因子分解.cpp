//���´������������ӷֽ����������˳���
//�����Ӵ洢��factor�У�����ʾ�����ӣ�ֵ��ʾ�������Ӹ���
unordered_map<gg, gg> factor;
void getFactor(gg n, gg arg) {  // argΪ1ʱ��ʾ��n�ڷ����ϣ����˷���argΪ-1��ʾ��n�ڷ�ĸ�ϣ�������
    Eratosthenes(n);            //��ӡn���ڵ�������洢��prime��
    for (gg i : prime) {
        while (n % i == 0) {
            factor[i] += arg;
            n /= i;
        }
        if (n == 1)
            break;
    }
}