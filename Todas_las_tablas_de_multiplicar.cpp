#include <iostream>
#include <stdlib.h>
#include <math.h>

	using namespace std;
	
	
	
	
int main()
{
	
	
	for(int i = 1; i<=10; i++ ){
		cout <<"--------------------------------"<< endl;
		cout <<"la tabla del "<< i << endl;
	
	
		for(int m = 0; m <= 10; m++){
			cout << i << " x " << m << "=" << i * m <<endl;
		}
	}
	system("pause");
	
	return 0;
}



