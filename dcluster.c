#include <stdlib.h>

int system(const char *command);

int main(int argc, char const *argv[]){
    system("ssh tdg24@login.oit.duke.edu");
    return 0;
}
