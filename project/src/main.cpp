#include <iostream>
#include <vector>

int main()
{
    /* Vector empty declaration */
    std::vector<int> vector1;
    std::vector<int> vector2;
    std::vector<std::vector<int>> vector_2d;

    /* Add values to vector 1 */
    vector1.push_back(10);
    vector1.push_back(20);
    /* Print vector 1 data */
    std::cout << "Vector1 contains: " << vector1.at(0) << " and " << vector1.at(1) << std::endl;
    /* Add values to vector 2 */
    vector2.push_back(100);
    vector2.push_back(200);
    /* Print vector2 data */
    std::cout << "Vector2 contains: " << vector2.at(0) << " and " << vector2.at(1) << std::endl;
    /* Add vectors 1 and 2 to a 2d vector */
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    /* Print the result vector data */
    std::cout << "Vector_2d contains in the first file: " << vector_2d.at(0).at(0) << "and " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector_2d contains in the second file: " << vector_2d.at(1).at(0) << "and " << vector_2d.at(1).at(1) << std::endl;
    /* Update vector1 0 data*/
    vector1.at(0) = 1000;
    /* Print vector2d data (you´ll see thant vector1 data has not been updated in the 2d vector) */
    std::cout << "Vector_2d contains now in the first file: " << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector_2d contains now in the second file: " << vector_2d.at(1).at(0) << " and " << vector_2d.at(1).at(1) << std::endl;
    /* Print vector1 current data, here you´ll see that it has been updated correctly */
    std::cout << "Meanwhile, vector1 contains now: " << vector1.at(0) << " and " << vector1.at(1) << std::endl;

    return 0;
}