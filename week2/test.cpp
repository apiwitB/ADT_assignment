#include <iostream>
using namespace std;

int main() 
{
	int a[8]{ 10,20,30,40,50 };
	int newNumber, i, j, size, index;
	size = 5;
	newNumber = 35;

	//print arraylist a[]
	for (i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}cout << endl;

	//��Ǩ�ͺ newnumber ��� �դ�ҹ��¡����Ţ�ӴѺ�˹� arraylist
	//������繤�� index ���
	for (i = 0; i < size; i++)
	{
		if (newNumber < a[i])
		{
			index = i;
			break;
		}
	}cout <<"Index = " << index << endl;

	// ����͹���˹觨ҡ ��� �ҡ���� index � 1 ��ͧ ������ҡ���˹觷���ҡ�ش��͹����
	// ��˹� i ����� size -1 ����� �����Ƿ���ҡ�ش ��������͹䢶�� i >= index
	for (i = size - 1; i >= index; i--)
	{
		a[i + 1] = a[i];
		size++;
	}
	//�á�Ţŧ�
	a[index] = newNumber;

	//print arraylist a[]
	for (i = 0; i < 6; i++)
	{
		cout << a[i]<<" ";
	}
	


}
