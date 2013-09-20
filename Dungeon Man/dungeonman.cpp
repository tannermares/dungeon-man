#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

//******************************* CLASSES **************************************

class PlayerInfo
{
      private:
          
          
              
      public:
             string firstName, lastName, placeOfPurchase, emailAddress;
             double pricePaid;
             
         void setRegistrationInfo()
         {
               cout << "Please enter your first name: ";
               getline(cin, firstName);
               cout << "\n";
               cout << "Please enter your last name: ";
               getline(cin, lastName);
               cout << "\n";
               cout << "Please enter your e-mail address: ";
               getline(cin, emailAddress);
               cout << "\n";
               cout << "Please enter amount you paid for game: ";
               cin >> pricePaid;
               cout << "\n";
               
               setRegisterToFile();
               
               cout << "\n\n";
               system("pause");
               system("clear");
         }
             
         void setRegisterToFile()
         {
              ofstream regFile;
              regFile.open("c:\\registration info.txt");
              if (!regFile)
              {
                 cout << " Error opening file. Cannot register at this time.\n";
              }
              else
              {
                 regFile << "First Name: " << firstName << endl;
                 regFile << "Last Name: " << lastName << endl;
                 regFile << "Email address: " << emailAddress << endl;
                 regFile << "Price Paid: " << pricePaid << endl;
         
                 regFile.close();
              }
         }
             
};
             

//*************************** GLOBAL VARIABLES *********************************

string action, object, playAgain;
bool stillPlaying = true;
int getScroll, getFlask, getTrinket, score;

//****************************** PROTOTYPES ************************************

void splashScreen();
void mainRoom();
void northRoom();
void southRoom();
void dennisRoom();
void goError();
void lookError();
void getError();
void elseError();

//********************************* MAIN ***************************************
int main()
{
//system ("Color 0A");

       do {
          splashScreen();
          mainRoom();
       } while (stillPlaying);      
       return 0;
}
//______________________________________________________________________________
//|                              FUNCTIONS                                     |
//|____________________________________________________________________________|

