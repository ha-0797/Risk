#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <conio.h>
#include <windows.h>
#ifdef _cplusplus_
#include <stdlib>
#else
#include <stdlib.h>
#endif // _cplusplus_
#include <windows.h>

using namespace std;

HANDLE hCon;

enum Color { DARKBLUE =1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELOW, WHITE };

void set_colour(Color c)
{
    if (hCon == NULL)
        hCon = GetStdHandle( STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, c);
}
void trooper(int troops, bool check)
{
    int troops1=0;
    if (troops>9)
    {
        troops1=troops/10;
        troops%=10;
        check=true;
    }
    if(check==true)
    {
        set_colour(PINK);
        cout<<troops1<<troops;
        set_colour(WHITE);
    }
    else
    {
        set_colour(PINK);
        cout<<" "<<troops;
        set_colour(WHITE);
    }
}
void map_generator(int mapping[44][167], int world[][42])
{
    int troops=0;
    for (int i=0; i<44; i++)
    {
        for (int j=0; j<167; j++)
        {

            bool check=false;

         if (mapping[i][j]==300)
         {
            if (i==9 && j==7)
            {
                troops=world[1][0];
                trooper(troops, check);
                j++;

            }
            else if (i==14 && j==16)
            {
                    troops=world[1][1];
                    trooper(troops, check);
                    j++;

            }
            else if (i==24 && j==24)
            {
                    troops=world[1][2];
                    trooper(troops, check);
                    j++;
            }
            else if (i==21 && j==37)
            {
                    troops=world[1][3];
                    trooper(troops, check);
                    j++;

            }
            else if (i==8 && j==54)
            {
                    troops=world[1][4];
                    trooper(troops, check);
                    j++;

            }
            else if (i==9 && j==28)
            {
                    troops=world[1][5];
                    trooper(troops, check);
                    j++;

            }
            else if (i==14 && j==28)
            {
                    troops=world[1][6];
                    trooper(troops, check);
                    j++;

            }
            else if (i==15 && j==42)
            {
                    troops=world[1][7];
                    trooper(troops, check);
                    j++;
            }
            else if (i==17 && j==24)
            {
                    troops=world[1][8];
                    trooper(troops, check);

            }
            else if (i==38 && j==38)
            {
                    troops=world[1][9];
                    trooper(troops, check);

            }
            else if (i==33 && j==42)
            {
                    troops=world[1][10];
                    trooper(troops, check);

            }
            else if (i==33 && j==33)
            {
                    troops=world[1][11];
                    trooper(troops, check);

            }
            else if (i==27 && j==42)
            {
                    troops=world[1][12];
                    trooper(troops, check);

            }
            else if (i==16 && j==71)
            {
                    troops=world[1][13];
                    trooper(troops, check);

            }
            else if (i==8 && j==69)
            {
                    troops=world[1][14];
                    trooper(troops, check);

            }
            else if (i==17 && j==89)
            {
                    troops=world[1][15];
                    trooper(troops, check);

            }
            else if (i==8 && j==90)
            {
                    troops=world[1][16];
                    trooper(troops, check);

            }
            else if (i==20 && j==91)
            {
                    troops=world[1][17];
                    trooper(troops, check);

            }
            else if (i==12 && j==100)
            {
                    troops=world[1][18];
                    trooper(troops, check);

            }
            else if (i==21 && j==65)
            {
                    troops=world[1][19];
                    trooper(troops, check);

            }
            else if (i==36 && j==87)
            {
                    troops=world[1][20];
                    trooper(troops, check);

            }
            else if (i==34 && j==95)
            {
                    troops=world[1][21];
                    trooper(troops, check);

            }
            else if (i==28 && j==95)
            {
                    troops=world[1][22];
                    trooper(troops, check);

            }
            else if (i==40 && j==105)
            {
                    troops=world[1][23];
                    trooper(troops, check);

            }
            else if (i==30 && j==82)
            {
                    troops=world[1][24];
                    trooper(troops, check);

            }
            else if (i==42 && j==90)
            {
                    troops=world[1][25];
                    trooper(troops, check);

            }
            else if (i==17 && j==118)
            {
                    troops=world[1][26];
                    trooper(troops, check);

            }
            else if (i==18 && j==149)
            {
                    troops=world[1][27];
                    trooper(troops, check);

            }
            else if (i==24 && j==130)
            {
                    troops=world[1][28];
                    trooper(troops, check);

            }
            else if (i==9 && j==140)
            {
                    troops=world[1][29];
                    trooper(troops, check);

            }
            else if (i==9 && j==163)
            {
                    troops=world[1][30];
                    trooper(troops, check);

            }
            else if (i==3 && j==158)
            {
                    troops=world[1][31];
                    trooper(troops, check);
            }
            else if (i==23 && j==103)
            {
                    troops=world[1][32];
                    trooper(troops, check);
            }
            else if (i==13 && j==145)
            {
                    troops=world[1][33];
                    trooper(troops, check);
            }
            else if (i==24 && j==149)
            {
                    troops=world[1][34];
                    trooper(troops, check);

            }
            else if (i==8 && j==128)
            {
                    troops=world[1][35];
                    trooper(troops, check);
            }
            else if (i==10 && j==118)
            {
                    troops=world[1][36];
                    trooper(troops, check);
            }
            else if (i==4 && j==142)
            {
                    troops=world[1][37];
                    trooper(troops, check);
            }
            else if (i==41 && j==157)
            {
                    troops=world[1][38];
                    trooper(troops, check);
            }
            else if (i==32 && j==146)
            {
                    troops=world[1][39];
                    trooper(troops, check);
            }
            else if (i==31 && j==165)
            {
                    troops=world[1][40];
                    trooper(troops, check);
            }
            else if (i==42 && j==145)
            {
                    troops=world[1][41];
                    trooper(troops, check);
            }
        }
            else if (mapping[i][j]==-1)
            {
                set_colour(DARKBLUE);
                cout<<"o";
                set_colour(WHITE);
            }

            else if (mapping[i][j]==-2)
            {
                set_colour(DARKBLUE);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==-3)
            {
                set_colour(WHITE);
                cout<<"*";
                set_colour(WHITE);

            }
            else if (mapping[i][j]==0)
            {

                set_colour(RED);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==1)
            {
                set_colour(GREEN);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==2)
            {
                set_colour(TEAL);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==3)
            {
                set_colour(DARKGRAY);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==4)
            {
                set_colour(GRAY);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==5)
            {
                set_colour(BLUE);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==6)
            {
                set_colour(DARKGREEN);
                cout<<".";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==200)
            {
                set_colour(YELOW);
                cout<<"0";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==201)
            {
                set_colour(YELOW);
                cout<<"1";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==202)
            {
                set_colour(YELOW);
                cout<<"2";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==203)
            {
                set_colour(YELOW);
                cout<<"3";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==204)
            {
                set_colour(YELOW);
                cout<<"4";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==205)
            {
                set_colour(YELOW);
                cout<<"5";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==206)
            {
                set_colour(YELOW);
                cout<<"6";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==207)
            {
                set_colour(YELOW);
                cout<<"7";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==208)
            {
                set_colour(YELOW);
                cout<<"8";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==209)
            {
                set_colour(YELOW);
                cout<<"9";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==101)
            {
                set_colour(WHITE);
                cout<<"A";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==102)
            {
                set_colour(WHITE);
                cout<<"B";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==103)
            {
                set_colour(WHITE);
                cout<<"C";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==104)
            {
                set_colour(WHITE);
                cout<<"D";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==105)
            {
                set_colour(WHITE);
                cout<<"E";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==106)
            {
                set_colour(WHITE);
                cout<<"F";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==107)
            {
                set_colour(WHITE);
                cout<<"G";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==108)
            {
                set_colour(WHITE);
                cout<<"H";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==109)
            {
                set_colour(WHITE);
                cout<<"I";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==110)
            {
                set_colour(WHITE);
                cout<<"J";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==111)
            {
                set_colour(WHITE);
                cout<<"K";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==112)
            {
                set_colour(WHITE);
                cout<<"L";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==113)
            {
                set_colour(WHITE);
                cout<<"M";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==114)
            {
                set_colour(WHITE);
                cout<<"N";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==115)
            {
                set_colour(WHITE);
                cout<<"O";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==116)
            {
                set_colour(WHITE);
                cout<<"P";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==117)
            {
                set_colour(WHITE);
                cout<<"Q";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==118)
            {
                set_colour(WHITE);
                cout<<"R";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==119)
            {
                set_colour(WHITE);
                cout<<"S";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==120)
            {
                set_colour(WHITE);
                cout<<"T";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==121)
            {
                set_colour(WHITE);
                cout<<"U";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==122)
            {
                set_colour(WHITE);
                cout<<"V";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==123)
            {
                set_colour(WHITE);
                cout<<"W";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==124)
            {
                set_colour(WHITE);
                cout<<"X";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==125)
            {
                set_colour(WHITE);
                cout<<"Y";
                set_colour(WHITE);
            }
            else if (mapping[i][j]==126)
            {
                set_colour(WHITE);
                cout<<"Z";
                set_colour(WHITE);
            }

        }
        cout<<endl;
    }
}


