#include<floodfill.h>

int main()
{
    point dimension;
    printf("dimension of the array : \n");
    scan_point(&dimension);
    char **array = get_array(dimension);
    printf("suggest the characters for the array:\n");
    scan_array(dimension , array);
    print(dimension , array);
    point position;
    printf("suggest a position to apply flood fill : \n");
    scan_point(&position);
    printf("suggest a character to fill with : \n");
    char F;
    scanf("%c" , &F);
    flood_fill(array , position , dimension , F , array[position.a][position.b]);
    print(dimension , array);
    return 0;
    
}