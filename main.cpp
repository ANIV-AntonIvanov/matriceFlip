#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int const n = 3;
	int img[n][n] =
	{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
	
    for (int i=0; i<n; ++i) 
	{
        for (int j=0; j<n; ++j)
        {
	        cout << img[i][j] << " ";
	    } 
        cout << endl;
    }
    /////////////////////////////////////////////////
    cout << " " << endl;
    /////////////////////////////////////////////////
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			swap(img[0][0], img[2][0]);
			swap(img[0][1], img[2][1]);
			swap(img[0][2], img[2][2]);
		}
	}
	
	for(int i = 0;i < n; i++)
	{
		for(int j = 0;j < n; j++)
		{
			cout << img[j][i] << " ";
		}
		cout << endl;
	}

    system("pause");
	return 0;
}
