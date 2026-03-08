#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC; 
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-01", "MR.A", {"user1", "pass1"}},
        {"66-02", "MR.B", {"user2", "pass2"}},
        {"66-03", "MR.C", {"user3", "pass3"}},
        {"66-04", "MR.D", {"user4", "pass4"}},
        {"66-05", "MR.E", {"user5", "pass5"}}
    };
    char inputUser[64], inputPass[64];
    int i, found = 0;

    printf("Enter username: ");
    scanf("%s", inputUser);
    printf("Enter password: ");
    scanf("%s", inputPass);

    for (i = 0; i < 5; i++) {
        if (strcmp(inputUser, cs[i].stdACC.loginname) == 0 && 
            strcmp(inputPass, cs[i].stdACC.password) == 0) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}