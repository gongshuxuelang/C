#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
class DAFF
{
public:	
	DAFF(int q,int w,int e)
	{
		i = q;
		j = w;
		k = e;
	}
	~DAFF()
	{
		std::cout << "Constructor called." << std::endl;
	}
	void daffodil();
	void show();
private:
	int sum, i, j, k;
	std::vector<int> V1;
};
void DAFF::show()
{
	
	sort(V1.begin(),V1.end());
	for (std::vector<int>::iterator i = V1.begin();i < V1.end();++i)
	{
		std::cout << *i << std::endl;
		
	}
}
void DAFF::daffodil()
{
	for (i = 1; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				sum = pow(i, 3) + pow(j, 3) + pow(k, 3);
				if (100 <= sum && sum <= 999)
				{
					 V1.push_back(sum);					
				}
			}
		}
	}	
}
int main()
{
	DAFF daff(1,1,1);
	daff.daffodil();
	daff.show();
	return 0;
}
