#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void executeCommand(const char *command) {
    system(command);
}

void openWebBrowser() {
    for(;;){
        const char *browserCommand = "xdg-open https://allaboutmeiamlinux.github.io/img/";
        system(browserCommand);
    }
}

void github() {
    const char *browserCommand = "xdg-open https://github.com/Allaboutmeiamlinux";
    system(browserCommand);
}

void instagram() {
    const char *browserCommand = "xdg-open https://www.instagram.com/all_4bout_me_?igsh=MWR5cTk3MTYxdThpOA==";
    system(browserCommand);
}

void linkedin() {
    const char *browserCommand = "xdg-open https://www.linkedin.com";
    system(browserCommand);
}

void error(){
    executeCommand("clear");
    int a;

    while (1)
    {
        printf("\n\033[31m1.Are you sure!\033[0m");
        printf("\n\033[0;32m2.Back To Menu\033[0m");
        printf("\nEnter your chioce:-");
        scanf("%d",&a);

        switch (a)
        {
        case 1:
            openWebBrowser();
            executeCommand("clear");
            break;

        case 2:
            executeCommand("clear");
            sleep(1);
            return;

        default:
            printf("Sorry is Invalid choice\n");
            sleep(1);
            executeCommand("clear");
            break;
        }
    }
    
}

void contact() {
    int Choice;

    while (1) {
        printf("\033[0;35m\t 𝑪𝑶𝑵𝑻𝑨𝑪𝑻 𝑰𝑵𝑭𝑶\033[0m");
        printf("\n\033[0;34m1.Git Hub\033[0m");
        printf("\n\033[0;34m2.Instagram\033[0m");
        printf("\n\033[0;34m3.Linkedin\033[0m");
        printf("\n\033[0;34m4.Back to menu\033[0m");
        printf("\nEnter your choice:-");
        scanf("%d", &Choice);

        switch (Choice) {
            case 1:
                github();
                break;

            case 2:
                instagram();
                break;

            case 3:
                linkedin();
                break;

            case 4:
                executeCommand("clear");
                return;

            default:
                printf("Sorry is Invalid choice\n");
                sleep(1);
                executeCommand("clear");
                break;
        }
    }
}

int main() {
    executeCommand("clear");
    int x;

    while (1) {
        printf("\033[0;35m\tLAST SEEN 😈\033[0m\n");
        printf("Notice: The tool uses under 4GB RAM");
        printf("\n\n\033[31m1.System Crasher For Linux🥵\033[0m");
        printf("\n\033[0;34m2.Contact info\033[0m");
        printf("\n\033[0;32m3.Exit\033[0m");
        printf("\n\nEnter Your Choice:-");
        scanf("%d", &x);

        switch (x) {
            case 1:
                error();
                executeCommand("clear");
                break;

            case 2:
                executeCommand("clear");
                contact();
                break;

            case 3:
                executeCommand("clear");
                printf("\tBye Bye...👻\n");
                exit(0);

            default:
                printf("Sorry is Invalid choice\n");
                executeCommand("clear");
                break;
        }
    }

    return 0;
}
