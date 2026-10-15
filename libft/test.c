#include <stdio.h>
#include <string.h>

int main() {
    char buffer[30] = "ABCDEFGHIJKLMNOPQ";
    
    printf("%s\n", buffer);
    size_t bytes_to_move = strlen(buffer + 7) + 1;
    memcpy(buffer + 7, buffer, bytes_to_move);
    
    printf("%s\n", buffer); 
    
    return 0;
}