//******************************************************************************
//*                            SPLASH SCREEN                                   *
//******************************************************************************
void splashScreen()
{
     PlayerInfo player1;
     
     string menuChoice;
     getFlask = 0;
     getScroll = 0;
     getTrinket = 0;
     score = 0;
     
     cout << "       Thy Dungeonman      \n"
             "                           \n"
             " /\\      /\\       / \\   \n"
             " ||/----\\||       | |     \n"
             " \\_------_/       | |     \n"
             "  / o  o \\        | |     \n"
             "  /  ||  \\     o__|_|__o  \n"
             "  / ---- \\      \\ --- /  \n"
             "  /\\/\\/\\/\\        | |  \n"
             "                  o-o      \n"
             "                           \n"
             "  Press any key to enter   \n"
             "        Yon Dungeon  \n\n\n\n"
             " \"r\" or \"R\" to register: ";
     
     getline(cin, menuChoice);
     
     if (menuChoice == "r" || menuChoice == "R")
     {
        player1.setRegistrationInfo();
        system("clear");
     }
     else
     {
        system("clear");
     }
     
}
//******************************************************************************
//*                             MAIN ROOM                                      *
//******************************************************************************
void mainRoom()
{
     bool mainRoomPlaying = true;
     string action, object;
     //stringstream commandStream;
     
     do {
     cout << "THY DUNGEONMAN            \n"
             "YOU ARE THY DUNGEONMAN! \n\n"
             "Ye find yeself in yon dungeon. Ye see a SCROLL.\n" 
             "Behind ye scroll is a FLASK. Obvious exits are NORTH," 
             "SOUTH and DENNIS.\n\n";
     cout << "\n\n\n\n\n\n\n\n) ";
     getline(cin, action);
     getline(cin, object);
       
       /*if (action == "DIE" || action == "die" || action == "Die")
       {
            cout << "That wasn't very smart. Play again? [Y/N].";
            getline(cin, playAgain);
            if (playAgain == "Y" || playAgain == "y")
            {           
               system("clear"); 
               mainRoom();
            }
            else
            {
               mainRoomPlaying = false;
               stillPlaying = false;
            } 
       }
      /* else if (action == "DANCE" || action == "dance" || action = "Dance")
       {
            cout << "Thou shaketh it a little, and it feeleth all right.";
            cin.get();
       }*/
       if (action == "go" || action == "GO" || action == "Go" || action == "gO") 
       {
           
           if (object == "NORTH" || object == "north" || object == "North")
           { 
             system("clear");
             northRoom();  
           }
           else if (object == "SOUTH" || object == "south" || object == "South")
           {
             system("clear");
             southRoom();   
           }
           else if (object == "DENNIS" || object == "dennis" || object == "Dennis")
           {
             system("clear");
             dennisRoom();
           } 
           else 
           {
             goError();
           }
           cout << "\n\n";
           system("pause");
       }    
       else if (action == "LOOK" || action == "look" || action == "Look")
       {
           
           if (object == "SCROLL" || object == "scroll" || object == "Scroll")
           {         
             cout << "Parchment, definitely parchment. I'd recognize it anywhere."; 
           }
           else if (object == "FLASK" || object == "flask" || object == "Flask")
           {
             cout << "Looks like you could quaff some serious mead out of that thing.";   
           }
           else 
           {
             lookError();
           }
           cout << "\n\n";
           system("pause"); 
       }
       else if (action == "GET" || action == "get" || action == "Get")
       {
            
            if ((getScroll == 0) && (object == "SCROLL" || object == "scroll" || object == "Scroll"))
            {
               score += 2;
               getScroll++;
               cout << "Ye takes the scroll and reads of it. It doth say:\n" 
                       "BEWARE, READER OF THE SCROLL, DANGER AWAITS TO THE\n"
                       "- The SCROLL disappears in thy hands with ye olde ZAP!";
            }
            else if ((getScroll == 1) && (object == "SCROLL" || object == "scroll" || object == "Scroll"))
            {
               score -= 1;
               getScroll++;
               cout << "Ye doth suffer from memory loss. YE SCROLL is no more. Honestly.";
            }
            else if ((getScroll == 2) && (object == "SCROLL" || object == "scroll" || object == "Scroll"))
            {
               cout << "Ye seeth nothing wheretofore it went ZAP." ;
            }
            else if ((getFlask <= 1) && (object == "FLASK" || object == "flask" || object == "Flask"))
            {
               getFlask++;      
               cout << "Ye cannot get the FLASK.\n"
                       "It is firmly bolted to a wall which is bolted to the \n"
                       "rest of the dungeon which is probably bolted to a castle. Never you mind.";
            }
            else if ((getFlask == 2) && (object == "FLASK" || object == "flask" || object == "Flask"))
            {
               score -= 1000;      
               cout << "Okay, okay. You unbolt yon FLASK and hold it aloft.\n" 
               "A great shaking begins. The dungeon ceiling collapses down on you,\n" 
               "crushing you in twain. Apparently, this was a load-bearing FLASK.\n" 
               "Your score was " << score << " Play again? [Y/N]";
               cout << "\n\n\n\n\n\n) ";
               getline(cin, playAgain);
               if (playAgain == "Y" || playAgain == "y")
               {           
                  system("clear"); 
                  splashScreen();
                  mainRoom();
               }
               else
               {
                  mainRoomPlaying = false;
                  stillPlaying = false;
               } 
            }
            /*else if (object == "HELP" || object == "help" || object == "Help")
            {
               system("clear");
               ifstream helpFile;
               string help;
               
               helpFile.open("c:\desktop\helpfile.txt");
               infile >> name;     
               
            }*/
            else
            {
              getError();
            }
            cout << "\n\n";
            system("pause");
       }            
       else
       {
         elseError();
         cout << "\n\n";
         system("pause");
       }
       system("clear");
       } while (mainRoomPlaying);    
}
//******************************************************************************
//*                             NORTH ROOM                                     *
//******************************************************************************
void northRoom()
{
     bool northRoomPlaying = true;
     
     do{
     cout << "You go NORTH through yon corrider. You arrive at parapets.\n" 
             "Ye see a rope. Obvious exits are SOUTH.\n\n";
     cout << "\n\n\n\n\n\n\n\n\n\n\n) ";
     getline(cin, action, ' ');
     getline(cin, object);
     /*if (action == "DIE" || action == "die" || action == "Die")
       {
            cout << "That wasn't very smart. Play again? [Y/N].";
            getline(cin, playAgain);
            if (playAgain == "Y" || playAgain == "y")
            {           
               system("clear"); 
               mainRoom();
            }
            else
            {
               northRoomPlaying = false;
               stillPlaying = false;
            } 
       }
       /*else if (action == "DANCE" || action == "dance" || action = "Dance")
       {
            cout << "Thou shaketh it a little, and it feeleth all right.";
            cin.get();
       }*/
       if (action == "go" || action == "GO" || action == "Go" || action == "gO") 
       {
           
           if (object == "SOUTH" || object == "south" || object == "South")
           {
             system("clear");
             mainRoom();   
           }
           else 
           {
             goError();
           }
           cout << "\n\n"; 
           system("pause");
       }
       else if (action == "LOOK" || action == "look" || action == "Look")
       {
           
           if (object == "PARAPETS" || object == "parapets" || object == "Parapets")
           {         
             cout << "Well, they're parapets. This much we know for sure."; 
           }
           else if (object == "ROPE" || object == "rope" || object == "Rope")
           {
             cout << "It looks okay. You've seen better.";   
           }
           else 
           {
             lookError();
           }
           cout << "\n\n";
           system("pause");
       }
       else if (action == "GET" || action == "get" || action == "Get")
       {
            
            if (object == "ROPE" || object == "rope" || object == "Rope")
            {
               score -= 1;
               cout << "You attempt to take ye ROPE but alas it is enchanted!\n" 
                       "It glows a mustard red and smells like a public privy.\n" 
                       "The ROPE wraps round your neck and hangs you from parapets.\n" 
                       "With your last breath, you wonder what parapets are.\n"
                       "GAME OVER. Your score was " << score << " Play again? (Y/N)";
               cout << "\n\n\n\n\n\n) ";
               getline(cin, playAgain);
               if (playAgain == "Y" || playAgain == "y")
               {           
                  system("clear"); 
                  splashScreen();
                  mainRoom();
               }
               else
               {
                  northRoomPlaying = false;
                  stillPlaying = false;
               }   
            }
            else
            {
               getError();
            }
            cout << "\n\n";
            system("pause");
       }
       else
       {
       elseError();
       cout << "\n\n";
       system("pause");
       }
       system("clear");
       } while (northRoomPlaying);
             
}
//******************************************************************************
//*                             SOUTH ROOM                                     *
//******************************************************************************
void southRoom()
{
       bool southRoomPlaying = true;
     
       do {
       if (getTrinket == 0)
       {
          cout << "You head south to an enbankment. Or maybe a chasm. \n"
                  "You can't decide which. Anyway, ye spies a TRINKET.\n" 
                  "Obvious exits are NORTH.\n\n";
       }
       else if (getTrinket == 1)
       {
          cout << "Ye stand high above a canyon-like depression. \n"
                  "Obvious exits are NORTH.\n\n";
       }
       else if (getTrinket >= 2)
       {
          cout << "Thou hangeth out at an overlook. Obvious exits are NORTH.\n" 
                  "I shouldn't have to tell ye there is no TRINKET.\n\n";
       }
       cout << "\n\n\n\n\n\n\n\n\n\n) ";    
       getline(cin, action, ' ');
       getline(cin, object);
       /*if (action == "DIE" || action == "die" || action == "Die")
       {
           cout << "That wasn't very smart. Play again? [Y/N].";
           getline(cin, playAgain);
           if (playAgain == "Y" || playAgain == "y")
           {           
              system("clear"); 
              mainRoom();
           }
           else
           {
             southRoomPlaying = false;
             stillPlaying = false;
           } 
       }
       /*else if (action == "DANCE" || action == "dance" || action = "Dance")
       {
            cout << "Thou shaketh it a little, and it feeleth all right.";
            cin.get();
       }*/
       if (action == "go" || action == "GO" || action == "Go" || action == "gO") 
       {
           
           if (object == "NORTH" || object == "north" || object == "North")
           { 
             system("clear");                 
             mainRoom();  
           }
           else 
           {
             goError();
           }
           cout << "\n\n";
           system("pause");
       }
       else if (action == "LOOK" || action == "look" || action == "Look")
       {
           
           if ((getTrinket == 0) && (object == "TRINKET" || object == "trinket" || object == "Trinket"))
           {         
             cout << "Quit looking! Just get it already."; 
           }
           else if ((getTrinket >= 1) && (object == "TRINKET" || object == "trinket" || object == "Trinket"))
           {         
             cout << "Just a bulge in thou pouchel at thist point."; 
           }
           else if ((getTrinket == 0) && (object == "AROUND" || object == "around" || object == "Around"))
           {
             cout << "Ye stand yeself close to a yet-unnamed escarpment. \n"
                     "Nonetheless, ye spies a TRINKET. Obvious exits are NORTH.";   
           }
           else if ((getTrinket == 1) && (object == "AROUND" || object == "around" || object == "Around"))
           {
             cout << "Ye stand high above a canyon-like depression. \n"
                     "Obvious exits are NORTH."; 
           }
           else if ((getTrinket >= 2) && (object == "AROUND" || object == "around" || object == "Around"))
           {
             cout <<  "Thou hangeth out at an overlook. Obvious exits are NORTH.\n" 
                      "I shouldn't have to tell ye there is no TRINKET.";   
           }
           else 
           {
             lookError();
           }
           cout << "\n\n";
           system("pause");
       }
       else if (action == "GET" || action == "get" || action == "Get")
       {
            
            if ((getTrinket == 0) && (object == "TRINKET" || object == "trinket" || object == "Trinket"))
            {
               getTrinket++;
               score += 2;
               cout << "Ye getsts yon TRINKET and discover it to be a bauble.\n" 
               "You rejoice at your good fortune. You shove the TRINKET in your pouchel.\n" 
               "It kinda hurts.";
            }
            else if ((getTrinket >= 1) && (object == "TRINKET" || object == "trinket" || object == "Trinket"))
            {
               getTrinket++;  
               score -= 1;
               cout << "Sigh. The trinket is in thou pouchel. Recallest thou?";
            }
            else
            {
               getError();
            }
            cout << "\n\n";
            system("pause");
       }
       else
       {
       elseError();
       cout << "\n\n";
       system("pause");
       }
       system("clear");
       } while (southRoomPlaying);
          
}
//******************************************************************************
//*                             DENNIS ROOM                                    *
//******************************************************************************
void dennisRoom()
{
     bool dennisRoomPlaying = true;
     
     do {
     cout << "Ye arrive at Dennis. He wears a sporty frock coat and a" 
             "long jimberjam.\n He paces about nervously.\n" 
             "Obvious exits are NOT DENNIS.\n\n";
     cout << "\n\n\n\n\n\n\n\n\n\n) ";
     getline(cin, action, ' ');
     getline(cin, object);
     
    /*if (action == "DIE" || action == "die" || action == "Die")
       {
            cout << "That wasn't very smart. Play again? [Y/N].";
            getline(cin, playAgain);
            if (playAgain == "Y" || playAgain == "y")
            {           
               system("clear"); 
               mainRoom();
            }
            else
            {
               dennisRoomPlaying = false;
               stillPlaying = false;
            } 
       }
       /*else if (action == "DANCE" || action == "dance" || action = "Dance")
       {
            cout << "Thou shaketh it a little, and it feeleth all right.";
            cin.get();
       }*/
       if (action == "NOT" || action == "not" || action == "Not") 
       {
           if (object == "DENNIS" || object == "dennis" || object == "Dennis")
           {
             system("clear");
             mainRoom();
           } 
           else 
           {
             goError();
           }
           cout << "\n\n";
           system("pause");
       }
       else if (action == "GO" || action == "go" || action == "Go")
       {
            goError();
            cout << "\n\n";
            system("pause");
       }
       else if (action == "TALK" || action == "talk" || action == "Talk")
       {
            if (object == "DENNIS" || object == "dennis" || object == "Dennis")
            {
               cout << "You engage Dennis in leisurely discussion.\n" 
                       "Ye learns that his jimberjam was purchased on sale " 
                       "at a discount market\n and that he enjoys pacing about "
                       "nervously. \n"
                       "You become bored and begin thinking about parapets."; 
            }
            else
            {
               elseError();
            }
            cout << "\n\n";
            system("pause");
       }
       else if (action == "LOOK" || action == "look" || action == "Look")
       {
           
          if (object == "DENNIS" || object == "dennis" || object == "Dennis")
          {         
            cout << "That jimberjam really makes the outfit." ; 
          }
          else if (object == "JIMBERJAM" || object == "jimberjam" || object == "Jimberjam")
          {         
            cout << "Man, that art a nice jimberjam."; 
          }
          else 
          {
            lookError();
          }
          cout << "\n\n";
          system("pause");
       }
       else if (action == "GIVE" || action == "give" || action == "Give")
       {
            if ((getTrinket >= 1) && (object == "TRINKET" || object == "trinket" || object == "Trinket" || 
                object == "TRINKET TO DENNIS" || object == "trinket to dennis" || 
                object == "Trinket to Dennis"))
            {
               cout <<  "A novel idea! You givst the TRINKET to Dennis and he happily\n" 
               "agrees to tell you what parapets are. With this new knowledge,\n" 
               "ye escapes from yon dungeon in order to search for new dungeons and to remain...\n" 
               "THY DUNGEONMAN!! You hath won! Congraturation!! Your score was: " << score << endl;  
            }
            else
            {
               elseError();
            }
            cout << "\n\n";
            system("pause");
        }
       else if (action == "GIVE" || action == "give" || action == "Give")
       {
            if ((getTrinket == 0) && (object == "TRINKET" || object == "trinket" || object == "Trinket" || 
                object == "TRINKET TO DENNIS" || object == "trinket to dennis" || 
                object == "Trinket to Dennis"))
            {
               cout << "Thou don'tst have a trinket to give. Go back to your tiny life.";  
            }
            else
            {
               elseError();
            }
            cout << "\n\n";
            system("pause");
        }          
        else
        {
        elseError();
        cout << "\n\n";
        system("pause");
        }
        system("clear");
        } while (dennisRoomPlaying);
}
//******************************************************************************
//*                           ERROR FUNCTIONS                                  *
//******************************************************************************  
void goError()
{      
     cout << "Thou cannotst go there. Who do you think thou art?\n" 
             "A magistrate?!";  
}
void lookError()
{
     cout <<  "It looketh pretty awesome.";
}
void getError()
{
     cout << "Thou cannotst get that. Quit making stuffeth up!" ;
}
void elseError()
{
     cout <<  "That does not computeth. Type HELP is thou needs of it.";
}

