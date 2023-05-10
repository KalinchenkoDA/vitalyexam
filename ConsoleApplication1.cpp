#include "Header.h"

#ifdef deb


//    1

float sr() {

	float a, b, c, d;
	cin >> a >> b >> c >> d;

	return (a + b + c + d) / 4;
}
											//    2  

void c(){
	for (int i = 0; i < 40;)
	{
		i += 2;
		cout << i << " ";
	}
}
											//    3

void kv(int a) {

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}
											//    4  

void r(int a) {

	int counter = 0;
	while (a / 10 != 0) {

		a = a / 10;
		counter++;
	}
	cout << counter;
}
											//    5

void initArr(int arr[],int a,int b,int size) {

	if (a > b)swap(a, b);

	

	for (int i = 0; i < size; i++)
	{
		arr[i] = ran(a,b);
			cout << arr[i] << " ";
		
	}

}
											//    6
void foo(int**&arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 =_msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr[i][j] = ran(10, 99);
		}
	}
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int* ptr1 = new int[size1];
	int summ;
	for (int i = 0; i < size1; i++)
	{
		summ = 0;
		for (int j = 0; j < size2; j++)
		{
			summ += arr[i][j];
		}
		ptr1[i] = summ;
	}
	int max = ptr1[0];
	int counter = 0;
	for (int i = 1; i < size1; i++)
	{
		if (max < ptr1[i]) {
			max = ptr1[i];
			counter = i;
		}
	}
	cout << endl <<  endl << endl;
	cout << counter;
}
											//    7   

void copyyy(int **&arr1, int**& arr2) {
	int size1 = _msize(arr1) / sizeof(arr1[0]);
	int size2 = _msize(arr1[0]) / sizeof(arr1[0][0]);

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr1[i][j] = ran(1, 9);
		}
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr2[i][j] = arr1[i][j];
		}
	}

	cout << endl << endl << endl;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}



}

											//    8

void foo1(int *&arr,int b) {

	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";

	}
	int* buf = new int[size - 1];
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (i = b)continue;
		else buf[counter++] = arr[i];
		
		
	}

	delete[]arr;
	arr = buf;

	cout << endl << endl;

	for (int i = 0; i < size; i++)
	{

		cout << arr[i] << " ";

	}

}
#endif 
											//		9

void foo777(int**arr1,int*arr2,int b) {

	int size1 = _msize(arr1) / sizeof(arr1[0]);
	int size2 = _msize(arr1[0]) / sizeof(arr1[0][0]);

	int size3 = _msize(arr2) / sizeof(arr2[0]);


	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr1[i][j] = ran(10, 99);
		}
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	en;
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = ran(1, 9);
		cout << arr2[i] << " ";
	}


	int** buf = new int*[size1 + 1];
	for (int i = 0; i < size1+1; i++)
	{
		buf[i] = new int[size2];
	}

	for (int i = 0; i <=b; i++)
	{  
		if (i == b)for (int i = 0; i < size2; i++)
		{
			buf[i][b]=arr
		}

		for (int j = 0; j < size2; j++)
		{
			buf[i][j] = arr1[i][j];
		}
	}

}





int main()
{
	srand(time(NULL));






											//    5
	/*int** ptr = new int*[6];
	for (int i = 0; i < 6; i++)
	{
		ptr[i] = new int[9];
	}*/

	
											//	  7



	//int** arr1 = new int* [3];
	//for (int i = 0; i < 3; i++)
	//{
	//	arr1[i] = new int [6];
	//}

	//int** arr2 = new int* [3];
	//for (int i = 0; i < 3; i++)
	//{
	//	arr2[i] = new int [6];
	//}


	//copyyy(arr1, arr2);
	
	
											//		8


	/*int* ptr1 = new int[9];
	
	foo1(ptr1, 4);*/

											//       9


		
	int** arr1 = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr1[i] = new int [6];
	}

	int* arr2 = new int[3];
	
	foo777(arr1, arr2,2);


	
}

