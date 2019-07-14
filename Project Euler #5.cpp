#include <iostream>
#include <array>
#include<ctime>
using namespace std;
int start_s=clock() ;
int main()
{
	int primelist[] = { 2,3,5,7,11,13,17,19 };
	int LCM = 1;
	for (int x = 0; x < sizeof(primelist) / 4; x++) {
		int z = primelist[x];
		int y = 1;
		while (20 > y) {
			y = y * z;
			if (20 > y) {
				LCM = LCM * z;
			}
		}
	}
	cout << LCM << endl;
	int stop_s = clock();
    cout << (stop_s - start_s) / double(CLOCKS_PER_SEC);
	return 0;
}
