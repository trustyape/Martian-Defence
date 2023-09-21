#include <stdio.h>
#include <string.h>

void processArgument(const char* nname);
void banner();

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <nickname>\n", argv[0]);
        return 1;
    }

    banner();

    char* nickname = argv[1];
    processArgument(nickname);

    return 0;
}

void processArgument(const char* nname) {
    if (!strcmp(nname, "Crash")) {
        printf("                               I got a record! I was 'Zero Cool'! \n");
    } else if (!strcmp(nname, "CerealKiller")) {
        printf("      FYI man, alright. You could sit at home, and do like absolutely nothing, and your name goes through \n");
        printf("      like 17 computers a day. 1984? Yeah right, man. That's a typo. Orwell is here now. He's livin' large. \n");
        printf("      We have no names, man. No names. We are nameless! \n");
    } else if (!strcmp(nname, "Burn")) {
        printf("                               I hope you don't screw like you type. \n");
    } else if (!strcmp(nname, "PhantomPhreak")) {
        printf("      What's up, man? I'm the Phreak. The \"Phantom Phreak\"? The \"King of Nynex\"? I know you play the game.\n");
    } else if (!strcmp(nname, "LordNikon")) {
        printf("      Zero Cool? Crashed fifteen hundred and seven computers in one day? Biggest crash in history, \n");
        printf("      front page New York Times August 10th, 1988. I thought you was black man. YO THIS IS ZERO COOL! \n");
    } else if (!strcmp(nname, "Joey")) {
        printf("              Look, I need a handle, ok? I don't have an identity if I don't have a handle.\n");
    } else if (!strcmp(nname, "martian1337")) {
        printf("                                         HappyBirthdayMartian!\n");
        printf("                                   MD{GDB_Reverse_Engineering_Flag}\n");
    } else {
        printf("                               You not 31337! Bugger off %s\n", nname);
    }
}

void banner(){
printf("                                                                                                     \n");
printf("                                                 ..                                                  \n");
printf("                                              .',,,,'.                                               \n");
printf("                                            .''..  ..''.                                             \n");
printf("                                         ..,'.  ','.  .''..                                          \n");
printf("                                       .',..    .o0Oxl'...''.                                        \n");
printf("                                     .''.      .,d00KXO,   .,'.                                      \n");
printf("                                  .'''. ..   ,dOKKKKOd:.  ....','.                                   \n");
printf("                                .',..  ;k:  'kKKKkl:..,coxd;.  ..,'.                                 \n");
printf("                             ..''.    ,OKOo;;cdOO,  ,xKKKk,       .''..                              \n");
printf("                           .''..      ,OXKKKKkdc'..:OXKK0: .,'      ..,'.                            \n");
printf("                         .''.       .. :OKKKKKXd.,dOKKKKk' c0o.       ..''.                          \n");
printf("                      ..''.         ;o, .o0Oddo,'xXKKKKKkccOXO;          .',..                       \n");
printf("                    .''..           .x0l,cO0l.  .ckOKOlo0KKKKK:            ..,'.                     \n");
printf("                 ..''.              .xXKKKKXKl.   .:k:,kXKKK0l.               .''.                   \n");
printf("               .'''.            .:. ,OKKKK0ddl.    ,c.,0XK0x,.cl.               .'''.                \n");
printf("              .;,.              .ox.;0KKKK0:.'.    .  :dcoOdlkKd.                 .,;.               \n");
printf("              .','.              cKd;oKKKKKOl'       .'. ;OKKKKx.                .','.               \n");
printf("                ..''.            'kKkdkKKxcokkl.        :kKKKKXO,              .''..                 \n");
printf("                   .''..          ;OKKKKKO;...:'       .c0KKKKXx.           ..''.                    \n");
printf("                     ..''.         'oOKXKK0d:,'.        .oKKK0d'          .',..                      \n");
printf("                        .''.         .;ldO0KKKOxl;,.   .:kkdl'          .''.                         \n");
printf("                          .''..          .',,,'.....   .'..          .','.                           \n");
printf("                            ..''.  ;ddddddddddddddddddddddddddddc. .''..                             \n");
printf("                               .',.',,,,,,,,,,,,,,,,,,,,,,,,,,,,,'''.                                \n");
printf("                                 ..'..                        ..''.                                  \n");
printf("                                    .''.                    .',.                                     \n");
printf("                                      .''..              ..''.                                       \n");
printf("                                        .','.          .','.                                         \n");
printf("                                           .''.      .''..                                           \n");
printf("                                             .''...','.                                              \n");
printf("                                               ..''..                                                \n");
printf("                                                                                                     \n");
printf("                               Mess with the best, die like the rest!                                \n");
printf("                                                                                                     \n");
}