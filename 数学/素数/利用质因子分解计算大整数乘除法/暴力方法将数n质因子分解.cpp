//���´������������ӷֽ����������˳���
//�����Ӵ洢��factor�У�����ʾ�����ӣ�ֵ��ʾ�������Ӹ���
unordered_map<gg, gg> factor;
void getFactor(gg n, gg arg) {  // argΪ1ʱ��ʾ��n�ڷ����ϣ����˷���argΪ-1��ʾ��n�ڷ�ĸ�ϣ�������
    for (gg i = 2; i <= (gg)sqrt(n * 1.0); ++i) {
        gg j = 0;
        for (; n % i == 0; n /= i)
            ++j;
        if (j != 0)
            factor[i] += arg * j;
        if (n == 1)
            break;
    }
    if (n > 1)
        factor[n] += arg;
}