void maps(int mapping[44][167],int world[][42])
{


    string line[44];
//                 0         1           2        3          4          5        6         7       8          9         10          11        12       13        14       15        16
  //            *123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789*123456789
    line[0] ="                                                                                                                                   ***                        ***         ";
    line[1] ="                                                   ***                                                                          *ppp* *****  ***   **********llAll****    ";
    line[2] ="                                                 ***((****     ***                                                ***       ***ppppp*pppp*r*rrrrr*rrrr*llllllKllllll**    ";
    line[3] ="                                               ***(((((((((**   **                                                *qq*  ***pppppppppppp**37rYAKUTSKr*ll*lllTllxxlll* *    ";
    line[4] ="                                            ***(((((((((((((***(*                                          ********q*  *ppppppppppppppp**rrrrrxxrrr*ll*lAllll***l**       ";
    line[5] ="                                          ***(((((((((((((((((((*                       ***  *****       *]]]]]]]*qq**qq*pp35pSIBERIApppp*rrrr*****lllHlll***    *l*      ";
    line[6] ="                              **           ****(4(GREENLAND(((((*                    *??IA??*]]**     *]]]]]]]]]]*qqqqqqqq*ppppppppppppppp*r*jjjjjj*lCll*         **      ";
    line[7] ="                             **                *((((((((((((((((*                   *??V????*]]]]*  *]]]]]]]]]]]]*qqqqqqqqq*ppppppppp***pp*j29jjjjj*llMl*****     *       ";
    line[8] ="  ********     *      *  *****!****           *****(((xx((((((**     xx          *??DINA *xx?*]]]]*]]]N]]]]]]]]]*q36qURALqqq*pppxxpp*jjj*jIRKUTSKjjjj**lAlll*    *k*      ";
    line[9] ="  **@0@xx******!******!**!!!xx!!!**                *(((((((***     ***|**      *????N??* *??*]]]]]]]I]]]]]]]]]]]*qqqqqqqqqqq*pppppppp*jjjjjjxxjjjj***j*lllKll*  *k*xx     ";
    line[10]="  *ALASKA*5!NORTHWEST!TERRITORY**                  *(((***      *14ICELAND*  *??16??A??* *****]]]]A]]]]]]]]]]]]]]*qqqqxxqqq**pppppppp*************nnn**lll31l*  *kk*      ";
    line[11]="*@**** *@*********************      ***    *         **            *****|*    *****?C???*    *]]R]]]]]]]]]]]]]]]]***qqqqqqqqq*pppppppp*nnnnnnnnnnnnnnnnn*llll*    *N*     ";
    line[12]="*       *@*############*$6$$***    *%%*  *%***                                    *?S?*    *]]K]]]]]xx]]]]]]*****ggggg*qqqqqqqqq*ppp*hh*nn33nMONGOLIAnnnnn*l*     *kA*    ";
    line[13]="          *#1#ALBERTA#*$ONTARIO*** **%%*%*%%%%%**                   ***         ** ***    **]U]]]]]]]]]]]]*gggggggggggggg*qqqqqqqq*hhhhhh*nnnnnnnxxnnnnnn*ll*     *kP*    ";
    line[14]="           *####xx#####*$$$$xx$$$***%%7%QUEBEC%%%**                *TAIN*       **       *]]]]]]]]]]]]]]]]*gggggggggggggggg*******hhhhhhhhhhh*nnnnnnnnnn*h*l**  *30kAk*   ";
    line[15]="          ******************$$**$$$***%%%%xx%%%%%%**                *I/*       *,,********]]]18]]]]]]]]]]]]****g26gAFGHANISTANgg*hhhhhhhhhhhhhhh*******hh*lll*  *kJk*     ";
    line[16]="         *^^^8^WESTERN^^^^^^**..*$$*%%%%%%%%%***                   */R/xx*    *,NORTHERN,,,*]]]]]]]]]*]]]]*   *ggggggggggggggggg*hhhhhhhhhhhhhhhhhhhhhhhhhhh*    *k*      ";
    line[17]="         *^^^^^^^UNITED^xx^^*....***%%%*%%**                     *13/B* **  *,15,EUROPE,,xx,**]]]]]]*  *]]]]*  *ggggggxxgggggg*hhhhhhhhhh27hCHINAhhhhhhhhhhhhh*  *k*      ";
    line[18]="          *^^^^^^^^STATES^^^*.....*.*%*.***                      *** *     *,,,,*,,,,,,*,***<<<*****    *]]]*   *gggggggg***ggg*******hhhhhhhhhhhhhhhxxhhhhhhh*  **       ";
    line[19]="            ****^^^^^^^^^^^*.3.EASTERN....*                            ***N>*,**<*****<<**<<<<<<*      *******   *****g*iiiii*iiiiiiii*********hhhhhhhhhhhhhhh*           ";
    line[20]="             *&&******^^^^*...UNITED....*.*                        *** TER>>E*17<SOUTHERN<<xx<<*******mmmmmmmmm**mmmmm**iiiiiiiiiiiiiiiiiiiiiiii*hh*hhhhhhhhh*            ";
    line[21]="             *&&&&&&&&******..STATES.xx..* *                     xx>>*ES>>P*****<<*** EUROPE<<*mm32mMIDDLEmEASTmmmmmm*iiiiiiiiiiiiiiiiiiiiiiiiiii*ooo*hhhhh*              ";
    line[22]="              **&2&CENTRAL&&***********.*                         *19W>>O*      *<<* *<<<<<<* ****mmmmmmmmmmmmm*mmmm* *iiiiiiii28iINDIAiiiiiiii*oooooooo****              ";
    line[23]="                **&AMERICA*            **                          *>EUR>*      *<**   *<<**      *mmmmxxmmmm*  ***    *iiiiiiiiiiiiiiiiiii*****o34oSIAMooo*              ";
    line[24]="                  ***&&&xx&**                                        ************  *   **        *mmmmmmmmmm***        **iiiiiiiiixxiiii*       *ooooxxooooo*             ";
    line[25]="                       ***&&**    ****                                   *eeeeeeeeee*              *mmmmmmmmmmmmm*         * *iiiiiiiiii*           *oo*ooooo*            ";
    line[26]="                           **&&*++12+++++**                           *eeeeeeeeeeeeeee************  *mmmmmmmmmmm*             * **iiiii*            *o* *oo*              ";
    line[27]="                             *+VENEZUELA++xx++***                   *eeeeeeeeeeeeeeee*ccccccccccc*    *mmmmmmm*                  *iiiii*             *o* *                ";
    line[28]="                           *+++++++********-------***               *eeeeeeeeeeeeeee*c22cEGYPTcxxc*    *mmmm*                     *iii*               *                   ";
    line[29]="                          ****+***--------------------*--*          *ee24eNORTHeeeeeee*ccc*********     **                         *ii*                **    *** 40       ";
    line[30]="                         *=11=*--------------------------*         *eeeeeAFRICAeeexxeeeee*bbbbbbbbbb******                           *  *   *39  *****u*    *vNEW***      ";
    line[31]="                         *==P==*-----10-BRAZIL----------*           *eeeeeeeeeeeeeeeeeeee*bb21bEASTbbbbb*                               **  *u*INDONESIA**   *GUINEA*xx   ";
    line[32]="                          *==E=***---------------------*             *eeeeeeeeeeeeeeeee*aa*bbbAFRICAbb*                                      *uuu*xx  *u*      *vvvv*     ";
    line[33]="                            *==R=xx*------xx---------*                *eeeeeeeeeeee***aaaaa***bbbbbbb*                                        *uu*u*   **         ***     ";
    line[34]="                               *=U===*-------------*                    ****eeeeee*aaa20aaaa*bbxxbb*                                           *u*                        ";
    line[35]="                                ***)A))*---------*                            **e***aCONGOaa*bbbbb*                                             *          ****    *      ";
    line[36]="                                *)9)R)))*-------*                              ***aaaaaxxaa*bbbb*                                                   *****tttttt***tt*     ";
    line[37]="    COLOUR INDEX                *)))G)))))*---*                                    ****aaaaa*bbb*      *                                      *ssssss*ttttt38tttttttt*    ";
    line[38]="                                 *))I)xx)))*                                        *fff******* b*   *23d*                                *ssss41ssss*tttEASTERNtttttt*   ";
    line[39]="    INFANTRY PINK                *))N))))*                                          *fffff25fffff*   *MAD*                                *ssWESTERNss*tttAUSTRALIAttt*   ";
    line[40]="    COUNTRY CODE YELLOW          *))T)))*                                           *fffSOUTHff*    *AG*xx                                *sAUSTRALIAs****ttttttttt*      ";
    line[41]="                                 *))I)))*                                            *ffAFRICAf*   *ASCd*                                 *ssssssssssssss*tttxxttt*       ";
    line[42]="                                  *)N))*                                              *fffxxff*    *ARd*                                  *ssssssxxssss***tttttt*         ";
    line[43]="                                    *)A)*                                              *ffffff*    **                                      *********      *******         ";

    for (int i=0; i<44; i++)
    {
        for (int j=0; j<167; j++)
        {
            string a;
            a=line[i][j];
            if (a==" ")
            {
                mapping[i][j]=-2;
            }
            else if (a=="*")
            {
                mapping[i][j]=-3;
            }
            else if (a=="A")
            {
                mapping[i][j]=101;
            }
            else if (a=="B" )
            {
                mapping[i][j]=102;
            }
            else if (a=="C")
            {
                mapping[i][j]=103;
            }
            else if (a=="D")
            {
                mapping[i][j]=104;
            }
            else if (a=="E")
            {
                mapping[i][j]=105;
            }
            else if (a=="F")
            {
                mapping[i][j]=106;
            }
            else if (a=="G")
            {
                mapping[i][j]=107;
            }
            else if (a=="H")
            {
                mapping[i][j]=108;
            }
            else if (a=="I")
            {
                mapping[i][j]=109;
            }
            else if (a=="J")
            {
                mapping[i][j]=110;
            }
            else if (a=="K")
            {
                mapping[i][j]=111;
            }
            else if (a=="L")
            {
                mapping[i][j]=112;
            }
            else if (a=="M")
            {
                mapping[i][j]=113;
            }
            else if (a=="N")
            {
                mapping[i][j]=114;
            }
            else if (a=="O")
            {
                mapping[i][j]=115;
            }
            else if (a=="P")
            {
                mapping[i][j]=116;
            }
            else if (a=="Q")
            {
                mapping[i][j]=117;
            }
            else if (a=="R")
            {
                mapping[i][j]=118;
            }
            else if (a=="S")
            {
                mapping[i][j]=119;
            }
            else if (a=="T")
            {
                mapping[i][j]=120;
            }
            else if (a=="U")
            {
                mapping[i][j]=121;
            }
            else if (a=="V")
            {
                mapping[i][j]=122;
            }
            else if (a=="W")
            {
                mapping[i][j]=123;
            }
            else if (a=="X")
            {
                mapping[i][j]=124;
            }
            else if (a=="Y")
            {
                mapping[i][j]=125;
            }
            else if (a=="Z")
            {
                mapping[i][j]=126;
            }
            else if (a=="@")
            {
                mapping[i][j]=world[0][0];
            }
            else if (a=="#")
            {
                mapping[i][j]=world[0][1];
            }
            else if (a=="&")
            {
                mapping[i][j]=world[0][2];
            }
            else if (a==".")
            {
                mapping[i][j]=world[0][3];
            }
            else if (a=="(")
            {
                mapping[i][j]=world[0][4];
            }
            else if (a=="!")
            {
                mapping[i][j]=world[0][5];
            }
            else if (a=="$")
            {
                mapping[i][j]=world[0][6];
            }
            else if (a=="%")
            {
                mapping[i][j]=world[0][7];
            }
            else if (a=="^")
            {
                mapping[i][j]=world[0][8];
            }
            else if (a==")")
            {
                mapping[i][j]=world[0][9];
            }
            else if (a=="-")
            {
                mapping[i][j]=world[0][10];
            }
            else if (a=="=")
            {
                mapping[i][j]=world[0][11];
            }
            else if (a=="+")
            {
                mapping[i][j]=world[0][12];
            }
            else if (a=="|")
            {
                mapping[i][j]=world[0][14];
            }
            else if (a=="/")
            {
                mapping[i][j]=world[0][13];
            }
            else if (a==",")
            {
                mapping[i][j]=world[0][15];
            }
            else if (a=="?")
            {
                mapping[i][j]=world[0][16];
            }
            else if (a=="<")
            {
                mapping[i][j]=world[0][17];
            }
            else if (a=="]")
            {
                mapping[i][j]=world[0][18];
            }
            else if (a==">")
            {
                mapping[i][j]=world[0][19];
            }
            else if (a=="a")
            {
                mapping[i][j]=world[0][20];
            }
            else if (a=="b")
            {
                mapping[i][j]=world[0][21];
            }
            else if (a=="c")
            {
                mapping[i][j]=world[0][22];
            }
            else if (a=="d")
            {
                mapping[i][j]=world[0][23];
            }
            else if (a=="e")
            {
                mapping[i][j]=world[0][24];
            }
            else if (a=="f")
            {
                mapping[i][j]=world[0][25];
            }
            else if (a=="g")
            {
                mapping[i][j]=world[0][26];
            }
            else if (a=="h")
            {
                mapping[i][j]=world[0][27];
            }
            else if (a=="i")
            {
                mapping[i][j]=world[0][28];
            }
            else if (a=="j")
            {
                mapping[i][j]=world[0][29];
            }
            else if (a=="k")
            {
                mapping[i][j]=world[0][30];
            }
            else if (a=="l")
            {
                mapping[i][j]=world[0][31];
            }
            else if (a=="m")
            {
                mapping[i][j]=world[0][32];
            }
            else if (a=="n")
            {
                mapping[i][j]=world[0][33];
            }
            else if (a=="o")
            {
                mapping[i][j]=world[0][34];
            }
            else if (a=="p")
            {
                mapping[i][j]=world[0][35];
            }
            else if (a=="q")
            {
                mapping[i][j]=world[0][36];
            }
            else if (a=="r")
            {
                mapping[i][j]=world[0][37];
            }
            else if (a=="t")
            {
                mapping[i][j]=world[0][38];
            }
            else if (a=="u")
            {
                mapping[i][j]=world[0][39];
            }
            else if (a=="v")
            {
                mapping[i][j]=world[0][40];
            }
            else if (a=="s")
            {
                mapping[i][j]=world[0][41];
            }
            else if (a=="0")
            {
                mapping[i][j]=200;
            }
            else if (a=="1")
            {
                mapping[i][j]=201;
            }
            else if (a=="2")
            {
                mapping[i][j]=202;
            }
            else if (a=="3")
            {
                mapping[i][j]=203;
            }
            else if (a=="4")
            {
                mapping[i][j]=204;
            }
            else if (a=="5")
            {
                mapping[i][j]=205;
            }
            else if (a=="6")
            {
                mapping[i][j]=206;
            }
            else if (a=="7")
            {
                mapping[i][j]=207;
            }
            else if (a=="8")
            {
                mapping[i][j]=208;
            }
            else if (a=="9")
            {
                mapping[i][j]=209;
            }
            else if (a=="x")
            {
                mapping[i][j]=300;
            }

        }


    }
}
void p_cards(int x)
{
    if (x==1)
	{
		cout<<"  ___________ "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |  ALASKA   | "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |           | "<<endl;
		cout<<" | ARTILLERY | "<<endl;
		cout<<" |___________| "<<endl;
	}
	if (x==2)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  ALBERTA | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}

	if (x==3)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | CTRL AMEC| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==4)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ESTRN US | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==5)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | GREENLAND| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==6)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | NWST TTRY| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==7)
    {
        cout<<"  __________  "<<endl;
        cout<<" |          | "<<endl;
        cout<<" |  ONTARIO | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" | ARTILLERY| "<<endl;
        cout<<" |__________| "<<endl;
    }
    if (x==8)
    {
        cout<<"  __________  "<<endl;
        cout<<" |          | "<<endl;
        cout<<" |  QUEBEC  | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" | ARTILLERY| "<<endl;
        cout<<" |__________| "<<endl;
    }
    if (x==9)
    {
        cout<<"  __________  "<<endl;
        cout<<" |          | "<<endl;
        cout<<" | WESTN US | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" |          | "<<endl;
        cout<<" | ARTILLERY| "<<endl;
        cout<<" |__________| "<<endl;
    }
	if (x==10)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  BRAZIL  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==11)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   PERU   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==12)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | VENEZUELA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==13)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   GREAT  | "<<endl;
		cout<<" |  BRITAIN | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==14)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ICELAND  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==15)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | NORTHERN | "<<endl;
		cout<<" |  EUROPE  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==16)
	{
		cout<<"  ___________  "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |SCANDINAVIA| "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |  CAVALRY  | "<<endl;
		cout<<" |___________| "<<endl;
	}
	if (x==17)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | SOUTHERN | "<<endl;
		cout<<" |  EUROPE  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==18)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | UKRAINE  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==19)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  WESTERN | "<<endl;
		cout<<" |   EUROPE | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==20)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   CONGO  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==21)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  EAST    | "<<endl;
		cout<<" |  AFRICA  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==22)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  EGYPT   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==23)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |MADAGASCAR| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==24)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  NORTH   | "<<endl;
		cout<<" |  AFRICA  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==25)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOUTH   | "<<endl;
		cout<<" |  AFRICA  | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==26)
	{
		cout<<"  ___________ "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |AFGHANISTAN| "<<endl;
		cout<<" |           | "<<endl;
		cout<<" |           | "<<endl;
		cout<<" | ARTILLERY | "<<endl;
		cout<<" |___________| "<<endl;
	}
	if (x==27)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CHINA   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==28)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  INDIA   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==29)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  IRKUTSK | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==30)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  JAPAN   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==31)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | KAMCHATKA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==32)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  MIDDLE  | "<<endl;
		cout<<" |   EAST   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==33)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | MONGOLIA | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==34)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   SIAM   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==35)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SIBERIA | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==36)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   URAL   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==37)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  YAKUTSK | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==38)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  EASTERN | "<<endl;
		cout<<" | AUSTRALIA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==39)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | INDONESIA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==40)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |    NEW   | "<<endl;
		cout<<" |   GUINEA | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  SOLDIER | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==41)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  WESTERN | "<<endl;
		cout<<" | AUSTRALIA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |  CAVALRY | "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==42)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARGENTINA| "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" | ARTILLERY| "<<endl;
		cout<<" |__________| "<<endl;
	}
	if (x==43)
	{
		cout<<"  __________  "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   WILD   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   WILD   | "<<endl;
		cout<<" |          | "<<endl;
		cout<<" |   WILD   | "<<endl;
		cout<<" |__________| "<<endl;
	}
}

