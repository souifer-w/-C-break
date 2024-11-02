//using namespace std;
//int main()
//	for (int i = 1; i <= 10; i++)
//	{
///		cout << i << endl;
//		if (i == 4)
//	}
//}

#include <iostream>
using namespace std;
int main() {
    int n;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n < 0)
            break;
        cout << n << '\n';
    }
    return 0;
}