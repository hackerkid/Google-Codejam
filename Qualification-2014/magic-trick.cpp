#include <iostream>

using namespace std;

int main()
{

	int a[10][10];
	int b[10][10];
	int x;
	int y;
	int ans;
	int t;
	int count;
	int mark[10];

	cin >> t;

	for (int cases = 1; cases <=t; cases++) {

		cin >> x;
		x--;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cin >> a[i][j];
			}

		}


		cin >> y;
		y--;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cin >> b[i][j];
			}

		}
		count = 0;
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if(a[x][j] == b[y][i]) {
					count++;
					ans = a[x][j];
				}

			}

		}


		if(count == 0) {
			cout << "Case #"<<cases<<": "<<"Volunteer cheated!\n";
			continue;
		}

		if(count == 1) {
			cout << "Case #"<<cases<<": "<<ans << "\n";
			continue;
		}

		
		cout << "Case #"<<cases<<": "<<"Bad magician!\n";


	}


}







