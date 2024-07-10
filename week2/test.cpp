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

	//ตรวจสอบ newnumber ว่า มีค่าน้อยกว่าเลขลำดับไหนใน arraylist
	//และเก็บเป็นค่า index ไว้
	for (i = 0; i < size; i++)
	{
		if (newNumber < a[i])
		{
			index = i;
			break;
		}
	}cout <<"Index = " << index << endl;

	// เลื่อนตำแหน่งจาก ค่า มากกว่า index ไป 1 ช่อง เริ่มจากตำแหน่งที่มากสุดก่อนเพราะ
	// กำหนด i ให้คือ size -1 ทำให้ จะได้ตัวที่มากสุด และเช็กเงื่อนไขถ้า i >= index
	for (i = size - 1; i >= index; i--)
	{
		a[i + 1] = a[i];
		size++;
	}
	//แทรกเลขลงไป
	a[index] = newNumber;

	//print arraylist a[]
	for (i = 0; i < 6; i++)
	{
		cout << a[i]<<" ";
	}
	


}
