#include <stdio.h>
#include <time.h>


int convert_num_to_string_with_GMT_zero() {
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s\n",ctime(&biggest));
    return 0;
}

int convert_num_to_string_with_asctime(){
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s\n", asctime(gmtime(&biggest)));
    return 0;
}


int main(){
    convert_num_to_string_with_GMT_zero();
    convert_num_to_string_with_asctime();
    return 0;
}