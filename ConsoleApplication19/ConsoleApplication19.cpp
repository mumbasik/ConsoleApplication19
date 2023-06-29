

#include <iostream>
using namespace std;

int main()
{
	//N1!
	const int mass = 4;
	int array[mass];
	int minimum = 0;
	int maximum = 0;
	for (int i = 0; i < 4; i++) {
		cout << "number: \n";
		cin >> array[i];
	}
	for (int i = 0; i < 5; i++) {
		if (array[i] < minimum) {
			minimum = array[i];
		}
		else if (array[i] > maximum) {
			maximum = array[i];
		}
	}
	cout << "Result min: " << minimum << "\n";
	cout << "Result max: \n" << maximum << "\n";
	//N2!
	const int x = 5;
	
	int arr[x];
     int first;
	 cout << "First: \n";
	 cin >> first;
	 int summa;
	 cout << "Summa: \n";
	 cin >> summa;
	int past;	
	cout << "Second: \n";
	cin >> past;
	srand(time(NULL));
	for (int i = first; i < past; i++) {
		arr[i] = first + rand() % (past - first);
	}
	int resu;
	for (int i = first; i < past; i++) {
		if (arr[i] < summa) {
			resu = summa += arr[i];
		}

	}
	
	



	//N3!
	int start;
	int end;
	const int year = 12;
	int min = 0;
	int max = 0;
	int sale[year];
	
	cout << "Start of masiv: (1;12) \n";
	cin >> start;
	cout << "End of masiv (1;12) \n";
	cin >> end;
	

	
	if (start <= 0 || end > 12) {
		cout << "WRONG RANGE \n";
	}
	else {
		for (int i = 0; i < 12; i++) {
			cout << "Sale for months: \n";
			cin >> sale[i];

		}
		for (int i = start; i <= end; i++)
			
			if (sale[i] < min) {
				
				min = sale[i];
			}
			else if (sale[i] > max) {
				max = sale[i];
			}
		
	}
	cout << "Min sale for month" << min << "\n";
	cout << "Max sale for month" << max << "\n";
	//N4!
	
	int summ = 0;
	int y = 0;
	int a = 0;
	int result = 0;
	int ar[8] = { 2,50, -6,90, 2,50, -67,9};
	for (int i = 0; i < mass; i++) {
		if (ar[i] < 0) {
			summ += ar[i];
		}
	}cout << "Result" << summ << "\n";
	for (int i = 0; i < 8; i++) {
		if (ar[i] < y) {
			y = ar[i];
		}
		else if (ar[i] > a) {
			a = ar[i];
		}
		result = y * a;
	} cout << "Result" << result << "\n";
	int q = 1;
	int res = 0;
	for (int i = 0; i < 8; i++) {
		if (ar[i] % 2 == 0) {
			res = q *= ar[i];
			 

		}
	} cout << "Result" << res << "\n";
	int firstneg;
	int secneg;
	int r;
	for (int i = 0; i < 8; i++) {
		if (ar[i] < 0) {
			firstneg = ar[i];
		}
		else if (ar[i] > firstneg && ar[i] < 0) {
			secneg = ar[i];
			r = firstneg + secneg;
		}
	}cout << "Result" << r << "\n";
	
}


