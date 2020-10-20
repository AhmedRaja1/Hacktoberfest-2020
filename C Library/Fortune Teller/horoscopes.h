#include<math.h>

void aries(int,int,char *,char);
void taurus(int,int,char *,char);
void gemini(int,int,char *,char);
void cancer(int,int,char *,char);
void leo(int,int,char *,char);
void virgo(int,int,char *,char);
void libra(int,int,char *,char);
void scorpio(int,int,char *,char);
void saggitarius(int,int,char *,char);
void capricorn(int,int,char *,char);
void aquarius(int,int,char *,char);
void pisces(int,int,char *,char);




void aries(int x,int y,char *a, char s)    //about yourself, lucky numbers,fortunes
    {
        int d,c,i,j=1;
        system("cls");
        details(a,s,y);
        asciiaries();
        char *ari[]={"\n*  You have unusually strong willpower and great obstinancy of purpose",
                    "\n*  You are born to be fighter in every sense of the world",
                    "\n*  You also have the greatest ability as organizer on a large scale. You find yourself as the organizers of big schemes or as the heads of big businesses, and also in the organization and development of countries.",
                    "\n*  You seem naturally to resent all criticism, and the only way to offset this in you is by quiet logic, reason, and proof.",
                    "\n*  These people are usually independent in everything you do.",
                    "\n*  The lower type of this sign will stick at nothing to accomplish your purpose. The higher type are good masters, but at the same time severe in discipline and more or less unbending in everything you expect from other people.",
                    "\n*  You have a distinct desire to peer into the future, perhaps because you are impatient for things to develop.",
                    "\n*  You are inclined to prophesy what will take place, and are often succeed in that.",
                    "\n*  As a general rule,you suffer a great deal through your affections; you seldom understand women, and make lots of serious mistakes in your relations with you.",
                    "\n*  You are happy only at moments when you are absolutely absorbed with your work and manage to overcome of obstacles.",
                    "\n*  You get through life without receiving cuts, wounds, or blows to the head, either from accidents or violence.",
                    "\n*  Mars is the Aries' ruling planet.It makes you to have an active life, constantly giving you the reserve of energy. That makes you careless, unruly, ambitious and competitive.",
                    "\n*  This sign's place in the horoscope - first - and the people of this sign also want to be first in all .",
                    "\n*  Aries is a very much self-confident sign.",
                    "\n*  Aries' symbol - is a ram- an animal, which tries to get everything by impact of a head, and everyone, who ever dealed with people who's sign is the Aries knows, that you go directly to your purpose as persistently as the rams.",
                    "\n*  You will find your more lasting friendships and affections with those born on your own period or between July 21 and August 20-27, and from November 21 to December 20-27; and also from the centre of your triangle, September 21 to October 20-27.",
                    "\n*  You sould have more time to sleep than almost anyone else.",
                    "\n*  You usually overwork your brains, and are inclined to suffer from headache, trouble with the eyes and other things concerned the head.",
                    "\n*  You are liable to get cuts and wounds in the head, and you usually run danger from fire.",
                    "\n*  You usually demand a constant medical attention.",
                    "\n*  The most harmonious color for you is all shades of red -crimson, rose, and pink, but if you are ill- all shades of blue and violet are most soothing and beneficial to you.",
                    "\n*  Your birth stones are rubies, garnets, and bloodstones.",
                    "\n*  It is really important for you to do everything in your own way, and if you are intervened with other people you generally loose the shapes of the main purpose, step back and let the other person take your place.",
                    "\n*  You are unhappy in your domestic life. It is very difficult for such people to meet a member of the opposite sex who would understand you, and if opposition does not upset you from this point it usually does through your children.",
                    "\n*  You deeply, fervently and strongly desire for affection and sympathy, more than anything else, and this is generally the rock on which you are finally wrecked if you have not the good fortune to meet your right affinities.",
                    "\n*  As far as material success or power is concerned, there are no heights to which persons born in this sign wouldn’t be able to. Success, however, is not making you feel really happy and satisfied.",
                    "\n*  You are inclined to lack caution, being by nature impulsive and quick in thought and action.",
                    "\n*  You are enormously ambitious, as a rule you succeed in life and gain money and position."

                    };
        switch (zodmenu())
            {
                case 1:

                    system("cls");
                    asciiaries();
                    details(a,s,y);
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    //gotoxy(1,9);
                    //if((x==21||22||23||24||25||26)&&(y==3))
                    //if((x==21&&y==3)||(x==22&&y==3)||(x==23&&y==3)||(x==24&&y==3)||(x==25&&y==3)||(x==26&&y==3)||(x==27&&y==3))
                   //if(y==3 && (x==21,22,23,24,25,26,27))
                   //if((y==3)&&((x==23)||(x==24)||(x==25)||(x==26)||(x==27)))
                        //if((y==3&&x>22))//||(bd.month==2,4,6,9,11&&bd.day>30)||(2010-bd.year>100)||(bd.year>2010))
                        /*if(y==3 && (x==21,22,23,24,25,26,27))
                        {
                            cusp(0);
                            printf("Enter any key....");
                            getch();
                        }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>29)
                                        break;
                                    printf("\n\n%s",ari[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                        aries(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciiaries();
                    fortunes();
                    aries(x,y,a,s);
                    break;
                case 3:       //lucky numbers
                    system("cls");
                    asciiaries();
                    details(a,s,y);
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*1);
                                 delay(3);
                                 printf("%d\t",x+7);
                                 delay(3);
                                 printf("%d\t",x*21/19);
                                 delay(3);
                                 printf("%d\t",x+(x%10));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                                 aries(x,y,a,s);

                    break;
                case 4:
                    system("cls");
                    asciiaries();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND ARIES LOVE COMPATIBILITY");
                                compat(1-1);
                                aries(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND TAURUS LOVE COMPATIBILITY");
                                compat(2-1);
                                aries(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND GEMINI LOVE COMPATIBILITY");
                                compat(3-1);
                                aries(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND CANCER LOVE COMPATIBILITY");
                                compat(4-1);
                                aries(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND LEO LOVE COMPATIBILITY");
                                compat(5-1);
                                aries(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND VIRGO LOVE COMPATIBILITY");
                                compat(6-1);
                                aries(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND LIBRA LOVE COMPATIBILITY");
                                compat(7-1);
                                aries(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND SCORPIO LOVE COMPATIBILITY");
                                compat(8-1);
                                aries(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(9-1);
                                aries(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND CAPRICORN LOVE COMPATIBILITY");
                                compat(10-1);
                                aries(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND AQUARIUS LOVE COMPATIBILITY");
                                compat(11-1);
                                aries(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciiaries();
                                details(a,s,y);
                                gotoxy(5,8);printf("ARIES AND PISCES LOVE COMPATIBILITY");
                                compat(12-1);
                                aries(x,y,a,s);
                                break;
                        }
                    aries(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    aries(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();

            }




    }


void taurus(int x,int y,char *a, char s)      //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciitaurus();
        char *tau[]={"\n*  You tend to be very patient, practical and dedicated.",
                     "\n*  You are usually very cautious when dealing with people, life and money.",
                     "\n*  You have a curious power of dominating others, even when not conscious of trying to do so.",
                     "\n*  You are extremely faithful, with a strong need for security and a settled routine.",
                     "\n*  You are very earthy. You can also be highly romantic and sensitive when it comes to love.",
                     "\n*  You have great power of endurance, both physical and mental, and can pass through enormous strains of fatigue as long as the excitement or determination lasts.",
                     "\n*  You make wonderful hosts and hostesses.",
                     "\n*  You have great taste about food.",
                     "\n*  In the management of your houses you can make much out of little.",
                     "\n*  You always fight in the open, for you hate trickiness, double-dealing, or deceit.",
                     "\n*  You are easily influenced by your surroundings, and become morbid and morose when trying to live under uncongenial conditions.",
                     "\n*  You are also too easily misled by your emotions, sensations, or affections.",
                     "\n*  You are jealous in your disposition.Your jealousy often drives you into acts of violence or sudden exhibition of temper, which you bitterly regret when the storm is over.",
                     "\n*  You at your best are typically strong and silent",
                     "\n*  You often appear ignorant and willfully obstinate to others.",
                     "\n*  You have an innate sense of harmony, rhythm and color, and often are very successful in music, poetry and art.",
                     "\n*  You have an ability to become the most faithful, loyal friends.",
                     "\n*  You also make good, patient nurses and healers, and almost all have a keen love of gardening and flowers.",
                     "\n*  You are warm, gentle, passionate and friendly person, though you never show it.",
                     "\n*  You perfectly know what you want and persistently work to achieve this purpose.",
                     "\n*  It is difficult for you to understand other people.",
                     "\n*  You are usually friendly, though sometimes and is slightly boring because of the restraint and reticence.",
                     "\n*  You make long relationships with other zodiacs",
                     "\n*  You are endowed with a splendid constitution",
                     "\n*  You suffer with all things that affect the throat, nasal cavities",
                     "\n*  You suffer from dieseas related to upper part of the lungs.",
                     "\n*  Most favorable colors for you are all shades of blue.",
                     "\n*  Red is an exciting color for you, and you should use it as little as possible.",
                     "\n*  The birth stones for you are emeralds, turquoises, and lapis lazuli",
                     "\n*  You often become excellent director, have good business intuition.",
                     "\n*  You are generally considered richer than you really are, as you always dress well and look well.",
                     "\n*  You are governed by your sensations and by your loving nature, but affection has a greater hold on you than passion.",
                     "\n*  You are warm and sensual, with an appreciation of the fine things in life.",
                     "\n*  You are motivated by a need for security; this sign is good for business matters and can be trusted to carry things through with absolute care.",
                     "\n*  You are very strong-willed and often quite creative.",
                     "\n*  The Moon is exalted in Taurus, giving success with matters to do with the public and, combined with the influence of Venus, a passionate nature endowed with a strong sense of loyalty and fidelity."
                     "\n*  You are kind and generous with friends, with whom you develop an unspoken rapport.",
                     "\n*  If you are in love, you are generous to the last degree, and will consider no sacrifice too great for the person you care for.",
                     "\n*  If you are enemy, you will fight with the most determined obstinacy.",

                     };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciitaurus();
                    gotoxy(1,9);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,10);
                    /*if(y==4&&x==20,21,22,23,24,25,26)
                        {
                            cusp(1);
                            printf("Enter any key....");
                            getch();
                        }*/

                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>40)
                                        break;
                                    printf("\n\n%s",tau[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    taurus(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciitaurus();
                    fortunes();
                    taurus(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciitaurus();
                    gotoxy(5,10);printf("------------------------------------------------------------------");
                    gotoxy(5,18);printf("------------------------------------------------------------------");
                    gotoxy(10,14);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*2);
                                 delay(3);
                                 printf("%d\t",x+9);
                                 delay(3);
                                 printf("%d\t",x*9/5);
                                 delay(3);
                                 printf("%d\t",x-(x%10));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    taurus(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciitaurus();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND ARIES LOVE COMPATIBILITY");
                                compat(2-1);
                                taurus(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND TAURUS LOVE COMPATIBILITY");
                                compat(13-1);
                                taurus(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND GEMINI LOVE COMPATIBILITY");
                                compat(14-1);
                                taurus(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND CANCER LOVE COMPATIBILITY");
                                compat(15-1);
                                taurus(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND LEO LOVE COMPATIBILITY");
                                compat(16-1);
                                taurus(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND VIRGO LOVE COMPATIBILITY");
                                compat(17-1);
                                taurus(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND LIBRA LOVE COMPATIBILITY");
                                compat(18-1);
                                taurus(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND SCORPIO LOVE COMPATIBILITY");
                                compat(19-1);
                                taurus(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(20-1);
                                taurus(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND CAPRICORN LOVE COMPATIBILITY");
                                compat(21-1);
                                taurus(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND AQUARIUS LOVE COMPATIBILITY");
                                compat(22-1);
                                taurus(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciitaurus();
                                details(a,s,y);
                                gotoxy(5,10);printf("TAURUS AND PISCES LOVE COMPATIBILITY");
                                compat(23-1);
                                taurus(x,y,a,s);
                                break;
                        }
                    taurus(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    taurus(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }



    }


void gemini(int x,int y,char *a, char s)      //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciigemini();
        char *gem[]={"\n*  You are widely known for your dual personalities and ability to change mood from moment to moment.",
                     "\n*  Although you hate to be tied down, you make lively, entertaining and romantic partners, even if you can be rather fickle if bored or unhappy.",
                     "\n*  The twin sides of your nature are perpetually pulling in opposite directions.",
                     "\n*  Your brains are subtle and brilliant but you usually \"lack continuity of purpose\".",
                     "\n*  Of all people you are the most difficult to understand, in temperament you are hot and cold almost at the same moment.",
                     "\n*  Once you are attracted to people, you have to ensure that you are not dull or mundane.",
                     "\n*  You will no doubt spend ages chatting to anyone about every subject under the sun, just to keep feeding your ever active and inquisitive mind.",
                     "\n*  If taken as you are, in your own moods, you are the most delightful people imaginable.",
                     "\n*  You believe you are truthful, constant, faithful, and so you may be at the moment, but every moment to you has a separate existence.",
                     "\n*  You have an ability to see quickly the weak points in those you meet, and can reduce all to nothing by wit, sarcasm, or mimicry.",
                     "\n*  You are great talker and usually very much in demand socially because you are so entertaining.",
                     "\n*  Gemini is the life of the party.",
                     "\n*  You often succeed the best, as far as money is concerned, but your more suitable career is generally that which requires diplomacy, tact, and finesse.",
                     "\n*  You often make successful gamblers and company promoters of \"get-rich-quick\" schemes.",
                     "\n*  Either type make hosts of friends and are kind-hearted and generous to the person who fills your thoughts at the moment, but \"out of sight, out of mind\" explains your fits of \"forgetfulness\" as nothing else can.",
                     "\n*  In all matters of affection you are human puzzles.",
                     "\n*  You can love passionately and yet be inconstant at the same moment",
                     "\n*  It is only your shield of diplomacy and exquisite tact that keeps you from often making a mess of your lives.",
                     "\n*  Mercury is \" the winged envoy of the gods\", influences even our intellectual process. Therefore Twins who are constantly ruled by this planet, are very intelligence and frequently surpass other people in this area.",
                     "\n*  The twins are the people of mood. In bad mood you frequently act in a silly, unreasonable way, and regret about it later .",
                     "\n*  The good qualities which people born under the sign Gemini possess are: ease-going ,cheerful, helpful ,self-confident and calm.",
                     "\n*  The duty of the Twins - is to use what you possess as correct as it possible to achieve your high purposes.",
                     "\n*  Both types make your most lasting friendships with people born either in your own period of the year or from September 21 to October 20-27, January 21 to February 18-27.",
                     "\n*  You are more inclined to suffer from what concerns the nervous system than anything else",
                     "\n*  Both men and women are likely to have delicacy with the digestive organs.",
                     "\n*  You often have chest trouble.",
                     "\n*  Your colors are silver, glistening white, and all shimmering things.",
                     "\n*  You love with one side of your nature and you are often critical or dislike with the other people.",
                     "\n*  Your sharp wit and excellent powers of observation make you a good raconteur",
                     "\n*  You have a tendency to exaggerate which can cause trouble with your relationships.",
                     "\n*  You are usually excellent in diplomacy, and dazzle your listeners by, your wit and brilliancy, but you usually leave you no wiser than you were at the start.",
                     "\n*  It is difficult even for you to understand what you want to achieve.",
                     "\n*  At heart you are ambitious for social position; but when obtained you have already tired of it, and are ready to go in for something else or for something totally opposite.",
                     "\n*  Being natural communicator you do not suffer fools gladly"

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciigemini();
                    gotoxy(1,9);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,10);

                    /*if((y==5&&x==21,22,23,24,25,26,27))
                        {
                            cusp(2);
                            printf("Enter any key....");
                            getch();
                        }*/

                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>35)
                                        break;
                                    printf("\n\n%s",gem[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    gemini(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciigemini();
                    fortunes();
                    gemini(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciigemini();
                    gotoxy(5,10);printf("------------------------------------------------------------------");
                    gotoxy(5,18);printf("------------------------------------------------------------------");
                    gotoxy(10,14);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*3);
                                 delay(3);
                                 printf("%d\t",x+3);
                                 delay(3);
                                 printf("%d\t",x*25/19);
                                 delay(3);
                                 printf("%d\t",x+(x/13));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    gemini(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciigemini();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND ARIES LOVE COMPATIBILITY");
                                compat(3-1);
                                gemini(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND TAURUS LOVE COMPATIBILITY");
                                compat(14-1);
                                gemini(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND GEMINI LOVE COMPATIBILITY");
                                compat(24-1);
                                gemini(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND CANCER LOVE COMPATIBILITY");
                                compat(25-1);
                                gemini(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND LEO LOVE COMPATIBILITY");
                                compat(26-1);
                                gemini(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND VIRGO LOVE COMPATIBILITY");
                                compat(27-1);
                                gemini(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND LIBRA LOVE COMPATIBILITY");
                                compat(28-1);
                                gemini(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND SCORPIO LOVE COMPATIBILITY");
                                compat(29-1);
                                gemini(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(30-1);
                                gemini(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND CAPRICORN LOVE COMPATIBILITY");
                                compat(31-1);
                                gemini(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND AQUARIUS LOVE COMPATIBILITY");
                                compat(32-1);
                                gemini(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciigemini();
                                details(a,s,y);
                                gotoxy(5,10);printf("GEMINI AND PISCES LOVE COMPATIBILITY");
                                compat(33-1);
                                gemini(x,y,a,s);
                                break;
                        }
                    gemini(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    gemini(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }

    }


void cancer(int x,int y,char *a, char s)      //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciicancer();
        char *can[]={"\n*  You are easily hurt by the slights of others.",
                  "\n*  You are very complex, sometimes appearing extremely strong and at other times to be as vulnerable as a child.",
                  "\n*  You are remarkably good at accumulating things; indeed, you can be unwilling to throw anything out, even relationships that have passed your use-by date.",
                  "\n*  You are generally over-anxious in financial matters, and make great efforts to gather in money.",
                  "\n*  You have unusual ups and downs in your early life and so you are compelled to work to keep ahead, but once you get on your feet you keep there.",
                  "\n*  If channeled in the right direction, your enormous sensitivity can become a great source of strength.",
                  "\n*  Once you overcome your touchiness and master your turbulent emotions, your intellect and imagination enable you to become a success in almost anything you undertake.",
                  "\n*  Your intuitions are reliable and should be trusted.",
                  "\n*  You are generally gifted with strong imaginations.",
                  "\n*  You are seldom surrounded by happiness at home matters, no matter how successful you may appear in the eye of the world.",
                  "\n*  You have deep love for what you call \"\n*  Your own people,\" for family customs and for tradition.",
                  "\n*  You are very timid and are afraid of refusal more, than all other marks even summarized together.",
                  "\n*  You are quite ambitious.",
                  "\n*  You advance slow towards your aim, and then at the most unexpected moment you grasp the victim and just like a cancer strong holding it and do not let off.",
                  "\n*  You create an attractive facade of naivety that compels the woman to make the first step.",
                  "\n*  You are the one to whom others turn with problems, worries and life choice concerns.",
                  "\n*  Despite your ability to support and nurture your pals, it is pretty difficult for you to make friends.",
                  "\n*  You take friendship seriously and don't bother to indulge superficial associations.",
                  "\n*  You are chiefly inclined towards gastric troubles.",
                  "\n*  You must be extremely careful in regard to shellfish and such things.",
                  "\n*  Inflammatory diseases, such as rheumatism, are likely to attack you.",
                  "\n*  You may have trouble with the legs and feet."
                  "\n*  Physical fitness or sports activities can become important ways for you to work out emotional stress.",
                  "\n*  Team sports are fun, for you can adopt team members as part of an extended family.",
                  "\n*  The colors most in harmony for you are all shades of green, and cream and white.",
                  "\n*  The birth stones most favorable for you are pearls, diamonds, opals, crystals and moonstones.",
                  "\n*  It is very easy for you to become excellent artists, writers, composers, or musicians.",
                  "\n*  At heart you are romantic and of a very loving and affectionate disposition.",
                  "\n*  You are perhaps the most sensitive natures from any other class of people and if aren’t recognized you quickly give up or get depressed and melancholy.",
                  "\n*  You require encouragement and appreciation.",
                  "\n*  Your deep sensitivity presents you with valuable and illuminating intuitions, especially regarding those you care for.",
                  "\n*  You often make excellent psychics, and usually have a yearning after the mysterious.",
                  "\n*  You should never marry young, for your nature seems to change at different stages of life.",
                  "\n*  You may reach very high exalted positions.",
                  "\n*  In your home life you usually go through a great deal of trouble."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciicancer();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    /*if(y==6&&x==21,22,23,24,25,26,27)
                    {
                        cusp(3);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>37)
                                        break;
                                    printf("\n\n%s",can[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    cancer(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciicancer();
                    fortunes();
                    cancer(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciicancer();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*4);
                                 delay(3);
                                 printf("%d\t",x+4);
                                 delay(3);
                                 printf("%d\t",x*16/9);
                                 delay(3);
                                 printf("%d\t",x*(x%10));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    cancer(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciicancer();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND ARIES LOVE COMPATIBILITY");
                                compat(4-1);
                                cancer(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND TAURUS LOVE COMPATIBILITY");
                                compat(15-1);
                                cancer(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND GEMINI LOVE COMPATIBILITY");
                                compat(25-1);
                                cancer(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND CANCER LOVE COMPATIBILITY");
                                compat(34-1);
                                cancer(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND LEO LOVE COMPATIBILITY");
                                compat(35-1);
                                cancer(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND VIRGO LOVE COMPATIBILITY");
                                compat(36-1);
                                cancer(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND LIBRA LOVE COMPATIBILITY");
                                compat(37-1);
                                cancer(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND SCORPIO LOVE COMPATIBILITY");
                                compat(38-1);
                                cancer(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(39-1);
                                cancer(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND CAPRICORN LOVE COMPATIBILITY");
                                compat(40-1);
                                cancer(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND AQUARIUS LOVE COMPATIBILITY");
                                compat(41-1);
                                cancer(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciicancer();
                                details(a,s,y);
                                gotoxy(5,8);printf("CANCER AND PISCES LOVE COMPATIBILITY");
                                compat(42-1);
                                cancer(x,y,a,s);
                                break;
                        }
                    cancer(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    cancer(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }



    }


void leo(int x,int y,char *a, char s)     //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciileo();
        char *le[]={"\n*  You always aim to get above the common herd of humanity.",
                    "\n*  You are naturally attracted to strong personalities.",
                    "\n*  You will forgive any fault in the people you like so long as you have individuality and purpose.",
                    "\n*  You are usually generous, kind, and openhearted.",
                    "\n*  You forgive easily and never hold a grudge.",
                    "\n*  You are very much attuned to the life giving properties of our Sun itself.",
                    "\n*  You are typically flamboyant and generous with tremendous charm and a magnanimous spirit.",
                    "\n*  You are overflowing with sympathy, and are generally generous to a fault.",
                    "\n*  You feel isolated and lonely in life, and if not actively employed in some work or purpose you become melancholy and despondent.",
                    "\n*  You are natural leader and chief.",
                    "\n*  You don’t easily become friends with other horoscopes",
                    "\n*  You are inclined to suffer from headache, trouble with the eyes and other things concerned the head.",
                    "\n*  You are liable to get cuts and wounds in the head, and you usually run danger from fire.",
                    "\n*  You are natural leader and chief.In reality the supervising position is what you aspire to.",
                    "\n*  You are really intelligent and magnetic. That fact attracts others, but you should not try to dominate everyone.",
                    "\n*  Your astrological symbol \"Lion\" is considered to be the king of animals. But, as well as all governors, that people should learn to wear the crown modestly. you should remember your large sin - vanity.",
                    "\n*  You are quite a bit choosy with friends.",
                    "\n*  You are best in a one-to-one friendship where your ego is less likely to intrude upon the relationship.",
                    "\n*  You can find your most lasting friendships with people born in your own period or from March 21 to April 19-27 and, strange to say, all those people who were born on the 1st, 10th, 19th, or 28th of any month.",
                    "\n*  Your most suitable colors are all shades of yellow, orange, pale green, and white.",
                    "\n*  The birth stones for this period are topazes, amber, and rubies.",
                    "\n*  You are usually lucky in money matters, often having money given to you from unthought-of sources.",
                    "\n*  You crave love above all, and this is the one thing you seldom get.",
                    "\n*  You have the power to inspire others, and as leaders like Napoleon, born in this Sign.",
                    "\n*  You have an ability to lead your men through fire or death.",
                    "\n*  You usually have an extremely independent spirit; you detest control or being dictated to.",
                    "\n*  You have great tenacity of purpose and will power and if once you put your mind on some plan, purpose or position, you usually reach your goal in spite of every difficulty or obstacle.",
                    "\n*  Though full of ambition and enthusiasm, you have to admit to a lazy streak and, given the opportunity, will take the easy way out, especially when a situation offers little fun or glory.",
                    "\n*  You are usually very patient and long-suffering, but if once roused, you know no fear."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciileo();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    /*if(y==7&&x==23,24,25,26,27,28,29)
                    {
                        cusp(4);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>31)
                                        break;
                                    printf("\n\n%s",le[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    leo(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    asciileo();
                    details(a,s,y);
                    fortunes();
                    leo(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciileo();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*5);
                                 delay(3);
                                 printf("%d\t",x*12/8);
                                 delay(3);
                                 printf("%d\t",x*28/12);
                                 delay(3);
                                 printf("%d\t",x*(x%5));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    leo(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciileo();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND ARIES LOVE COMPATIBILITY");
                                compat(5-1);
                                leo(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND TAURUS LOVE COMPATIBILITY");
                                compat(16-1);
                                leo(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND GEMINI LOVE COMPATIBILITY");
                                compat(26-1);
                                leo(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND CANCER LOVE COMPATIBILITY");
                                compat(35-1);
                                leo(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND LEO LOVE COMPATIBILITY");
                                compat(43-1);
                                leo(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND VIRGO LOVE COMPATIBILITY");
                                compat(44-1);
                                leo(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND LIBRA LOVE COMPATIBILITY");
                                compat(45-1);
                                leo(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND SCORPIO LOVE COMPATIBILITY");
                                compat(46-1);
                                leo(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(47-1);
                                leo(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND CAPRICORN LOVE COMPATIBILITY");
                                compat(48-1);
                                leo(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND AQUARIUS LOVE COMPATIBILITY");
                                compat(49-1);
                                leo(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciileo();
                                details(a,s,y);
                                gotoxy(5,8);printf("LEO AND PISCES LOVE COMPATIBILITY");
                                compat(50-1);
                                leo(x,y,a,s);
                                break;
                        }
                    leo(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    leo(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();

        }
    }


void virgo(int x,int y,char *a, char s)       //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciivirgo();
        char *vir[]={"\nThe emblem of Virgo, a virgin holding sheaves of wheat in her hands symbolizes wisdom, garnered in the fields of experience.",
                    "\n*  You are shy and idealistic.",
                    "\n*  You are quick thinking and observant.",
                    "\n*  You define pure modesty.",
                    "\n*  You can't bear to be taken care of, you prefer to take care of others.",
                    "\n*  You are/will be successful in life.",
                    "\n*  You have keen, good intellects, are very discriminating about those with whom you associate.",
                    "\n*  In all business matters you have good judgment, and are not easily imposed upon or deceived.",
                    "\n*  You are usually materialistic in your views of life.",
                    "\n*  You analyze and reason everything from your own way of thinking outwards.",
                    "\n*  You attracted to only that knowledge that can be applied usefully.",
                    "\n*  You will happily share information with anyone, if it confirms your own usefulness in the world.",
                    "\n*  You can become good literary critics, being quick to see the weak points.",
                    "\n*  You become critical with yourself as well as with circumstances, due to the effect of disappointing situations.",
                    "\n*  You have the strongly advanced analytical mind and all the time trying to glue labels on everything you see.",
                    "\n*  You have sharp feelings of taste, time, hearing and sense of smell.",
                    "\n*  You are pure and sinless.",
                    "\n*  Your heir amazing abilities to observe allow you to see all the human lacks.",
                    "\n*  Usually you do not like everything that you see, and you withdraw.",
                    "\n*  You have difficulty making friends.",
                    "\n*  You won't make the first step of friendship until you feel absolutely comfortable with people.",
                    "\n*  You can find your most lasting friendships with those born in your own Sign, also from April 20 to May 20-27.",
                    "\n*  You are less liable to diseases than persons born in any other part of the year.",
                    "\n*  You are always imagining yourself to have every illness that you may happen to read about."
                    "\n*  You are very refined in your tastes as far as food is concerned, and must have things nicely put before you or you will lose your appetites.",
                    "\n*  You make an effort to stay physically fit and you don't mind repetitive exercise routines.",
                    "\n*  You enjoy tennis, racquetball, swimming, sailing, fishing, and biking, even though athletically you are not overly competitive.",
                    "\n*  You are extremely sensitive to your surroundings; the least disharmony or annoyance affects your nervous system and upsets your digestive organs.",
                    "\n*  You have a tendency to have chest trouble, and to suffer from neuritis in the shoulder and arms.",
                    "\n*  If badly mated, or living under inharmonious marriage conditions, you easily fall into ill health or get extremely despondent.",
                    "\n*  You should never drink alcohol, as it seems to be more a poison to you than to any ether class.",
                    "\n*  Your most suitable colors are all very pale shades and silvery, shimmering materials.",
                    "\n*  The birth stones for you are emeralds, diamonds and pearls.",
                    "\n*  You are extremely fond of harmony in your surroundings, have excellent taste about your house and dress, and always want things in good taste, and elegant.",
                    "\n*  You are usually fastidious about your personal appearance.",
                    "\n*  You have a great respect for rank and position.",
                    "\n*  You are great supporter of the law and the law's decisions.",
                    "\n*  You usually develop this skill to improve yourself and your surroundings as you place great pride in tangible achievements.",
                    "\n*  You may spend part of your life heading off on detours and then suddenly emerge as someone with a remarkable sense of direction.",
                    "\n*  You can adjust easily to change once you find a way of fitting the new situation into your routine.",
                    "\n*  You are inclined to become wrapped up in yourself and your own ideas, and often become selfish in the close pursuit of your aims.",
                    "\n*  You are more capable of going to extremes in good and evil than any other type.",
                    "\n*  If you develop a love for money you will stick at nothing to acquire it, and this type is often considered cunning and crafty at the expense of others.",
                    "\n*  In love you are the most difficult to understand."
                    "\n*  For you love is not dramatic, emotional, or sentimental."
                    "\n*  Love for you is devotion and will include love of family, friends, and those less fortunate than he or she."
                    "\n*  There is no pretense involved in how you act or what you say."
                    "\n*  Marriage is a major commitment; you value your union as both a love relationship and a working partnership.",
                    "\n*  A warm relationship brings out the best in you because basically you are kind, devoted and very loyal.",
                    "\n*  Disappointment can harden you into a cynic and a skeptic."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciivirgo();
                    gotoxy(1,9);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,10);
/*                    if(y==8&&x==23,24,25,26,27,28,29)
                    {
                        cusp(5);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>52)
                                        break;
                                    printf("\n\n%s",vir[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    virgo(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciivirgo();
                    fortunes();
                    virgo(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciivirgo();
                    gotoxy(5,10);printf("------------------------------------------------------------------");
                    gotoxy(5,18);printf("------------------------------------------------------------------");
                    gotoxy(10,14);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*6);
                                 delay(3);
                                 printf("%d\t",x+8);
                                 delay(3);
                                 printf("%d\t",x*39/15);
                                 delay(3);
                                 printf("%d\t",x-(x/10));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    virgo(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciivirgo();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND ARIES LOVE COMPATIBILITY");
                                compat(6-1);
                                virgo(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND TAURUS LOVE COMPATIBILITY");
                                compat(17-1);
                                virgo(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND GEMINI LOVE COMPATIBILITY");
                                compat(27-1);
                                virgo(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND CANCER LOVE COMPATIBILITY");
                                compat(36-1);
                                virgo(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND LEO LOVE COMPATIBILITY");
                                compat(44-1);
                                virgo(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND VIRGO LOVE COMPATIBILITY");
                                compat(51-1);
                                virgo(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND LIBRA LOVE COMPATIBILITY");
                                compat(52-1);
                                virgo(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND SCORPIO LOVE COMPATIBILITY");
                                compat(53-1);
                                virgo(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(54-1);
                                virgo(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND CAPRICORN LOVE COMPATIBILITY");
                                compat(55-1);
                                virgo(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND AQUARIUS LOVE COMPATIBILITY");
                                compat(56-1);
                                virgo(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciivirgo();
                                details(a,s,y);
                                gotoxy(5,10);printf("VIRGO AND PISCES LOVE COMPATIBILITY");
                                compat(57-1);
                                virgo(x,y,a,s);
                                break;
                        }
                    virgo(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    virgo(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }


    }


void libra(int x,int y,char *a, char s)       //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciilibra();
        char *lib[]={"\n*  You are rarely lazy.",
                     "\n*  You work hard, and also demand that your partners work just as hard.",
                     "\n*  You have a strong sense of justice and fair play.",
                     "\n*  It is pretty unusual for you to express anger, but when you do it is usually a storm.",
                     "\n*  You are extremely positive and decisive in all your thoughts and actions.",
                     "\n*  You have great foresight and intuition.",
                     "\n*  You are generally seen at your best when acting on first impressions.",
                     "\n*  You are usually in control of fear and look calm, collected, and in charge of the situation.",
                     "\n*  You are good natured and loving, you enjoy talking to people.",
                     "\n*  You can be very attentive listener.",
                     "\n*  You are often very psychic and would make very devout spiritualists, theosophists, and occultists. ",
                     "\n*  You have the desire to reason out everything that your love of exact proof usually overwhelms your psychic powers.",
                     "\n*  You are often very successful as speculators.",
                     "\n*  You have little regard for the value of money.",
                     "\n*  You fall in love, and start thinking of marriage.",
                     "\n*  You seldom find happiness in marriage.",
                     "\n*  You appear to weigh and balance matters too much.",
                     "\n*  You invariably give back in kind what you have been given.",
                     "\n*  You are really successful in making large circles of friends and acquaintances.",
                     "\n*  You are the sensitive persons who appreciate good manners, harmless wit.",
                     "\n*  You are very social.",
                     "\n*  You make good friends and great counselors.",
                     "\n*  You love giving parties.",
                     "\n*  You have talent for making people feel at ease.",
                     "\n*  You are inclined to suffer most from nerves and depression of spirits.",
                     "\n*  You suffer from pains in the lower back and kidneys.",
                     "\n*  You usually suffer from severe headaches.",
                     "\n*  It isn’t healthy for you to eat too-much sugary foods.",
                     "\n*  All shades of blue, violet, purple and mauve are more suitable colour for you.",
                     "\n*  The opal and the pearl are your birthstones.",
                     "\n*  You values peace at all costs, and very fair minded.",
                     "\n*  People like being around you.",
                     "\n*  You will seek for a compromise at events of dispute.",
                     "\n*  You are always trying mentally to balance things and get an even judgment.",
                     "\n*  You are often found in public life, but it is with your innate desire to adjust the balance of things by making laws for the betterment of your fellows.",
                     "\n*  You graciously accept praise for your achievements and will gladly give praise to others, when you deserve it.",
                     "\n*  You are at your best in personal relationships.",
                     "\n*  You strive for balance and harmony and are happiest when your environment is ordered and serene.",
                     "\n*  You are very good at science.",
                     "\n*  You would make an excellent doctor.",
                     "\n*  You will become masters of some particular line of study more than as general practitioners.",
                     "\n*  You are not reliable among people.",
                     "\n*  You are often accused of being two faced.",
                     "\n*  Beneath that charming exterior you are very self-centered, and insist on getting your own way.",
                     "\n*  You are the most quintessential romantics among the zodiac.",
                     "\n*  You have an idealistic view of love and togetherness."

                    };
        switch (zodmenu())
              {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciilibra();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    c=x-23;
/*                    if(y==9&&x==23,24,25,26,27,28,29 )
                    {
                        cusp(6);
                        printf("Enter any key....");
                        getch();
                    }*/

                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<5;i++)
                                {
                                    if(d*i>48)
                                        break;
                                    printf("\n\n%s",lib[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                        libra(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciilibra();
                    fortunes();
                    libra(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciilibra();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*7);
                                 delay(3);
                                 printf("%d\t",x+10);
                                 delay(3);
                                 printf("%d\t",x*49/29);
                                 delay(3);
                                 printf("%d\t",x+(x%5));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    libra(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciilibra();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND ARIES LOVE COMPATIBILITY");
                                compat(7-1);
                                libra(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND TAURUS LOVE COMPATIBILITY");
                                compat(18-1);
                                libra(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND GEMINI LOVE COMPATIBILITY");
                                compat(28-1);
                                libra(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND CANCER LOVE COMPATIBILITY");
                                compat(37-1);
                                libra(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND LEO LOVE COMPATIBILITY");
                                compat(45-1);
                                libra(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND VIRGO LOVE COMPATIBILITY");
                                compat(52-1);
                                libra(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND LIBRA LOVE COMPATIBILITY");
                                compat(58-1);
                                libra(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND SCORPIO LOVE COMPATIBILITY");
                                compat(59-1);
                                libra(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(60-1);
                                libra(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND CAPRICORN LOVE COMPATIBILITY");
                                compat(61-1);
                                libra(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND AQUARIUS LOVE COMPATIBILITY");
                                compat(62-1);
                                libra(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciilibra();
                                details(a,s,y);
                                gotoxy(5,8);printf("LIBRA AND PISCES LOVE COMPATIBILITY");
                                compat(63-1);
                                libra(x,y,a,s);
                                break;
                        }
                    libra(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    libra(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();

            }


    }


void scorpio(int x,int y,char *a, char s)     //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciiscorpio();
        char *scor[]={"\n*  You are usually filled with inherent contradiction.",
                      "\n*  The best and the worst seem to make you your chosen battlefield.",
                      "\n*  From spiritual and intellectual revelations, you want the edge on everybody else.",
                      "\n*  You are usually extremely pore-minded, virtuous, and religious.",
                      "\n*  You have great magnetic power, and as speakers appeal to the emotions and sentiments of your public more than to logic, but you sway your audiences as you choose.",
                      "\n*  In dangerous situations and in sudden crises you remain cool and very determined.",
                      "\n*  You drive yourself hard, and usually drive others unmercifully.",
                      "\n*  You despise weakness in yourself or in others.",
                      "\n*  Your worst fault is that you are too adaptable to the people with whom you come in contact.",
                      "\n*  You readily develop unusual clairvoyant powers.",
                      "\n*  You will often gain fame and distinction as writer, painter or poet.",
                      "\n*  You are natural philosopher, deep student of nature.",
                      "\n*  You observe and analyze other persons\' characters better than any other class.",
                      "\n*  You often have to go through a great deal of trouble, difficulty and sooner or later success and fame nearly always find you.",
                      "\n*  You have difficult or even tragical destiny.",
                      "\n*  You may be doomed to live suffering as it was.",
                      "\n*  You are self-destructive. It is a way of your development and realizations in this life.",
                      "\n*  You have a few friends and expect loyalty from you.",
                      "\n*  You tend to put on weight and are inclined to corpulence after reaching middle life.",
                      "\n*  You generally suffer from headaches.",
                      "\n*  You suffer from infections and fevers, along with various illnesses to do with what used to be called the secret parts.",
                      "\n*  At later part of life, the heart is also inclined to be your weakest organ, and you should be careful not to overstrain it in exercise, or in work.",
                      "\n*  The colors most suitable for you are all shades of crimson and blue.",
                      "\n*  The birth stones for you are the turquoise, the ruby, and all red stones.",
                      "\n*  You always lead double lives one for the eyes of the world and another for self.",
                      "\n*  In business and politics you have clever ideas, but you are best as advisers of others.",
                      "\n*  You usually excel in settling other people's quarrels and bringing enemies together to shake hands.",
                      "\n*  You make more friends or have more enemies than those of other zodiac signs",
                      "\n*  Your strong personality carries you through like a resistless wave.",
                      "\n*  You are interested in marriage and long-term commitment.",
                      "\n*  Relationships are a kind of mystery for you so anyone involved with you must prepare for profound changes in yourself, your mysterious partner and the relationship itself.",
                      "\n*  You should be encouraged to have ambition, for it is the one thing that will save you.",
                      "\n*  You’ll make any sacrifice or deny yourself any pleasure, and so accomplish more work than any other class.",
                      "\n*  You need to dominate relationships and rarely display your true feelings even at the most open and communicative moments.",
                      "\n*  Although you may not intentionally set out to be mysterious, you manage to appear enigmatic anyway.",
                      "\n*  You hate being crossed or manipulated, and can react to such treatment with sarcasm and vengefulness.",
                      "\n*  If you are a man, you are inclined to be dogmatic, and expect to rule but your influence over women is so great that you are almost always forgiven.",
                      "\n*  You generally become interested in occult matters."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciiscorpio();
                    gotoxy(1,9);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,10);
                    /*if(y==10&&x==23,24,25,26,27,28,29)
                    {
                        cusp(7);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>40)
                                        break;
                                    printf("\n\n%s",scor[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    scorpio(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciiscorpio();
                    fortunes();
                    scorpio(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciiscorpio();
                    gotoxy(5,10);printf("------------------------------------------------------------------");
                    gotoxy(5,18);printf("------------------------------------------------------------------");
                    gotoxy(10,14);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*8);
                                 delay(3);
                                 printf("%d\t",x+9);
                                 delay(3);
                                 printf("%d\t",x*60/38);
                                 delay(3);
                                 printf("%d\t",x+(x/3));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    scorpio(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciiscorpio();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND ARIES LOVE COMPATIBILITY");
                                compat(8-1);
                                scorpio(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND TAURUS LOVE COMPATIBILITY");
                                compat(19-1);
                                scorpio(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND GEMINI LOVE COMPATIBILITY");
                                compat(29-1);
                                scorpio(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND CANCER LOVE COMPATIBILITY");
                                compat(38-1);
                                scorpio(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND LEO LOVE COMPATIBILITY");
                                compat(46-1);
                                scorpio(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND VIRGO LOVE COMPATIBILITY");
                                compat(53-1);
                                scorpio(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND LIBRA LOVE COMPATIBILITY");
                                compat(59-1);
                                scorpio(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND SCORPIO LOVE COMPATIBILITY");
                                compat(64-1);
                                scorpio(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(68-1);
                                scorpio(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND CAPRICORN LOVE COMPATIBILITY");
                                compat(69-1);
                                scorpio(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND AQUARIUS LOVE COMPATIBILITY");
                                compat(70-1);
                                scorpio(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciiscorpio();
                                details(a,s,y);
                                gotoxy(5,10);printf("SCORPIUS AND PISCES LOVE COMPATIBILITY");
                                compat(71-1);
                                scorpio(x,y,a,s);
                                break;
                        }
                    scorpio(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    scorpio(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }

}


void saggitarius(int x,int y,char *a, char s)     //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciisaggitarius();
        char *sag[]={"\n*  You have an appetite for learning and travel.",
                     "\n*  You prefer to be footloose and fancy free.",
                     "\n*  You should become involved in a relationship you make it as enjoyable and as much fun as possible.",
                     "\n*  You are very gregarious, but will be glad to find the time for that special relationship.",
                     "\n*  You concentrate all your attention on whatever you are doing at the moment, and seem to see no other way but until your effort is made.",
                     "\n*  You are often the great workers; you never seem to tire until you drop with fatigue.",
                     "\n*  You would rather learn on your own, through travel and experience, than endure structured classroom environments and routine work assignments.",
                     "\n*  You are usually successful in business, but never feel yourself confined to any one line.",
                     "\n*  You follow the rule if you have been successful in some one thing there is no reason whatever that you must follow it through life.",
                     "\n*  You have an open minded and intellectual curiosity.",
                     "\n*  You are willing to learn about other people in an effort to understand you, while being trusting and open.",
                     "\n*  You are high spirited and congenial.",
                     "\n*  You are a gifted conversationalist, a wonderful storyteller, and a born entertainer.",
                     "\n*  You love to make your spouse successful and will sacrifice everything to that end.",
                     "\n*  You refuse to let the relationship get stale and always look for ways to bring excitement into the union.",
                     "\n*  You do not hesitate to give an honest opinion, which can seem tactless.",
                     "\n*  You venerate law and order and make the best of mothers.",
                     "\n*  Even when successful, you never cease to be actively employed inactivity for that would mean despondency and an early decay.",
                     "\n*  You show such qualities as reliance, affability and courtesy.",
                     "\n*  You come along with the people easily, but it is much more difficult for you to become close friends.",
                     "\n*  You usually love sports, nature, traveling , to learn and to win.",
                     "\n*  You likel doing all in the company surrounded by close people.",
                     "\n*  Your mind and body are both requiring constant intellectual, emotional and physical loading.",
                     "\n*  You are the nicest friends in the zodiac.",
                     "\n*  You are not a meet-for-coffee friend.",
                     "\n*  You are doers and make the best travel companions.",
                     "\n*  You will be more inclined to suffer from rheumatism than from any other disease.",
                     "\n*  You will be likely to suffer from a delicacy of the throat and lungs, and skin troubles.",
                     "\n*  Physical problems are apt to be the result of unrestricted diet or an over-indulgent pursuit of other pleasures.",
                     "\n*  You may subject to an overpowering urge to gamble, which can be ruinous.",
                     "\n*  Especially in your latter years, you suffer from the nervous system.",
                     "\n*  Most suitable colors are all shades of violet and mauve and violet-purple.",
                     "\n*  Most favorable birthstones are amethysts and sapphires.",
                     "\n*  You are devoted to music.",
                     "\n*  You find success in writing, publishing, TV, communications and enterprises.",
                     "\n*  You are, however, when inclined to go to extremes in all things, and make sudden decisions, or change your minds rapidly.",
                     "\n*  You may have regrets, but are too proud to acknowledge your error.",
                     "\n*  One of your great difficulties lies within relationships.",
                     "\n*  You are completely able to be faithful to two people at once.",
                     "\n*  You always marry on impulse and regret it afterwards.",
                     "\n*  You will often pass for models of married happiness even when you are the most wretched."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciisaggitarius();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    /*if(y==11&&x==23,24,25,26,27,28,22)
                    {
                        cusp(8);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>43)
                                        break;
                                    printf("\n\n%s",sag[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    saggitarius(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciisaggitarius();
                    fortunes();
                    saggitarius(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciisaggitarius();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*9);
                                 delay(3);
                                 printf("%d\t",x+2);
                                 delay(3);
                                 printf("%d\t",x*35/15);
                                 delay(3);
                                 printf("%d\t",x+(x/4));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    saggitarius(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciisaggitarius();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND ARIES LOVE COMPATIBILITY");
                                compat(9-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND TAURUS LOVE COMPATIBILITY");
                                compat(20-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND GEMINI LOVE COMPATIBILITY");
                                compat(30-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND CANCER LOVE COMPATIBILITY");
                                compat(39-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND LEO LOVE COMPATIBILITY");
                                compat(47-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND VIRGO LOVE COMPATIBILITY");
                                compat(54-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND LIBRA LOVE COMPATIBILITY");
                                compat(60-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND SCORPIO LOVE COMPATIBILITY");
                                compat(65-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(69-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND CAPRICORN LOVE COMPATIBILITY");
                                compat(70-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND AQUARIUS LOVE COMPATIBILITY");
                                compat(71-1);
                                saggitarius(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciisaggitarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("SAGGITARIUS AND PISCES LOVE COMPATIBILITY");
                                compat(72-1);
                                saggitarius(x,y,a,s);
                                break;
                        }
                    saggitarius(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    saggitarius(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }


    }


void capricorn(int x,int y,char *a, char s)       //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciicapricorn();
        char *cap[]={"\n*  You are usually ambitious.",
                     "\n*  You marked by a purposeful pursuit of your destiny.",
                     "\n*  You have a sense of purpose and a great faith in your own ability.",
                     "\n*  You are usually mentally strong.",
                     "\n*  You generally aren’t understood by other people.",
                     "\n*  You are fits as thinkers, reasoners, and usually successful in business or any form of government work.",
                     "\n*  Your sign is a pushy Cardinal Earth sign ruled by Saturn, the planet of adversity.",
                     "\n*  You are very independent and high-minded in all what you do.",
                     "\n*  You detest being under the restraint of others.",
                     "\n*  You will grind anything that gets in your way down to dust.",
                     "\n*  Time is definitely on your side.",
                     "\n*  You are leader in whatever you are engaged, or else you are inclined to lose your interest in what you do.",
                     "\n*  You are serious individual.",
                     "\n*  Beneath your reserve there is a sensitive and sympathetic person and anyone who needs a strong shoulder to lean on.",
                     "\n*  Once you fall in love and commit, you’re typical unlikely to jeopardize the union.",
                     "\n*  You place great importance on personal happiness.",
                     "\n*  You are a mixed bag of both greatness and evil.",
                     "\n*  You can be guileful and artful working everything out delicately.",
                     "\n*  It is difficult to catch you red-handed.",
                     "\n*  You always have the purpose, and trying to reach it, using all possible means.",
                     "\n*  You sweep away absolutely everything working precisely, definitely and rigidly while getting to your target.",
                     "\n*  You are loyal, kind, caring, and often very generous to friends.",
                     "\n*  You gain something special from long-term friendships",
                     "\n*  You usually make the most solid and best friendships with people who are born in your own period.",
                     "\n*  You are more inclined to suffer from rheumatism.",
                     "\n*  You are more inclined to suffer from pains in the feet.",
                     "\n*  You are more inclined to suffer from indigestion.",
                     "\n*  All tones of grey, all ranges of violet and purple, and also black are most suitable colours for you.",
                     "\n*  The birth stones for you are moon-stones, pearls, and amethysts.",
                     "\n*  Your more striking characteristics is your subtle sense of humor.",
                     "\n*  You have non-typical ideas of love, duty, and social position.",
                     "\n*  You are often considered to be \"odd,\" and do not fit in easily with your neighbors or colleagues.",
                     "\n*  Your basic concern is for security and to understand the feelings and needs of other people.",
                     "\n*  You have a great sense of pride and will not forgive anyone who belittles or slights you.",
                     "\n*  You are often excellent speakers.",
                     "\n*  You may seem to be cold, you have warm hearts towards suffering.",
                     "\n*  Fear is at the root of all your troubles.",
                     "\n*  You worship intellectual, clever people.",
                     "\n*  You rarely interfere with the affairs of others, but you’ll will never stand interference from others.",
                     "\n*  Government or responsible positions of control and management of others is the best work for you.",
                     "\n*  You are inclined to excite bitter opposition but bear up against it with a philosophic spirit.",
                     "\n*  Your home and family life is very often a troubled one.",
                     "\n*  You frequently feel \"lonely-hearted\" and misunderstood, even if it is not so.",
                     "\n*  You respond well to domestic life because it proves stability."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciicapricorn();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    /*if(y==12&&x==23,24,25,26,27,28,22)
                    {
                        cusp(9);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>46)
                                        break;
                                    printf("\n\n%s",cap[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    capricorn(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciicapricorn();
                    fortunes();
                    capricorn(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciicapricorn();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*10);
                                 delay(3);
                                 printf("%d\t",x+x/8);
                                 delay(3);
                                 printf("%d\t",x*32/6);
                                 delay(3);
                                 printf("%d\t",x-(x%5));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    capricorn(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciicapricorn();
                    switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND ARIES LOVE COMPATIBILITY");
                                compat(10-1);
                                capricorn(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND TAURUS LOVE COMPATIBILITY");
                                compat(21-1);
                                capricorn(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND GEMINI LOVE COMPATIBILITY");
                                compat(31-1);
                                capricorn(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND CANCER LOVE COMPATIBILITY");
                                compat(40-1);
                                capricorn(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND LEO LOVE COMPATIBILITY");
                                compat(48-1);
                                capricorn(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND VIRGO LOVE COMPATIBILITY");
                                compat(55-1);
                                capricorn(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND LIBRA LOVE COMPATIBILITY");
                                compat(61-1);
                                capricorn(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND SCORPIO LOVE COMPATIBILITY");
                                compat(66-1);
                                capricorn(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(70-1);
                                capricorn(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND CAPRICORN LOVE COMPATIBILITY");
                                compat(73-1);
                                capricorn(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND AQUARIUS LOVE COMPATIBILITY");
                                compat(74-1);
                                capricorn(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciicapricorn();
                                details(a,s,y);
                                gotoxy(5,8);printf("CAPRICORN AND PISCES LOVE COMPATIBILITY");
                                compat(75-1);
                                capricorn(x,y,a,s);
                                break;
                        }
                    capricorn(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    capricorn(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();
            }

    }


void aquarius(int x,int y,char *a, char s)       //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciiaquarius();
        char *aquar[]={"\n*  You have great desire for material gain.",
                       "\n*  You are tireless worker and are willing to work for what you want.",
                       "\n*  You do not demand more than your fair share.",
                       "\n*  You read character instinctively, and for this reason you \"see through\" people too easily to be really happy.",
                       "\n*  You are not demonstrative in affection, but feel very deeply.",
                       "\n*  You are usually high-strung, and your nerves are generally overwrought.",
                       "\n*  You often lose control and then say or do things that you bitterly regret later.",
                       "\n*  You are generally very active for the public good, and often give all you have to relieve the distress of others.",
                       "\n*  You are interested in science's advanced achievements. For example - computers.",
                       "\n*  You love to use any modern technical achievements.",
                       "\n*  The inner world of people who were born under the sign of The Aquarias is very unstable.",
                       "\n*  You are usually moody.",
                       "\n*  Though you love everything new you can find there something old.",
                       "\n*  You tend to collect friends the way some people put together an art collection.",
                       "\n*  The typical AQUARIAN may have so many friends, but very few confidants.",
                       "\n*  In real friendship or love you get on best with those born from May 21 to June 20, October 20 to 27, and, as a rule, with those who were born in November.",
                       "\n*  You are inclined to suffer most from the stomach, often through the nerves of the stomach in some peculiar manner that is difficult to relieve with ordinary medicine.",
                       "\n*  Bad circulation often troubles You and there is often some delicacy of the eyes.",
                       "\n*  The most favorable colors for you are all shades of what are known as \"electric shades,\" as electric blues and electric grays.",
                       "\n*  The birth stones for the period are sapphires, pink topazes, and moonstones.",
                       "\n*  You are good thinker, and are very successful when it comes to debate and argument, and difficult to convince.",
                       "\n*  You are excellent in business and finance when you apply your minds to such things, but usually you are more successful for others, and make more money for other people than for yourself.",
                       "\n*  You are a seeker of knowledge, rational, open-minded, gifted with breadth of vision.",
                       "\n*  If you manage to overcome your sensitiveness and developed your will-power, there is no position you would not be able to attain.",
                       "\n*  You are usually successful in some large sphere of action, where you can feel your responsibilities for others.",
                       "\n*  As an idealist, AQUARIANS would like to see that everybody is happy and your ambition is to do something important and meaningful.",
                       "\n*  You take a great interest in public meetings, gatherings of people, and public ceremonies.",
                       "\n*  In spite of the fact that ACQUARIANS love theatres and concerts, and like to be where crowds of people congregate, you often feel lonely.",
                       "\n*  If born with money, you rarely show who you are.",
                       "\n*  You are inclined to let your opportunities slip, or realize you only when it is too late.",
                       "\n*  If you happen to belong to the lower order of humanity you are inclined to lose all sense of honor and principle, and are extremely unreliable, tricky in money matters, dishonest, and unscrupulous in gaining what you desire.",
                       "\n*  As a lover you are full of surprises.",
                       "\n*  You simply cannot be happy or fulfilled unless you are free to do as you like.",
                       "\n*  No matter how deeply in love you may be, you are never willing to sacrifice your autonomy, but you always put honesty ahead of romance.",
                       "\n*  In general, it is not true that all people who were born in this time are evil people."
                        };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciiaquarius();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
                    /*if(y==1&&x==23,24,25,26,20,21,22)
                    {
                        cusp(10);
                        printf("Enter any key....");
                        getch();
                    }*/
                    d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>37)
                                        break;
                                    printf("\n\n%s",aquar[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    aquarius(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciiaquarius();
                    fortunes();
                    aquarius(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciiaquarius();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*11);
                                 delay(3);
                                 printf("%d\t",x*x%10);
                                 delay(3);
                                 printf("%d\t",x*20/9);
                                 delay(3);
                                 printf("%d\t",x-(x%6));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    aquarius(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciiaquarius();
                     switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND ARIES LOVE COMPATIBILITY");
                                compat(11-1);
                                aquarius(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND TAURUS LOVE COMPATIBILITY");
                                compat(22-1);
                                aquarius(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND GEMINI LOVE COMPATIBILITY");
                                compat(33-1);
                                aquarius(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND CANCER LOVE COMPATIBILITY");
                                compat(41-1);
                                aquarius(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND LEO LOVE COMPATIBILITY");
                                compat(49-1);
                                aquarius(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND VIRGO LOVE COMPATIBILITY");
                                compat(56-1);
                                aquarius(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND LIBRA LOVE COMPATIBILITY");
                                compat(62-1);
                                aquarius(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND SCORPIO LOVE COMPATIBILITY");
                                compat(67-1);
                                aquarius(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(71-1);
                                aquarius(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND CAPRICORN LOVE COMPATIBILITY");
                                compat(74-1);
                                aquarius(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND AQUARIUS LOVE COMPATIBILITY");
                                compat(76-1);
                                aquarius(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciiaquarius();
                                details(a,s,y);
                                gotoxy(5,8);printf("aquarius AND PISCES LOVE COMPATIBILITY");
                                compat(77-1);
                                aquarius(x,y,a,s);
                                break;
                        }
                    aquarius(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    aquarius(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();

            }

    }


void pisces(int x,int y,char *a, char s)      //lycky numbers, about yourself,fortunes
    {
        system("cls");
        int d,c,i,j=1;
        details(a,s,y);
        asciipisces();
        char *pie[]={"\n*  You are kind and gullible.",
                     "\n*  You cannot hurt anyone directly.",
                     "\n*  You are adventurous, ambitious, impulsive, enthusiastic and full of energy.",
                     "\n*  You are a pioneer both in thought and action.",
                     "\n*  You are very open to new ideas and a lover of freedom.",
                     "\n*  You possess a curiously natural understanding, which you do not obtain from books or study.",
                     "\n*  You easily acquire, or rather absorb, knowledge, especially of the history of countries, travel, research, and like subject.",
                     "\n*  You are usually over-anxious about money matters, and inclined to worry about what your future position in life may be.",
                     "\n*  You have a dislike and dread of being dependent on others more than from any love of money.",
                      "\n*  You are often classed as superstitious, the occult in all its forms appealing to you in one way or another.",
                     "\n*  You love to search out or investigate the unknown, the philosophical, or the mysterious.",
                     "\n*  There’s is no position in life you could not attain.",
                     "\n*  You will lie to save your feelings, or just to stake out a little privacy for yourself.",
                     "\n*  You can get addicted to booze, pills, or crackerjacks, so you really have to watch it.",
                     "\n*  You don't like to be alone too much, just a little, to get the peace back.",
                     "\n*  You are a musically or artisticly gifted person, and creativeness is inherent in you.",
                     "\n*  You are a great empathiser, always knowing how someone else is feeling.",
                     "\n*  You make a good councellor and a sensitive lover from you.",
                     "\n*  You enjoy solitude and like to get away from everyone and stay alone in order to regain your senses.",
                     "\n*  You find most lasting friendships than other zodiacs.",
                     "\n*  You are mostly inclined to suffer from nerves, insomnia, despondency and poor circulation, anemia.",
                     "\n*  You have intestinal trouble.",
                     "\n*  You should, if possible, live in bright, sunny, dry climates, and take a great amount of fresh air and exercise.",
                     "\n*  Most suitable color to you are all shades of mauve, violet, and purple.",
                     "\n*  The birth stones for you are agates, sapphires, amethysts, and emeralds",
                     "\n*  You can easily be irritated by slowness or moderation in your companions.",
                     "\n*  You though yourself sensitive, ride roughshod over the sensitivities of others.",
                     "\n*  You are often misunderstood and are often considered dose in money matters when in reality you might not be.",
                     "\n*  You often go back on your promises, especially on questions of money.",
                     "\n*  You should try to exercise an iron self-control, to discipline the qualities and tendencies of your character to the advantage.",
                     "\n*  You are more mentally ambitious than otherwise.",
                     "\n*  You may know your subject well in your mind, but you will hesitate and undervalue your own individuality.",
                     "\n*  You are inclined to brood and become melancholy.",
                     "\n*  You imagine all the world is against you and that you are being made martyrs of. Depression gets you.",
                     "\n*  You see life as a mystical whole.",
                     "\n*  You plan the evening on the basis of a reading from a fortune cookie.",
                     "\n*  You think you’re a bad person when things go wrong.",
                     "\n*  You are very devoted to your friends or to any cause you take up, provided you feel you are trusted or looked up to.",
                     "\n*  You are generally successful in ail positions of responsibility.",
                     "\n*  You are not inclined to push yourself forward, and usually wait to be asked before giving oyur opinions.",
                     "\n*  You are sometimes inclined to gratify your innate sense of luxury and self-indulgence.",
                     "\n*  You are likely to be too easy-going, to be too receptive to your surroundings, to become influenced by false friends",
                     "\n*  You might be inclined to become addicted to drugs or drink.",
                     "\n*  You find some purpose worth living for, you rise to the emergency as no others can.",
                     "\n*  You are the person that people meets sometimes in life who surprise you friends by your sudden change of character.",
                     "\n*  Other people think you are mysterious, or just confused, but a you can sort out other people's troubles.",
                     "\n*  You are shy.",
                     "\n*  You are highly emotional.",
                     "\n*  You are easily influenced by the people with whom you are thrown into contact.",
                     "\n*  Your emotional nature can lift other people up to any height.",
                     "\n*  You are really good in dealing with shipping and trade with foreign countries.",
                     "\n*  You have a curiously mystical side to your nature as well as the practical."

                    };
        switch (zodmenu())
            {
                case 1:
                    system("cls");
                    details(a,s,y);
                    asciipisces();
                    gotoxy(1,8);printf("HERE IS WHAT YOU ARE!!!\n");
                    gotoxy(1,9);
/*                    if(y==2&&x==23,24,25,19,20,21,22)
                    {
                        cusp(11);
                        printf("Enter any key....");
                        getch();
                    }*/
                   d=(x>10)?(x%10):x;
                    if(d==0)
                        d+=5;
                                for(i=1;i<6;i++)
                                {
                                    if(d*i>54)
                                        break;
                                    printf("\n\n%s",pie[(i*d)-1]);
                                    printf("\nEnter any key....");
                                    getch();
                                }
                                printf("\n\n\nWE HOPE THAT IT WAS HELPFUL");
                        printf("\n\n\n\n\nEnter any key.....");
                        getch();
                    pisces(x,y,a,s);
                    break;
                case 2:
                    system("cls");
                    details(a,s,y);
                    asciipisces();
                    fortunes();
                    pisces(x,y,a,s);
                    break;
                case 3:
                    system("cls");
                    details(a,s,y);
                    asciipisces();
                    gotoxy(5,8);printf("------------------------------------------------------------------");
                    gotoxy(5,16);printf("------------------------------------------------------------------");
                    gotoxy(10,12);printf("YOUR LUCKY NUMBERS ARE: %d\t",x*12/10);
                                 delay(3);
                                 printf("%d\t",x*x-9);
                                 delay(3);
                                 printf("%d\t",x*45/10);
                                 delay(3);
                                 printf("%d\t",x+(x%6));
                    gotoxy(50,22);printf("Enter any key to continue...");
                                 getch();
                    pisces(x,y,a,s);
                    break;
                case 4:
                    system("cls");
                    details(a,s,y);
                    asciipisces();
                                         switch(lovemenu())
                        {
                            case 1:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND ARIES LOVE COMPATIBILITY");
                                compat(12-1);
                                pisces(x,y,a,s);
                                break;
                            case 2:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND TAURUS LOVE COMPATIBILITY");
                                compat(23-1);
                                pisces(x,y,a,s);
                                break;
                            case 3:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND GEMINI LOVE COMPATIBILITY");
                                compat(34-1);
                                pisces(x,y,a,s);
                                break;
                            case 4:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND CANCER LOVE COMPATIBILITY");
                                compat(42-1);
                                pisces(x,y,a,s);
                                break;
                            case 5:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND LEO LOVE COMPATIBILITY");
                                compat(50-1);
                                pisces(x,y,a,s);
                                break;
                            case 6:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND VIRGO LOVE COMPATIBILITY");
                                compat(57-1);
                                pisces(x,y,a,s);
                                break;
                            case 7:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND LIBRA LOVE COMPATIBILITY");
                                compat(63-1);
                                pisces(x,y,a,s);
                                break;
                            case 8:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND SCORPIO LOVE COMPATIBILITY");
                                compat(68-1);
                                pisces(x,y,a,s);
                                break;
                            case 9:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND SAGGITARIUS LOVE COMPATIBILITY");
                                compat(72-1);
                                pisces(x,y,a,s);
                                break;
                            case 10:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND CAPRICORN LOVE COMPATIBILITY");
                                compat(75-1);
                                pisces(x,y,a,s);
                                break;
                            case 11:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND AQUARIUS LOVE COMPATIBILITY");
                                compat(77-1);
                                pisces(x,y,a,s);
                                break;
                            case 12:
                                system("cls");
                                asciipisces();
                                details(a,s,y);
                                gotoxy(5,8);printf("PISCES AND PISCES LOVE COMPATIBILITY");
                                compat(78-1);
                                pisces(x,y,a,s);
                                break;
                        }
                    pisces(x,y,a,s);
                    break;
                case 5:
                    fflush(stdin);
                    int d=password();
                    if(d==1)
                        admintools();
                    pisces(x,y,a,s);
                    break;
                case 6:
                    exit(0);
                default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(3);
                    main();

            }

    }
