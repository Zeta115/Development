#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>



main() {
	class vec3 {
	public:
		int x, y, z;
		vec3() {x = 0, y = 0, z = 0;}
		vec3() { srand(time(NULL)); x = rand ()% 5 * +1; y = rand() % 5 * +1; z = rand() % 5 * +1;}
		vec3(){}

		void Normalize(){
			int module;
			module = sqrt(x ^ 2 + y ^ 2 + z ^ 2);

			x = x / module;
			y = y / module;
			z = z / module;
		}

		void Zero() {

			x = 0;
			y = 0;
			z = 0;
		}

		bool IsZero() {

			if (x == 0 && y == 0 && z == 0){
				return true;
			}
		}
	};
	system("pause");
	return 0;

}
