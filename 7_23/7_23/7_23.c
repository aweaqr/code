#define _CRT_SECURE_NO_DEPRECATE


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//#include<stdio.h>
//#include<stdlib.h>
//
//void panbie(int A, int B, int C, int D, int E)
//{
//	for (A = 1; A <= 5; ++A)
//	{
//		for (B = 1; B <= 5; ++B)
//		{
//			for (C = 1; C <= 5; ++C)
//			{
//				for (D = 1; D <= 5; ++D)
//				{
//					for (E = 1; E <= 5; ++E)
//					{
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1)
//						{
//							if (A*B*C*D*E == 120)
//							{
//								printf("A�ǵ�%d��\n", A);
//								printf("B�ǵ�%d��\n", B);
//								printf("C�ǵ�%d��\n", C);
//								printf("D�ǵ�%d��\n", D);
//								printf("E�ǵ�%d��\n", E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	panbie(A, B, C, D, E);
//
//	system("pause");
//	return 0;
//}


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include <stdio.h> 
//int main()
//{	
//	char killer;	
//	for(killer='A'; killer<='D'; killer++)
//		{		
//		if (((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D'))==3)  	
//		{			printf("%c������\n",killer);				
//		break;		
//		}	
//	}	return 0;
//}


//����Ļ�ϴ�ӡ�������

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s = 1, h;                    // ��ֵ�͸߶�
	int i, j;                        // ѭ������
	scanf("%d", &h);                 // �������
	printf("1\n");                   // �����һ�� 1
	for (i = 2; i <= h; s = 1, i++)         // ���� i �� 2 �����
	{
		printf("1 ");                // ��һ�� 1
		for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
			//printf("%d ", (s = (i - j) / j * s));
			printf("%d ", (s = (i - j) * s / j));
		printf("1\n");               // ���һ�� 1������
	}
	getchar();                       // ��ͣ�ȴ�
	return 0;
}