bool card_set(string cards, string ch, bool& s, bool& h, bool& c, bool& w)
{
	static int Count = 0;
	static bool junk;
	Count++;
	if(ch == "s")
	{
		s = true;
		junk = card_set(cards, cards.substr(Count, 1), s,h,c,w);
	}
		else if(ch == "h")
	{
		h = true;
		junk = card_set(cards, cards.substr(Count, 1), s,h,c,w);
	}
	else if (ch == "c")
	{
		c = true;
		junk = card_set(cards, cards.substr(Count, 1), s,h,c,w);
	}
	else
	{
		w = true;
		junk = card_set(cards, cards.substr(Count, 1), s,h,c,w);
	}
	if((s==true&&h==true&&c==true)||(s==true&&h==false&&c==false)||(s==true&&w==true&&c==true)||(s==true&&h==true&&w==true)||(s==false&&h==true&&c==false)||(w==true&&h==true&&c==true)||(s==true&&w==true&&c==true)||(s==false&&h==true&&c==false)||(w==true&&h==true&&c==true)||(s==true&&h==true&&w==true))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void dice_print(int v)
{
    cout<<endl;
    if (v==1)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /|       |"<<endl;
        cout<<"  | |   *   |"<<endl;
        cout<<"  | |       |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
    else if (v==2)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /|       |"<<endl;
        cout<<"  | | *   * |"<<endl;
        cout<<"  | |       |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
    else if (v==3)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /|   *   |"<<endl;
        cout<<"  | |   *   |"<<endl;
        cout<<"  | |   *   |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
    else if (v==4)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /| *   * |"<<endl;
        cout<<"  | |       |"<<endl;
        cout<<"  | | *   * |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
    else if (v==5)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /| *   * |"<<endl;
        cout<<"  | |   *   |"<<endl;
        cout<<"  | | *   * |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
    else if (v==6)
    {
        cout<<"     _______ "<<endl;
        cout<<"   /| *   * |"<<endl;
        cout<<"  | | *   * |"<<endl;
        cout<<"  | | *   * |"<<endl;
        cout<<"   \\|_______|"<<endl;
    }
}
int dice_roll()
{
    int v;
    v = rand()%6 + 1;
    return v;
}
void battle(int& no_attack, int& no_defence, int world[][42], int def, int att, bool& win, string risk[])
{
    bool check = false;
    int Highest_def1 = 0, Highest_att1 = 0,Highest_def2 = 0, Highest_att2 = 0, a_lose = 0, d_lose = 0;
    if(no_defence == 2)
    {
        if(no_attack > 1)
        {
            check = true;
        }
    }
    for(int i = 0; i < no_defence; i ++)
    {
        int v = dice_roll();
        dice_print(v);
        if(check == false)
        {
            Highest_def1 = v;
        }
        else
        {
            if(v > Highest_def1)
            {
                Highest_def2 = Highest_def1;
                Highest_def1 = v;
            }
            else
            {
                Highest_def2 = v;
            }
        }
    }
    for(int i = 0; i < no_attack; i ++)
    {
        int v = dice_roll();
        dice_print(v);
        if(check == false)
        {
            if(v > Highest_att1)
            {
                Highest_att1 = v;
            }
        }
        else
        {
            if(v > Highest_att1)
            {
                Highest_att2 = Highest_att1;
                Highest_att1 = v;
            }
            else if(v > Highest_att2)
            {
                Highest_att2 = v;
            }
        }
    }
    if(Highest_att1 > Highest_def1)
    {
        world[1][def]--;
        no_defence--;
		d_lose++;
    }
    else
    {
        world[1][att]--;
        no_attack--;
		a_lose++;
        if (world[1][att]==1)
        {
            win=false;
            cout<<" Your cannot attack again this turn."<<endl;
        }
    }
    if(check == true)
    {
        if(Highest_att2 > Highest_def2)
        {
            world[1][def]--;
            no_defence--;
			d_lose++;

        }
        else
        {
            world[1][att]--;
            no_attack--;
			a_lose++;

			if (world[1][att]==1)
			{
                win=false;
                cout<<" Your cannot attack again this turn."<<endl;
			}
        }
    }

    cout << "Defenders lose " <<d_lose<<" troops\n";
    cout << "Attackers lose " <<a_lose<<" troops\n";
    cout << risk[def] << " " << world[1][def] << endl;
    cout << risk[att] << " " << world[1][att] << endl;
}

void AI(int purpose, int world[][42],int infantry[],int routes[][6],int& c_set, int i, int& def,int& defence,int& attack, int& att, int hand[][10],int hand_count[], string risk3[], string risk[], bool s, bool h, bool c, bool w, bool& win, bool& conquer, int no_terr[6])
{
	int choice, Count = 0, Count2, choice_count[3];
	bool check = false;
	string junk;
	if(purpose == -1)
	{
		if(infantry[i] > 0)
		{
		    for(int a = 0; a < 42 ; a++)
            {
                for(int b = 0; b < 6; b++)
                {
                    if(world[0][a] == i && world[0][routes[a][b]] != i && world[1][routes[a][b]] >= world[1][a])
                    {
                        world[1][a]++;
                        infantry[i]--;
                        check = true;
                        break;
                    }
                }
                if(check == true)
                {
                    break;
                }
            }
            if(check == false)
            {
                for(int A = 0; A < 42; A++)
                {
                    if(world[0][A] == i)
                    {
                        world[1][A]++;
                        infantry[i]--;
                        break;
                    }
                }
            }
		}
	}

	if(purpose == -2)
	{
		if(world[1][def] <= 3)
		{
			defence = 1;
		}
		else
		{
			defence = 2;
		}
	}

	if(purpose == 0)
	{
		while(1)
		{
			choice = rand()%42;
			if(world[0][choice] == -1)
			{
				world[0][choice] = i;
				world[1][choice] = 1;
				infantry[i]--;
				no_terr[i]++;
				cout << "AI has taken " << risk[choice]<<endl;
				Sleep(1000);
				break;
			}
		}
	}

	if(purpose == 1)
	{
	    conquer = false;
        win = true;
        for(int j = 0; j < 42; j++)
        {
            if(world[0][j] == i && world[1][j] > 2)
            {
                    for(int k = 0; k < 6; k++)
                    {
                        if(routes[j][k] == -1)
                        {
                            break;
                        }
                        if(world[0][routes[j][k]] != i && world[1][j] >= world[1][routes[j][k]])
                        {
                            while(world[1][j] > 1)
                            {
                                if(world[1][j] > 3)
                                {
                                    attack = 3;
                                    while(1)
                                    {
                                        cout << risk[routes[j][k]] << " " << world[1][routes[j][k]] << endl;
                                        cout << "How many defenders?: ";
                                        cin >> defence;
                                        if(defence > 0 && defence < 3 && world[1][routes[j][k]] >= defence)
                                        {
                                            break;
                                        }
                                            cout << "You cannot defend with this many";
                                    }
                                    battle(attack, defence, world, routes[j][k], j, win, risk);
                                }
                                else
                                {
                                    attack = 1;
                                    while(1)
                                    {
                                        cout << risk[routes[j][k]] << " " << world[1][routes[j][k]] << endl;
                                        cout << "How many defenders?: ";
                                        cin >> defence;
                                        if(defence > 0 && defence < 3 && world[1][routes[j][k]] >= defence)
                                        {
                                                break;
                                    }
                                            cout << "You cannot defend with this many";
                                    }
                                    battle(attack, defence, world, routes[j][k], j, win, risk);
                                }
                                if(win == false ||world[1][routes[j][k]] == 0)
                                {
                                    break;
                                }
                            }
                            if(world[1][routes[j][k]] == 0)
                            {
                                cout << "AI has conquered " << risk[routes[j][k]] << endl;
                                no_terr[world[0][routes[j][k]]]--;
                                world[0][routes[j][k]] = i;
                                no_terr[i]++;
                                world[1][j] -= attack;
                                world[1][routes[j][k]] = attack;
                                conquer = true;
                            }
                            if(win == false)
                            {
                                break;
                            }
                        }
                    }
            }
            if(win == false)
            {
                break;
            }
        }
	}

	if(purpose == 2)
	{
        for(int j = 0; j < 42; j++)
        {
            if(world[0][j]==i && world[0][j] > 5)
            {
                for(int k = 0; k < 6; k++)
                {
                    if(world[0][routes[j][k]] == i && world[0][routes[j][k]] < 5)
                    {
                        while(world[1][routes[j][k]] < 5 && world[1][j] > 5)
                        {
                            world[1][j]--;
                            world[1][routes[j][k]]++;
                        }
                    }
                }
            }
        }
    }

	if(purpose == 3)
	{
        if(hand_count[i] > 2)
        {
            for(int a = 0; a < hand_count[i]; a++)
            {
                p_cards(hand[i][a]);
            }
            Sleep(1000);
            Sleep(1000);
            for(int j = 0; j < hand_count[i]; j++)
            {
                if(check == false)
                {
                    if(risk3[hand[i][j]] == "a"||risk3[hand[i][j]] == "w")
                    {
                        Sleep(1000);
                        choice_count[Count] = j;
                        Count++;
                        for(int k = 0; k <hand_count[i]; k++)
                        {
                            if(risk3[hand[i][k]] == "s"||risk3[hand[i][k]] == "w")
                            {
                                Sleep(1000);
                                choice_count[Count] = k;
                                Count++;
                                for(int l = 0; l <hand_count[i]; l++)
                                {
                                    if(risk3[hand[i][l]] == "c"||risk3[hand[i][l]] == "w")
                                    {
                                        Sleep(1000);
                                        choice_count[Count] = l;
                                        Count++;
                                        check = true;
                                    }
                                }
                            }
                        }
                        if(check == false)
                        {
                            Sleep(1000);
                            for(int k = j + 1; k < hand_count[i]; k++)
                            {
                                if(risk[hand[i][k]] == "a" || risk[hand[i][k]] == "w")
                                {
                                    Sleep(1000);
                                    choice_count[Count] = k;
                                    Count++;
                                }
                            }
                            if(Count == 2)
                            {
                                check = true;
                            }
                            else
                            {
                                Count = 0;
                            }
                        }
                    }
                }
                else if(check == false)
                {
                    if(risk3[hand[i][j]] == "s"||risk3[hand[i][j]] == "w")
                    {
                        choice_count[Count] = j;
                        Count++;
                        for(int k = 0; k <hand_count[i]; k++)
                        {
                            if(risk3[hand[i][k]] == "c"||risk3[hand[i][k]] == "w")
                            {
                                choice_count[Count] = k;
                                Count++;
                                for(int l = 0; l <hand_count[i]; l++)
                                {
                                    if(risk3[hand[i][l]] == "a"||risk3[hand[i][l]] == "w")
                                    {
                                        choice_count[Count] = l;
                                        Count++;
                                        check = true;
                                    }
                                }
                            }
                        }
                        if(check == false)
                        {
                            for(int k = j + 1; k < hand_count[i]; k++)
                            {
                                if(risk[hand[i][k]] == "s" || risk[hand[i][k]] == "w")
                                {
                                    choice_count[Count] = k;
                                    Count++;
                                }
                            }
                            if(Count == 2)
                            {
                                check = true;
                            }
                            else
                            {
                                Count = 0;
                            }
                        }
                    }
                }
                else if(check == false)
                {
                    if(risk3[hand[i][j]] == "c"||risk3[hand[i][j]] == "w")
                    {
                        choice_count[Count] = j;
                        Count++;
                        for(int k = 0; k <hand_count[i]; k++)
                        {
                            if(risk3[hand[i][k]] == "s"||risk3[hand[i][k]] == "w")
                            {
                                choice_count[Count] = k;
                                Count++;
                                for(int l = 0; l <hand_count[i]; l++)
                                {
                                    if(risk3[hand[i][l]] == "a"||risk3[hand[i][l]] == "w")
                                    {
                                        choice_count[Count] = l;
                                        Count++;
                                        check = true;
                                    }
                                }
                            }
                        }
                    }
                    if(check == false)
                    {
                        for(int k = j + 1; k < hand_count[i]; k++)
                        {
                            if(risk[hand[i][k]] == "c" || risk[hand[i][k]] == "w")
                            {
                                choice_count[Count] = k;
                                Count++;
                            }
                        }
                        if(Count == 2)
                        {
                            check = true;
                        }
                        else
                        {
                            Count = 0;
                        }
                    }
                }
            }
        }
        if(check == true)
        {
            hand_count[i] -=3;
            for(int a = 0; a < 3; a++)
            {
                hand[i][choice_count[a]] = -1;
            }
            for(int a = 0; a < 10; a++)
            {
                if(hand[i][a] == -1)
                {
                    for(int b = a; b < 10; b++)
                    {
                        if(hand[i][b] != -1)
                        {
                            hand[i][a] = hand[i][b];
                            hand[i][b] = -1;
                            break;
                        }
                    }
                }
            }
            c_set++;
            if(c_set < 6)
            {
                infantry[i] += c_set*3;
            }
            else
            {
                infantry[i] += c_set*5;
            }
            if(world[0][choice_count[0]] == i|| world[0][choice_count[1]] == i||world[0][choice_count[2]] == i)
            {
                infantry[i] += 2;
            }
            cout << "AI gets " << infantry[i] << " troops!\n";
            Sleep(1000);
        }
    }
}
int main()
{
    srand(time(NULL));
	int wild = 2, attack, defence,deck_count=0,deck[42], choice_count[3], Count = 0;
	int risk2[42] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int routes[42][6] = {{1,5,31,-1,-1,-1},{0,3,5,6,8,-1},{3,8,12,-1,-1,-1},{2,6,7,8,-1,-1},{5,6,7,14,-1,-1},{0,1,4,6,-1,-1},{1,3,4,5,7,8},{3,4,6,1,-1,-1},{1,2,3,6,-1,-1},{10,11,-1,-1,-1,-1},{9,11,12,24,-1,-1},{9,10,12,-1,-1,-1},{2,10,11,-1,-1,-1},{14,15,16,19,-1,-1},{4,13,16,-1,-1,-1},{13,16,17,18,19,-1},{13,14,15,18,-1,-1},{15,18,19,22,24,32},{15,16,17,26,32,36},{13,15,17,24,-1,-1},{21,24,25,-1,-1,-1},{20,22,23,24,25,32},{17,21,24,32,-1,-1},{21, 25,-1,-1,-1,-1},{10,17,19,20,21,22},{20,21,23,-1,-1,-1},{18,27,32,36,-1,-1},{26,28,33,34,35,36},{26,27,32,34,-1,-1},{31,33,35,37,-1,-1},{31,33,-1,-1,-1,-1},{0,29,30,33,37,-1},{17,18,21,22,26,28},{27,29,30,31,35,-1},{27,28,39,-1,-1,-1},{29,33,36,37,-1,-1},{18,26,27,35,-1,-1},{29,31,35,-1,-1,-1},{40,41,-1,-1,-1,-1},{34,40,41,-1,-1,-1},{38,39,41,-1,-1,-1},{38,39,40,-1,-1,-1}};
	string risk3[43] = {"a","a","s","a","c","c","a","a","a","s","s","c","c","s","c","c","s","s","s","s","a","s","c","c","s","a","s","a","c","a","c","a","a","c","c","s","s","a","c","s","c","a","w"}, risk[42] = {"Alaska", "Alberta", "Central America","Eastern United States","Greenland", "Northwest Territory","Ontario","Quebec","Western United Sates","Argentina","Brazil","Peru","Venezuela","Great Britain","Iceland","Northern Europe","Scandinavia", "Southern Europe", "Ukraine", "Western Europe", "Congo","East Africa","Egypt","Madagascar","North Africa","South Africa", "Afghanistan","China","India","Irkutsk","Japan","Kamchatka","Middle East","Mongolia","Siam","Siberia","Ural","Yakutsk","Eastern Australia","Indonesia", " New Guinea","Western Australia"};
	string cards, junk;
	int mapping[44][167];
	int Ai = -1, no_players, highest_roll2 = 0,turn, world[2][42], choice, choice2, choice3, roll,c_set = 0,att,def;
	int highest_roll1 = 0;
	bool check = true, check2 = true, check3 = true, s,h,c,w,NA,SA,E,AS,AU,AF, win, you_are_done,conquer, battled;

	cout << "Enter number of players: ";
	cin >> no_players;
	if(no_players > 1 && no_players < 6)
    {
        cout << "Make player " << no_players + 1 << " AI?(yes/no): ";
        cin >> junk;
    }
	if(junk == "yes" || no_players == 1)
	{
		Ai = no_players;
		no_players++;
	}
	string arr2[no_players];
	int infantry[no_players], no_terr[no_players], continent[2][6] = {{-1,-1,-1,-1,-1,-1},{5,5,3,7,5,2}}, hand[no_players][10],hand_count[no_players], lose_count=0;

	for(int i = 0; i < 44; i++)
	{
		int v = rand()%43;
		if(v == 42)
		{
			if(wild > 0)
			{
				wild--;
				deck[deck_count] = v;
				deck_count++;
			}
			else
			{
				i--;
			}
		}
		else
		{
			if(risk2[v] == -1)
			{
				risk2[v] = 0;
				deck[deck_count] = v;
				deck_count++;
			}
			else
			{
				i--;
			}
		}
	}

	for(int i = 0; i < 42; i++)
	{
		world[0][i] = -1;
        world[1][i] = 0;
	}

	for(int i = 0; i < no_players; i++)
	{
	    hand_count[i] = 0;
		system("CLS");
		maps(mapping, world);
		map_generator(mapping, world);
		if(i == Ai)
		{
			arr2[i]= "AI";
            no_terr[i] = 0;
			break;
		}
		cout << "Enter player " << i + 1 << " name: ";
		cin >> arr2[i];
		no_terr[i] = 0;
		for(int j = 0; j < 10; j++)
		{
			hand[i][j] = -1;
		}
	}

	if(no_players == 2)
	{
		cout << "Each player starts with 40 infantry" << endl;
		for(int i = 0; i < no_players; i++)
		{
			infantry[i] = 40;
		}
	}
	else if(no_players == 3)
	{
		cout << "Each player starts with 35 infantry" << endl;
		for(int i = 0; i < no_players; i++)
		{
			infantry[i] = 35;
		}
	}
	else if(no_players == 4)
	{
		cout << "Each player starts with 30 infantry" << endl;
		for(int i = 0; i < no_players; i++)
		{
			infantry[i] = 30;
		}
	}
	else if(no_players == 5)
	{
		cout << "Each player starts with 25 infantry" << endl;
		for(int i = 0; i < no_players; i++)
		{
			infantry[i] = 25;
		}
	}
	else if(no_players == 6)
	{
		cout << "Each player starts with 20 infantry" << endl;
		for(int i = 0; i < no_players; i++)
		{
			infantry[i] = 20;
		}
	}

	Sleep(1000);
	for(int j = 0; j < 42; j++)
	{
		system("CLS");
		maps(mapping,world);
		map_generator(mapping, world);
		for(int i = 0; i < no_players; i++)
		{
			if(infantry[i] > 0)
			{
				roll = dice_roll();
				if(roll > highest_roll1)
				{
					highest_roll1 = roll;
					turn = i;
					check2 = true;
				}
				else if(roll == highest_roll1)
				{
					check2 = false;
				}
			}
		}
		if(check2 == true)
		{
			if(turn == Ai)
			{
				AI(0,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
			}
			else
			{
                cout << endl << arr2[turn] << "'s turn\nChoose a territory(number between 0 and 41): ";
				cin >> choice;
				while(1)
				{
					if(world[0][choice] == -1)
					{
						break;
					}
					else if(choice > 41 || choice < 0)
                    {
                        cout << "This territory does not exist. ";
                        cin >> choice;
                    }
                    else
                    {
                        cout << "Territory is already taken. Choose another: ";
                        cin >> choice;
                    }
				}
				world[0][choice] = turn;
				world[1][choice] = 1;
				infantry[turn]--;
				no_terr[turn]++;
			}
		}
		else
		{
			j--;
			cout << "It's a tie!\n";
			Sleep(1000);
		}
		highest_roll1 = 0;
		check2 = true;
	}

	system("CLS");

	while(1)
	{
        for(int i = 0; i < no_players; i++)
        {
            if(i == Ai)
            {
                AI(-1,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
            }
            else
            {
                for(int i = 0; i < no_players; i++)
                {
                    cout <<arr2[i] <<", you have "<< infantry[i] << " many troops left."<<endl;
                }
                cout<<endl;
                if(infantry[i] > 0)
                {
                    maps(mapping,world);
                    map_generator(mapping, world);
                    cout<<arr2[i]<<endl;

                    cout << arr2[i] << " Choose your territory to reinforce: ";
                    cin >> choice;
                    while(1)
                    {
                        if(world[0][choice] == i)
                        {
                            world[1][choice]++;
                            infantry[i]--;
                            break;
                        }
                        else if(choice > 41 || choice < 0)
                        {
                            cout << "This territory does not exist. ";
                            cin >> choice;
                        }
                        else
                        {
                            cout << "This is not your territory. Choose another : ";
                            cin >> choice;
                        }
                    }
                }
                system("CLS");
            }

        }
        check = true;
        for(int j = 0; j < no_players; j++)
        {
            if(infantry[j] != 0)
            {
                check = false;
            }
        }
        if(check == true)
        {
            break;
        }
	}

	while(1)
	{

		for(int i = 0; i < no_players; i++)
		{
		    battled = false;
			conquer = false;
		    you_are_done=true;
		    maps(mapping,world);
		    map_generator(mapping, world);
			if(no_terr[i] == 0)
			{
				break;
			}
			cout << arr2[i]<<", you have "<<no_terr[i]<<" territories\n";
			if(no_terr[i] < 12)
			{
				infantry[i] += 3;
			}
			else
			{
				infantry[i] += no_terr[i]/3;
			}
			for(int j = 0; j < 6; j++)
			{
				if(continent[0][j] == i)
				{
					infantry[i] += continent[1][j];
				}
			}
			if(i == Ai)
			{
                Sleep(1000);
			    while(infantry[i]> 0)
                {
                    AI(-1,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
                }
				AI(1,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
				AI(2,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
				if(conquer == true)
				{
					hand[i][hand_count[i]] = deck[deck_count];
					p_cards(deck[deck_count]+1);
                    deck_count--;
					hand_count[i]++;
					Sleep(1000);
				}
				AI(3,world,infantry,routes,c_set,Ai,def,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);

			}
			else
            {
                system("CLS");
                while(1)
                {
                    while(infantry[i] > 0)
                    {

                        maps(mapping,world);
                        map_generator(mapping, world);

                        cout<<endl;
                        cout <<arr2[i]<<" you get "<< infantry[i]<<" troops."<<endl;
                        cout<<endl;
                        cout << arr2[i] << ", choose a territory to reinforce: ";
                        cin >> choice;
                        cout<<endl;
                        while(1)
                        {
                            cout<<arr2<<endl;

                            if(world[0][choice] == i)
                            {
                                world[1][choice]++;
                                infantry[i]--;
                                break;
                            }
                            else if(choice > 41 || choice < 0)
                            {
                                cout << "This territory does not exist. ";
                                cin >> choice;
                            }
                            else
                            {
                                cout << "This is not your territory. Choose another: ";
                                cin >> choice;
                            }
                        }
                        system("CLS");
                    }
                    cout<<endl;
                    cout << "What would you like to do in this move?\n \n1- Attack\n \n2- Reinforce and End Turn\n \n0-End Turn\n";
                    cout<<endl;
                    cin >> choice;
                    system("CLS");
                    if(choice == 1 && you_are_done == false)
                    {
                        cout << "You cannot attack again this turn\n";
                    }
                    else if(choice == 1 && you_are_done == true)
                    {
                        maps(mapping,world);
                        map_generator(mapping, world);
                        win=true;
                        while(1)
                        {

                            cout << " Choose a territory to launch the attack from(-1 to exit): ";//change the -1
                            cin >> choice2;
                            if(choice2 == -1)
                            {
                                break;
                                check=false;
                            }
                            if(world[0][choice2] == i && world[1][choice2] > 1)
                            {
                                break;
                            }
                            else if(world[1][choice2] == 1)
                            {
                                cout << "This territory cannot attack.";
                            }
                            else if(choice > 41 || choice < 0)
                            {
                                cout << "This territory does not exist. ";
                            }

                        }
                            while(choice2 != -1)
                            {
                                check3 = true;
                                check2 = true;
                                cout<<arr2[i]<<endl;
                                cout<<endl;
                                for (int k=0; k<6; k++)
                                {
                                    if (world[0][routes[choice2][k]]!=i && routes[choice2][k]!=-1)
                                    {
                                        cout<<routes[choice2][k]<<". "<<risk[routes[choice2][k]]<<" "<<world[1][routes[choice2][k]]<<endl;
                                    }
                                }
                                cout<<endl;
                                cout << "Choose a territory to attack(-1 to retreat): ";
                                cout<<endl;
                                cin >> choice3;
                                if(choice3 == -1)
                                {
                                    break;
                                }
                                else if(choice > 41 || choice < 0)
                                {
                                    cout << "This territory does not exist. ";
                                }
                                else
                                {
                                    if(world[0][choice3] != i)
                                    {
                                        check3 = false;
                                    }
                                    for(int k = 0; k < 6; k++)
                                    {
                                        if(routes[choice2][k]==choice3)
                                        {
                                            check2 = false;
                                        }
                                    }
                                    if(check3 == false && check2 == false)
                                    {
                                        break;
                                    }
                                    cout << "This battle cannot take place. \n";
                                }
                            }
                            while(choice2 != -1 && choice3 != -1)
                            {
                                system("CLS");
                                cout << "How many attackers?: ";
                                cin >> attack;
                                if(attack > 0 && attack < 4 && world[1][choice2] > attack)
                                {
                                    break;
                                }
                                cout << "You cannot attack with this many.";
                            }
                            if(world[0][choice3] == Ai)
                            {
                                AI(-2,world,infantry,routes,c_set,Ai,choice3,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
                            }
                            else
                            {
                                while(choice2 != -1 && choice3 != -1)
                                {
                                    cout << "How many defenders?: ";
                                    cin >> defence;
                                    if(defence > 0 && defence < 3 && world[1][choice3] >= defence)
                                    {
                                        break;
                                    }
                                    cout << "You cannot defend with this many";
                                }
                            }
                            if(choice2 != -1 && choice3 != -1)
                            {
                                while(1)
                                {
                                    battle(attack,defence,world,choice3,choice2,win, risk);//insert parameter inside func to check if battle is won bool
                                    battled = true;
                                    if(win == false || world[1][choice3] ==  0)
                                    {
                                        break;
                                    }
                                    cout << "Continue attack(1) or retreat(-1): ";
                                    cin >> choice;
                                    if (choice==-1)
                                    {
                                        break;
                                    }
                                    while(1)
                                    {
                                        cout << "How many attackers?: ";
                                        cin >> attack;
                                        if(attack > 0 && attack < 4 && world[1][choice2] > attack)
                                        {
                                            break;
                                        }
                                        cout << "You cannot attack with this many.";
                                    }
                                    if(world[0][choice3] == Ai)
                                    {
                                        AI(-2,world,infantry,routes,c_set,Ai,choice3,defence,attack,att,hand,hand_count,risk3,risk,s,h,c,w,win,conquer,no_terr);
                                    }
                                    else
                                    {
                                        while(1)
                                        {
                                            if(choice2 == -1 ||choice3 == -1)
                                            {
                                                break;
                                            }
                                            cout << "How many defenders?: ";
                                            cin >> defence;
                                            if(defence > 0 && defence < 3 && world[1][choice3] >= defence)
                                            {
                                                break;
                                            }
                                            cout << "You cannot defend with this many";
                                        }
                                    }
                                }
                                    if(world[1][choice3] == 0)
                                    {
                                        cout << arr2[i] << " has conquered " << risk[choice3] << endl;
                                        no_terr[world[0][choice3]]--;
                                        world[0][choice3] = i;
                                        no_terr[i]++;
                                        world[1][choice3] = attack;
                                        world[1][choice2] -= attack;
                                        conquer = true;
                                        NA = false;
                                        SA = false;
                                        E = false;
                                        AS = false;
                                        AF = false;
                                        AU = false;
                                        for(int a = 0; a < no_players; a++)
                                        {
                                            for(int b = 0; b < 9; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b==8)
                                                {
                                                    NA = true;
                                                    continent[0][0] = a;
                                                }
                                            }
                                            for(int b = 9; b <13; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b=12)
                                                {
                                                    SA = true;
                                                    continent[0][1] = a;
                                                }
                                            }
                                            for(int b = 13; b < 20; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b==19)
                                                {
                                                    E = true;
                                                    continent[0][2] = a;
                                                }
                                            }
                                            for(int b = 20; b < 26; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b==25)
                                                {
                                                    AF = true;
                                                    continent[0][3] = a;
                                                }
                                            }
                                            for(int b = 26; b < 38; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b==37)
                                                {
                                                    AS = true;
                                                    continent[0][4] = a;
                                                }
                                            }
                                            for(int b = 38; b < 42; b++)
                                            {
                                                if(world[0][b] != a)
                                                {
                                                    break;
                                                }
                                                if(b==41)
                                                {
                                                    AU = true;
                                                    continent[0][5] = a;
                                                }
                                            }
                                        }
                                        if(NA == false)
                                        {
                                            continent[0][0] = -1;
                                        }
                                        if(SA == false)
                                        {
                                            continent[0][1] = -1;
                                        }
                                        if(NA == false)
                                        {
                                            continent[0][2] = -1;
                                        }
                                        if(NA == false)
                                        {
                                            continent[0][3] = -1;
                                        }
                                        if(NA == false)
                                        {
                                            continent[0][4] = -1;
                                        }
                                        if(NA == false)
                                        {
                                            continent[0][5] = -1;
                                        }
                                    }
                            }
                        if (win == false||(battled == true && choice == -1))
                        {
                            you_are_done = false;
                        }
                    }

                    else if(choice == 2)
                    {
                        while(1)
                        {   maps(mapping,world);
                            map_generator(mapping, world);
                            cout<<arr2[i]<<endl;
                            cout<<endl;

                            cout << "Choose a territory to supply reinforcements(-1 to exit): ";
                            cin >> choice2;
                            if(choice2 == -1)
                            {
                                break;
                            }
                            else if(choice > 41 || choice < 0)
                            {
                                cout << "This territory does not exist. ";
                            }
                            else
                            {
                                if(world[0][choice2] == i && world[1][choice2] > 1)
                                {
                                    break;
                                }
                                cout << "This territory cannot supply reinforcements. ";
                            }
                        }
                        while(choice2 != -1)
                        {
                            cout << endl;
                            for(int k = 0; k < 6; k++)
                            {
                                if(world[0][routes[choice2][k]] == i)
                                {
                                    cout << routes[choice2][k] << " " << risk[routes[choice2][k]] << " " << world[1][routes[choice2][k]]<< endl;
                                }
                            }
                            check = true;
                            check2 = false;
                            cout << "Choose a territory to reinforce(-1 to exit): ";
                            cin >> choice3;
                            if(choice3 == -1)
                            {
                                break;
                            }
                            else if(choice > 41 || choice < 0)
                            {
                                cout << "This territory does not exist. ";
                            }
                            else
                            {
                                if(world[0][choice3] == i)
                                {
                                    check = false;
                                }
                                for(int k = 0; k < 6; k++)
                                {
                                    if(routes[choice2][k]==choice3)
                                    {
                                        check2 = true;
                                    }
                                }
                                if(check == false && check2 == true)
                                {
                                    break;
                                }
                                cout << "You cannot move your troops on this path. ";
                            }
                        }
                        while(choice2 != -1 && choice3 != -1)
                        {
                            cout << "How many reinforcements?: ";
                            cin >> choice;
                            if(world[1][choice2] > choice)
                            {
                                break;
                            }
                        }
                        if (choice2 != -1 && choice3 != -1)
                        {
                            world[1][choice3] = world[1][choice3] + choice;
                            world[1][choice2] = world[1][choice2] - choice;
                            you_are_done = false;
                        }
                        system("CLS");
                    }

                    if(choice == 0)
                    {
                        if(conquer == true)
                        {
                            cout << "You got a RISK card!\n";
                            hand[i][hand_count[i]] = deck[deck_count];
                            p_cards(deck[deck_count] + 1);
                            deck_count--;
                            hand_count[i]++;
                        }

                        if(hand_count[i] > 0)
                        {
                            Sleep(1500);
                            system("CLS");

                            cout << arr2[i] <<"'s hand\n";

                        }
                        for (int j=0; j < hand_count[i]; j++)
                        {
                            p_cards(hand[i][j]+1);
                        }
                        if(hand_count[i] > 2)
                        {
                            cout << "Trade in RISK cards this turn?(yes/no): ";
                            cin >> junk;
                            if(junk == "yes")
                            {
                                cout << "Which three cards will you trade in?\n";
                                for(int a = 0; a < 3; a++)
                                {
                                    cin >> choice;
                                    if(risk3[hand[i][choice]] == "a")
                                    {
                                        c = true;
                                        choice_count[Count] = choice;
                                        Count ++;
                                    }
                                    else if(risk3[hand[i][choice]] == "s")
                                    {
                                        s = true;
                                        choice_count[Count] = choice;
                                        Count ++;
                                    }
                                    else if(risk3[hand[i][choice]] == "c")
                                    {
                                        h = true;
                                        choice_count[Count] = choice;
                                        Count ++;
                                    }
                                    else if(risk3[hand[i][choice]] == "w")
                                    {
                                        w = true;
                                        choice_count[Count] = choice;
                                        Count ++;
                                    }
                                }

                                if((s==true&&h==true&&c==true)||(s==true&&h==false&&c==false)||(s==true&&w==true&&c==true)||(s==true&&h==true&&w==true)||(s==false&&h==true&&c==false)||(w==true&&h==true&&c==true)||(s==true&&w==true&&c==true)||(s==false&&h==true&&c==false)||(w==true&&h==true&&c==true)||(s==true&&h==true&&w==true))
                                {
                                    hand_count[i] -=3;
                                    for(int a = 0; a < 3; a++)
                                    {
                                        hand[i][choice_count[a]] = -1;
                                    }
                                    for(int a = 0; a < 10; a++)
                                    {
                                        if(hand[i][a] == -1)
                                        {
                                            for(int b = a; b < 10; b++)
                                            {
                                                if(hand[i][b] != -1)
                                                {
                                                    hand[i][a] = hand[i][b];
                                                    hand[i][b] = -1;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    c_set++;
                                    if(c_set < 6)
                                    {
                                        infantry[i] += c_set*3;
                                    }
                                    else
                                    {
                                        infantry[i] += c_set*5;
                                    }
                                    if(world[0][choice_count[0]] == i|| world[0][choice_count[1]] == i||world[0][choice_count[2]] == i)
                                    {
                                        infantry[i] += 2;
                                        cout<< "You get " << infantry[i] << " troops!\n";
                                        Sleep(1500);
                                    }
                                }
                                else
                                {
                                    cout << "You cannot trade these cards.\n";
                                }
                            }
                        }
                else
                {
                    cout << "You cannot trade in your RISK cards yet. Enter 0 to end your turn.\n";
                    cin >> junk;
                }
                Sleep(1500);
                system("CLS");
                break;
            }
            for(int g = 0; g < no_players; g++)
            {
                if(no_terr[g] == 0)
                {
                    cout << arr2[g] << " has been eliminated.\n";
                    lose_count++;
                }
            }
            if(lose_count == no_players - 1)
            {
                cout << arr2[i] << " has won!";
                break;
            }
    }
    }
			if(lose_count == no_players - 1)
			{
				break;
			}
		}
		if(lose_count == no_players - 1)
		{
			break;
		}


	}
	return 0;
}
