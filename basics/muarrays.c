//multidimensional arrays - arrays but with many dimensions 
//the general form is multidimensionals array declaration is 
//     type name[size1][size2]....[sizeN];
//     example int foo[1][2][3];
//     or
//     char vowels[1][5] = {
//             {'a','e','i','o','u'}
//         };
//
//   TWO-DIMENSIONAL ARRAY 
//     --- type arrayName [x][y];
//
//   sometimes you don't really need a [x] value because
//   char vowels[][5] = {
//     {{'A', 'E', 'I', 'O', 'U'},
//    {'a', 'e', 'i', 'o', 'u'}
//  };
//
// But, you NEED a [ y ] value!! The compiler may be smart, but it will not know how many integers, characters, floats, whatever you're using you have in the dimensions. Keep that in mind.
//
// INITIALIZIN  init 2-d arrays 
//
// int a[3][4] = {  
//   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
//   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
//   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
//};
//
#include <stdio.h>

int main() {
    int grades[2][5] = {
        {80, 70, 65, 89, 90},
        {85, 80, 80, 82, 87}
    };
    int i, j;
    float average;

    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }
        average /= 5.0;
        printf("The average marks obtained in subject %d is: %.2f\n", i + 1, average);
    }

    return 0;
}
