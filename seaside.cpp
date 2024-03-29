#include <vector>
#include <iostream>

std::vector<int> seaside(std::vector<int> vec1)
{
	std::vector<int> vec2;
	int max = vec1[0];
	int max_i = 0;
	for(unsigned int i = 1; i != vec1.size(); ++i)
	{
		if(max < vec1[i])
		{
		max = vec1[i];
		max_i = i;
		}
	}
	for(unsigned int i = max_i; i != vec1.size() - 1; ++i)
	{
		if(vec1[i] > vec1[i+1])
		vec2.push_back(i);
	}
		 vec2.push_back(vec1.size() - 1);
		 return vec2;
}
