#include "seaside.cpp"
#include <gtest/gtest.h>
#include <vector>
TEST(SeaSide, Test)
{
    std::vector <int> vec1 = {1,3,2,4};
    std::vector <int> res_vec1 = {3};
    std::vector <int> vec2 = {4,3,2,1};
    std::vector <int> res_vec2 = {0,1,2,3};
    std::vector <int> vec3 = {5,6,3,8,1};
    std::vector <int> res_vec3 = {3,4};

    ASSERT_EQ(res_vec1,seaside(vec1));
    ASSERT_EQ(res_vec2,seaside(vec2));
    ASSERT_EQ(res_vec3,seaside(vec3));
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
