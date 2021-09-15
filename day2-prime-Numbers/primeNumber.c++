#include<iostream> 
using namespace std;

 int main()

{
	int n;
	cout << " Enter the number to check";
	cin >> n;

	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			cout << " not prime " << endl;
			return 0;
		}
	}
	cout << "prime" << endl;
	return 0;

}
