#include <iostream>
#include <iomanip>

using namespace std;

int mark = 0;
int weapon = 0;
int compChoice;
string firstName = "";
string weaponText = "";

int chooseMark();
int chooseWeapon();
void endGame();
void gameSetup();
void getFirstName();
void startGame();
void screenSpace(int num);
int getComputerChoice();
void getHareem();
void getAnette();
void getMarlo();
void getDenise();

void startGame()
{
char ch;  
cout << "*************************************************************************************************\n";
cout << "**                             WELCOME TO MY GAME PROGRAM                       Jesse LeBoeuf  **\n";
cout << "*************************************************************************************************\n";
cout << "**      ______ __                                 __  __                                       **\n";
cout << "**     / ____// /_   ____   ____   _____ ___      \\ \\/ /____   __  __ _____                    **\n";
cout << "**    / /    / __ \\ / __ \\ / __ \\ / ___// _ \\      \\  // __ \\ / / / // ___/                    **\n";
cout << "**   / /___ / / / // /_/ // /_/ /(__  )/  __/      / // /_/ // /_/ // /                        **\n";
cout << "**   \\____//_/ /_/ \\____/ \\____//____/ \\___/      /_/ \\____/ \\__,_//_/                         **\n";
cout << "**                   ____                                                  /////////////////\\  **\n";
cout << "**                  / __ \\ _      __ ____                                 ((((((((((((((\\ \\\\   **\n";
cout << "**                 / / / /| | /| / // __ \\                                ))) ~~      ~~  (((  **\n";
cout << "**                / /_/ / | |/ |/ // / / /                                ((( (*)     (*) )))  **\n";
cout << "**                \\____/  |__/|__//_/ /_/                                 )))     <       (((  **\n";
cout << "**        ___        __                     __                            ((( '\\______/'  )))  **\n";
cout << "**       /   |  ____/ /_   __ ___   ____   / /_ __  __ _____ ___          )))\\___________/(((  **\n";
cout << "**      / /| | / __  /| | / // _ \\ / __ \\ / __// / / // ___// _ \\                _) (_         **\n";
cout << "**     / ___ |/ /_/ / | |/ //  __// / / // /_ / /_/ // /   /  __/               / \\_/ \\        **\n";
cout << "**    /_/  |_|\\__,_/  |___/ \\___//_/ /_/ \\__/ \\__,_//_/    \\___/               /(     )\\       **\n";
cout << "**                                                                            // )___( \\\\      **\n";
cout << "**                                                                            \\(     )//       **\n";
cout << "**                                                                              |  |  |        **\n";
cout << "**                                                                               | | |         **\n";
cout << "**                                                                               | | |         **\n";
cout << "**                                                                              _|_|_|_        **\n";
cout << "*************************************************************************************************\n";
cout << "**                          PRESS ENTER KEY TO START                                           **\n";
cout << "*************************************************************************************************\n";
// wait for any keypress then exit back to main
//cin.get();
ch = cin.get();
while (ch != '\n')
{
ch = cin.get();
}


//screenSpace(30);
}

void screenSpace(int num)
// pass in the number of rows needed to clear the screen - to be tuned to each screen
{
int i;
for (i=0; i<num; i++)
 {
  cout << "\n";
 } 
return;
}

int getComputerChoice()  // used for random number between 1 and 3
  {
    //randomize
    int seed = time(0);
    srand (seed);
    compChoice = (rand() % (3 -1 + 1)) + 1;
    return compChoice;
    }



void getFirstName()
{
cout << "Please type your First Name then hit <ENTER> : ";
cin >> firstName;
screenSpace(10);
return;
}

void gameSetup()
{
char ch; 
screenSpace(15);
cout << "*****************************************************************************************\n";
cout << "**                         GAME SETUP                                                  **\n";
cout << "*****************************************************************************************\n";
cout << "This is a text-based role playing game. The game will guide the user through a maze of \n";
cout << "decisions using menus to setup and describe the current situation. In all scenarios, \n";
cout << "there is at least one area where the game makes use of a randomly generated selection\n";
cout << "to guide the next path through the story. As in any great adventure, there are traps \n";
cout << "that can lead to disaster at which point the game will end. The user will have to \n";
cout << "play the game many times to explore and discover all of the different paths, and even\n";
cout << "then, the random paths will create many different outcomes. \n";
cout << "Enjoy the adventure! \n\n\n";
cout << "*****************************************************************************************\n";
cout << "\n";
cout << "You, " << firstName << ", are a 24 year old assasin. in the Olde Kingdom, a realm plagued \n";
cout << "by dirty politics and instability \n\n";
cout << "You were orphaned at age 6 and bought by the kingdom's most prestigious assasin - Zola \n\n";
cout << "For the last 18 years, Zola has pushed you to your physical and mental breaking point, \n";
cout << "preparing you for your debut. \n\n";
cout << "Zola hands you 4 envelopes and asks you to choose your mark... \n";
screenSpace(5);
cout << "Press <ENTER> to continue...";
cin.ignore();
ch = cin.get();
while (ch != '\n')
{
ch = cin.get();
}
return;
}

int chooseMark()
{
screenSpace(5);  
cout << "******************************************************************************************\n";
cout << "**                         Choose Your Mark                                             **\n";
cout << "******************************************************************************************\n";
cout << "**   __________________   __________________   __________________  __________________   **\n";
cout << "**  | \\      1       / | | \\      2       / | | \\      3       / || \\      4       / |  **\n";
cout << "**  | /\\____________/\\ | | /\\____________/\\ | | /\\____________/\\ || /\\____________/\\ |  **\n";
cout << "**  |/   Marlo Khan   \\| |/  Denise Roha   \\| |/  Hareem Gwore  \\||/ Anette Jabal   \\|  **\n";
cout << "**  |__________________| |__________________| |__________________||__________________|  **\n";
cout << "**                                                                                      **\n";
cout << "**                                                                                      **\n";
cout << "** 1.  Marlo Khan, the Minister of Defense who has swindled countless windows out of    **\n";
cout << "**       their savings to fund his extravagant lifestyle                                **\n";
cout << "**       (bounty placed by a concerned philanthropist)                                  **\n";
cout << "**                                                                                      **\n";
cout << "** 2.  Denise Roha, the madame of a brothel, who funds numerous trafficking rings       **\n";
cout << "**       (bounty placed by a former courtesan)                                          **\n";
cout << "**                                                                                      **\n";
cout << "** 3.  Hareem Gwore, Prince of the Olde Kingdom (bounty placed by a cabal of officials  **\n";
cout << "**        who feel Hareem is too sympathetic to the poor and vulnerable )               **\n";
cout << "**                                                                                      **\n";
cout << "** 4.  Anette Jabal, wife of the Minister of War (bounty placed by her husband, who     **\n";
cout << "**       wants her to \"disappear\" so he can marry his mistress)                         **\n";
cout << "**                                                                                      **\n";
cout << "******************************************************************************************\n";
cout << "**  Select the number for your mark, then hit <ENTER> : ";
//cin.clear();
cin >> mark;
        //while loop to determine user input validity
        while(1)  // Loop until input is good then break
        {
	       // If user enters something other than a whole number between 1 & 4
         if(cin.fail() || mark < 1 || mark > 4)
            {
            cin.clear();
            cin.ignore(1000,'\n');
            chooseMark();
            }
	      // If Input is good
        else if(!cin.fail());
        break;
        }
screenSpace(12);
return mark;
}


int chooseWeapon()
{
cout << "You have Chosen: "<< mark << "\n";
  if (mark==1 || mark==2)
   {
    cout <<  "This means you have aligned yourself with a righteous cause. \n";
   }
  else if (mark==3 || mark==4)
   {
    cout <<  "This means you have aligned yourself with some very dangerous people. \n";
   }
cout << "Zola is pleased with your choice - he stands to make quite a bit of money \n";
cout << "from your escapade. \n";
cout << "You are to set out tomorrow at dawn, but you must first choose a weapon... \n"; 
cout << "******************************************************************************************\n";
cout << "**                         Choose Your Weapon                                           **\n";
cout << "******************************************************************************************\n";
cout << "**                            .---.                                                     **\n";
cout << "**                            |---|                                                     **\n";
cout << "**                            |---|             +--^----------,-----,--,--------^-,     **\n";
cout << "**      ___________           |---|             | |||||||||   `-----'  |          O     **\n";
cout << "**     [___________]      .---^ - ^---.         '+---------------------^----------|     **\n";
cout << "**      |   .-.   |       :___________:          '\\_,---------,------^----------'       **\n";
cout << "**      | ,(o.o). |          |  |//|               / XXXXXX / |     /                   **\n";
cout << "**      |  >|X|<  |          |  |//|              / XXXXXX /   \\   /                    **\n";
cout << "**      |         |          |  |xx|             / XXXXXX / ------/                     **\n";
cout << "**      |         |          |  |//|            / XXXXXX /                              **\n";
cout << "**      |   XXX   |          |  |//|           /  XXXXXX /                              **\n";
cout << "**      `'''''''''`          |  |//|          (________(                                **\n";
cout << "**                           |  |.-|           `------'                                 **\n";
cout << "**                           |.-'**|                                                    **\n";
cout << "**                            \\***/                                                     **\n";
cout << "**                             \\*/                                                      **\n";
cout << "**                              V                                                       **\n";
cout << "**                                                                                      **\n";
cout << "**      1. POISON            2. DAGGER              3. PISTOL                           **\n";
cout << "******************************************************************************************\n";                  
cout << "Select the number for your weapon, then hit <ENTER> : ";
cin.clear();
cin >> weapon;
        //while loop to determine user input validity
        while(1)  // Loop until input is good then break
        {
        // If user enters something other than a whole number between 1 & 3
         if(cin.fail() || weapon < 1 || weapon > 3)
            {
            cin.clear();
            cin.ignore(1000,'\n');
            chooseWeapon();
            }
        // If Input is good
        else if(!cin.fail())
        break;
        }
//screenSpace(30);
if (weapon==1) 
  {
    weaponText = "Poison";
  }
else if (weapon==2)
  {
    weaponText = "Dagger";
  }
else if (weapon==3)
  {
    weaponText = "Pistol";
  }    
return weapon;
}


void endGame()
{
cout << "*****************************************************************************************\n";
cout << "**       ______ __                   __                                                **\n";
cout << "**      /_  __// /_   ____ _ ____   / /__ _____                                        **\n";
cout << "**       / /  / __ \\ / __ `// __ \\ / //_// ___/                                        **\n";
cout << "**      / /  / / / // /_/ // / / // ,<  (__  )                     /////////////////   **\n";
cout << "**     /_/  /_/ /_/ \\__,_//_/ /_//_/|_|/____/                     (((((((((((((( ////  **\n";
cout << "**                 ____                                           ))) ~~      ~~  (((  **\n";
cout << "**                / __/____   _____                               ((( (*)     (*) )))  **\n";
cout << "**               / /_ / __ \\ / ___/                               )))     <       (((  **\n";
cout << "**              / __// /_/ // /                                   ((( '\\______/`  )))  **\n";
cout << "**             /_/   \\____//_/                                    )))\\___________/(((  **\n";
cout << "**      ____   __               _                __                      _) (_         **\n";
cout << "**     / __ \\ / /____ _ __  __ (_)____   ____ _ / /                     / \\_/ \\        **\n";
cout << "**    / /_/ // // __ `// / / // // __ \\ / __ `// /                     /(     )\\       **\n";
cout << "**   / ____// // /_/ // /_/ // // / / // /_/ //_/                     // )___( \\\\      **\n";
cout << "**  /_/    /_/ \\__,_/ \\__, //_//_/ /_/ \\__, /(_)                      \\(     )//       **\n";
cout << "**                   /____/           /____/                            |  |  |        **\n";
cout << "**                                                                       | | |         **\n";
cout << "**                                                                      _|_|_|_        **\n";
cout << "**                                                                                     **\n";
cout << "*****************************************************************************************\n";
//cout << "**                          PRESS ENTER KEY TO EXIT                                      **\n";
//cout << "*****************************************************************************************\n";
// wait for any keypress then exit back to main
//cin.get();
//screenSpace(30);
exit(0);
return;
}

void getMarlo()

// State Building
{
  int choice = 0;
  cout << "\nMarlo is a very difficult target - the state building is the most \n";
  cout << "protected structure in the city. \n";
  cout << "You decide to stake out the building for a few days... \n";
  cout << "Five nights later, you make your move. \n";
  cout << "As a young courtier makes his way through the surrounding gardens, you\n";
  cout << "subdue him with a well-placed punch. \n";
  cout << "Taking his clothes and his packages, you walk quickly towards the building. \n";
  cout << "How will you infiltrate the walls of the state building ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**                  _ _.-'`-._ _                   1. Enter through the kitchen         **\n";
  cout << "**                 ;.'________'.;                                                       **\n";
  cout << "**      _________n.[____________].n_________                                            **\n";
  cout << "**     |\"\"_\"\"_\"\"_\"\"||==||==||==||\"\"_\"\"_\"\"_\"\"|      2. Enter with a group of             **\n";
  cout << "**     |\"\"_\"\"_\"\"_\"\"||==||==||==||\"\"_\"\"_\"\"_\"\"|        foriegn visitors                   **\n";
  cout << "**     |LI LI LI LI||LI||LI||LI||LI LI LI LI|                                           **\n";
  cout << "**     |.. .. .. ..||..||..||..||.. .. .. ..|                                           **\n";
  cout << "**     |LI LI LI LI||LI||LI||LI||LI LI LI LI|      3. Sneak in through a window         **\n";
  cout << "**  ,,;;,;;;,;;;,;;;,;;;,;;;,;;;,;;,;;;,;;;,;;,,                                        **\n"; 
  cout << "** ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;                                       **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER>:   ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  screenSpace(1);
   if (choice==1)  //kitchen
   {
    cout << "\nThe kitchen staff react strangely to you, whispering and scurrying about. \n";
    cout << "When you open the door that leads to the dining hall, you are immediately\n";
    cout << "apprehended by armed guards.\n";
    cout << "You are dragged away kicking and screaming, never to be seen again. \n";
    endGame();
   }
  else if (choice==2) // visitors
   {
    cout << "\nWhile some of the entourage looks at you strangely, you pass through the front\n";
    cout << "gates without a problem. \n";
    cout << "You break off from the group once inside, and head for the higher levels of the building. \n";
   }
  else if (choice==3) // window
  {
    cout << "\nDespite the effort involved in procuring a disguise, you decide to use a tried and \n";
    cout << "true method of entering an off-limits building - breaking a window. \n";
    cout << "Shockingly, this coarse method works, and you scramble inside with none the wiser. \n";
    cout << "You make a beeline towards the stairs, and head for the higher levels of the building. \n";  
   }
  cout << "\nAt the top of the stairs, there are three guards. \n";
  cout << "Eyeing you suspiciously, they ask where you are headed. \n";
  cout << "What do you say? \n\n ";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                       **\n";
  cout << "**    1. \"I'm supposed to deliver these packages to Major Waring.                        **\n";
  cout << "**         He will be displeased if I am late!\"                                          **\n";
  cout << "**                                                                                       **\n";
  cout << "**    2. \"I'm supposed to deliver these packages to Minister Shelia.                     **\n";
  cout << "**       She will be displeased if I am late!\"                                           **\n";
  cout << "**                                                                                       **\n";
  cout << "**    3. Think Fast and make a move on the guards                                        **\n";
  cout << "**                                                                                       **\n";
  cout << "*******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER>:  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
   if (choice==1)  //waring
   {
    cout << "\nThe largest of the three guards steps forward. \n";
    cout << "\"Major Waring is not here today. Let me see your credentials!\"  \n";
    cout << "You lunge forward, and attempt to take out the lead guard.\n";
    cout << "Once accomplished, you take on the other two guards simultaneously and easily defeat them. \n";
    cout << "You then head down the hallway. \n";
   }
  else if (choice==2) // sheila
   {
    cout << "\nThe largest of the three guards steps forward. \n";
    cout << "\"Minister Shelia is not here today. Let me see your credentials!\"  \n";
    cout << "You lunge forward, and attempt to take out the lead guard. \n";  
    cout << "While dealing with the leader, you fail to notice one of the other\n"; 
    cout << "guards driving a dagger into your back. You die of the floor in a pool of blood. \n";
    endGame();
   }
  else if (choice==3) // move
   {
    cout << "\nYou lunge forward, and attempt to take out the lead guard.\n";
    cout << "Once accomplished, you take on the other two guards simultaneously and easily defeat them. \n";
    cout << "You then head down the hallway \n";
   }
  cout << "\nYou come to a split in the hallway... \n";
  cout << "Which way do you go? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. Right                                                                          **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Left                                                                           **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER>:  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 2
    if(cin.fail() || choice < 1 || choice > 2)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
   if (choice==1)  //right
   {
    cout << "\nYou come across two doors. The game will randomly choose a door for you... \n";
    // create random result (1 or 2 ) to see if you go through steel or wood door
    getComputerChoice();  //remember that this randomly selects 1-3... so make 2=3
    // 1 = steel
    // 2 = wood
    // 3 = wood
    //cout << "The computer randomly selected " << compChoice << "\n\n";
    if (compChoice==1) // steel
     {
      cout << "The room is empty, dark, and windowless \n";
      cout << "When you turn to leave, you realize the door has locked behind you \n";
      cout << "You are never heard from again \n";
      endGame();
     }
    else if (compChoice==2 || compChoice==3) // wood
     {
      cout << "\nYou are now in a new hallway ...\n";
     }   
   }
  else if (choice==2) // left
   {
    cout << "\nYou come across two doors. The game will randomly choose a door for you... \n";
    getComputerChoice();  //remember that this randomly selects 1-3... so make 2=3
    // 1 = gold
    // 2 = silver
    // 3 = silver
    //cout << "The computer randomly selected " << compChoice << "\n\n";
    if (compChoice==1) // gold
     {
      cout << "\nYou are now in a new hallway ...\n";
     }
    else if (compChoice==2 || compChoice==3) // silver
     {
      cout << "\nThe room is empty, dark, and windowless. \n";
      cout << "When you turn to leave, you realize the door has locked behind you. \n";
      cout << "You are never heard from again. \n";
      endGame();
     }   
   }
  cout << "\nAhead of you, you see the Rowan Room, where Marlo often resides. \n";
  cout << "You breeze into the room, walking directly up to Marlo threating him with your " << weaponText << "\n";
  cout << "He sputters and begins to beg for his life. \n";
  cout << "He claims to be able to make you rich if you leave your master \n";
  cout << "and join him in his scheming. \n";
  cout << "What do you do ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. Kill Him - He deserves death                                                   **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Accept his offer - Leave your master and join him                              **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER>:  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 2
    if(cin.fail() || choice < 1 || choice > 2)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  if (choice==1)  //kill - check weapon
   {
    if (weaponText == "Poison")
      {
       cout << "\nWithout missing a beat, you put the poison into a glass of water and force Marlo to drink.  \n";
       cout << "Marlo dies instantly. \n";
      }
    else 
      {
       cout << "\nWithout missing a beat you lunge forwards and kill Marlo with your " << weaponText << ". \n";
      }
   }
  else if (choice==2)  //offer
   {
   cout << "\nYou decided to leave your master and align with Marlo.  \n";
   cout << "As soon as Marlo is able, he hires Zola to kill you. \n";
   cout << "Zola is so angry with you that he kills you for free. \n";
   }

endGame();
return;
} // end of getMarlo()

void getDenise()
{
  int choice = 0;
  cout << "\nDenise is a very difficult target - the brothel has no shortage of people who will need to be subdued. \n";
  cout << "You decide to stake out the brothel for a few days ... \n";
  cout << "Five nights later, you make your move. \n";
  cout << "Dressed as a customer with deep pockets, you saunter into the main entrance. \n";
  cout << "Approaching the table in the center of the hall, you quickly survey your surroundings. \n";
  cout << "You are now offered the choice of three women. \n";
  cout << "Who is most likely to aid you in your in your question to find the Madame? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "                                                                                        **\n";
  cout << "        ==========================                1. The mysterious brunette            **\n";
  cout << "      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                                                    **\n";
  cout << "    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                                                  **\n";
  cout << "  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                                                **\n"; 
  cout << "    ||      _____          _____    ||            2. The vivatious blonde               **\n";
  cout << "    ||      | | |          | | |    ||                                                  **\n";
  cout << "    ||      |-|-|          |-|-|    ||                                                  **\n";  
  cout << "    ||      #####          #####    ||                                                  **\n";
  cout << "    ||                              ||            3. The tenatious redhead              **\n";
  cout << "    ||      _____   ____   _____    ||                                                  **\n";
  cout << "    ||      | | |   @@@@   | | |    ||                                                  **\n";
  cout << "    ||      |-|-|   @@@@   |-|-|    ||                                                  **\n";
  cout << "    ||      #####   @@*@   #####    ||                                                  **\n";
  cout << "    ||              @@@@            ||                                                  **\n";
  cout << "  ******************____****************                                                **\n";
  cout << "  **************************************                                                **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> : ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  //screenSpace(30);
   if (choice==1)  //brunette
   {
    cout << "\nAs she leads you towards the back of the hall, you whisper the details of your mission in her ear. \n";
    cout << "She tenses, then changes direction, bringing you to a small door off to the side of the room.\n";
    cout << "When you enter, the room is set up like a gambling hall. \n";
    cout << "She bids you farewell, and good luck, then leaves, barring the door behind her. \n";
   }
  else if (choice==2) // blond
   {
    cout << "\nAs she leads you towards the back of the hall, you whisper the details of your mission in her ear. \n";
    cout << "She tenses, then changes direction, bringing you to a small door off to the side of the room.\n";
    cout << "Before you can run, multiple hands grab you and pull you into the room. \n";
    cout << "You are never seen again and presumed dead. \n";
    endGame();
   }
  else if (choice==3) // redhead
   {
    cout << "\nAs she leads you towards the back of the hall, you whisper the details of your mission in her ear. \n";
    cout << "She tenses, then changes direction, bringing you to a small door off to the side of the room.\n";
    cout << "Before you can run, multiple hands grab you and pull you into the room. \n";
    cout << "You are never seen again and presumed dead. \n";
    endGame();
   }
  cout << "\nThe players of the game turn to assess you, and you arrange your face to display nonchalance. \n";
  cout << "The large man at the head of the table nods to one of his henchmen. \n";
  cout << "Pulling up a chair, the henchman nods at you to sit down. \n";
  cout << "As you sit, you are dealt a hand of cards... \n";
  getComputerChoice();  //remember that this randomly selects 1-3
    // 1 = royal flush
    // 2 = full house
    // 3 = two pair
    cout << "The computer randomly selected your hand\n";
    if (compChoice==1) // royal flush
     {
      cout << "\nWhen it is time to reveal your hand, you have a Royal Flush! \n";
      cout << "With a Royal Flush - You win the game, and the room breaks into chaos .\n";
      cout << "Everyone is rushing at you - clearly you were supposed to be easy money. \n";
      cout << "You fend off a few, but are felled by a dagger to the back and die within a minute. \n";
      endGame();
     }
    else if (compChoice==2)  // full house
     {
      cout << "\nWhen it is time to reveal your hand, you have a Full House! \n";
      cout << "With your Full House - You win the game, and everyone gives you a begrudging round of \"congratulations\". \n";
      cout << "You are allowed to stay in the game, and at the end of the night, you ask where to pick up your winnings. \n";
      cout << "\"Madame distributes the earnings in her office\" says the large man, Boris. \n";
     }   
    else if (compChoice==3)  // two pair
     {
      cout << "\nWhen it is time to reveal your hand, you have Two Pair. \n";
      cout << "With your measly two pair - You lose the game, and everyone seems pleased to add a player \n";
      cout << "with endless pockets to the mix. \n";
      cout << "You are allowed to stay in the game, and at the end of the night, you ask where to pick up your winnings. \n";
      cout << "\"Madame distributes the earnings in her office\" says the large man, Boris. \n";
     }   
  cout << "\nBarely able to contain your luck, you allow Boris to lead you down a series of passageways. \n";
  cout << "He halts a large, ornate golden door. \n";
  cout << "As you gape at extravagance of such a trivial object, Boris laughs. \n";
  cout << "\"Just wait until you see her,\" he says. \n";
  cout << "Still laughing, he walks away, and you enter the chamber alone. \n";
  cout << "The inside of the room is even more opulent than the door, but nothing compares to the clothes of the woman \n";
  cout << "sitting behind the large gold desk in the center of the room. \n";
  cout << "She is dripping with jewels and precious cloths, unable to move under the weight of her garments. \n";
  cout << "Realizing that she is an easy target, you prepare your " << weaponText << " and advance on her. \n";
  cout << "She merely laughs. \"Are you ready to listen to my terms?\" she asks. \n";
  cout << "What do you do? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. Pause - What harm can it do to listen?                                         **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Proceed to finish the job                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 2)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  //screenSpace(30);
   if (choice==1)  //pause
   {
    cout << "\nShe slowly smiles, and launches into her spiel. \n";    
   }
  else if (choice==2) // kill
   {
    cout << "\nBefore you reach her, she launches into her spiel. \n";
   }
  cout << "\nShe offers you far more money than your share of her bounty, and an opportunity \n";
  cout << "to become her own personal assassin.\n";
  cout << "What will you do ? \n";  
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. Accept her offer                                                               **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Kill her                                                                       **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 2
    if(cin.fail() || choice < 1 || choice > 2)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  //screenSpace(30);
   if (choice==1)  //accept
   {
    cout << "\nYou accept her offer. She gives you an enormous amount of money. \n";    
    cout << "While you are counting the money and thinking of your good fortune, \n";
    cout << "one of her henchmen walks in a shoots you. \n";
    cout << "\"She must have had a panic button\" ... is the last thought through \n";
    cout << "your mind as you bleed out and die. \n";
   }
  else if (choice==2) // kill
   {
    cout << "\nThis woman does not deserve to exist. \n";
    if (weaponText == "Poison")
      {
       cout << "\nYou mix the poison into a glass of water and force Madame to drink.  \n";
       cout << "Madame dies instantly. Your mission is over. \n";
      }
    else 
      {
       cout << "\nWithout missing a beat you lunge forwards and kill Madame with your " << weaponText << ". \n";
      }
   }

endGame();
return;
} // end of getDenise()

//Home
void getAnette()
{
  int choice = 0;
  cout << "\nAnette is a very difficult target - her wealthy husband has spared no expense fortifying \n";
  cout << "their home.\n";
  cout << "You decide to stake out the home for a few days. \n";
  cout << "Five nights later, you make your move. \n";
  cout << "Posing as a servant, you sneak into the home unnoticed. \n";
  cout << "The home is practically a labyrinth of hallways, trapdoors, and secret passage ways.\n";
  cout << "The hallway leading from the service entrance splits into three parts... \n";
  cout << "Which way will you go? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "       _                                                                                **\n";
  cout << "     _|=|__________                                                                     **\n";
  cout << "    /              \\            1. Right                                                **\n";  
  cout << "   /                \\                                                                   **\n";
  cout << "  /__________________\\                                                                  **\n";
  cout << "   ||  || /--\\ ||  ||           2. Left                                                 **\n";
  cout << "   ||[]|| | .| ||[]||                                                                   **\n";
  cout << " ()||__||_|__|_||__||()                                                                 **\n";
  cout << "( )|-|-|-|====|-|-|-|( )        3. Straight                                             **\n";
  cout << "^^^^^^^^^^====^^^^^^^^^^^                                                               **\n";
  cout << "                                                                                        **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> : ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  //screenSpace(30);
   if (choice==1)  //right
   {
    cout << "\nYou hang right until you reach a set of double doors. \n";
    cout << "Upon entering the darkened room, you fumble for a light.\n";
    cout << "As you step forward into the room, your foot does not hit solid ground.\n";
    cout << "You fall forwards into a great chasm and are never heard from again. \n";
    endGame();
   }
  else if (choice==2) // left
   {
    cout << "\nImmediately upon turning left, you bump into a maid carrying towels. \n";
    cout << "\"I was sent to bring fresh towels to the madame,\" you say. \n";
    cout << "She sighs and rolls her eyes.\n";  
    cout << "\"Good luck,\" she says, handing you the towels and heading off in the opposite direction.\n"; 
   }
  else if (choice==3) //straight
  {
    cout << "\nAs you walk forwards, it grows increasingly quiet. \n";
    cout << "Unnerved, you proceed with caution. \n";
    cout << "The hallway darkens, and you consider turning around. \n";
    cout << "At the end of the hall is a single, stone door... \n";  
    cout << "When you go to open it, it falls on you and kills you instantly. \n";
    endGame();
   }
  cout << "\nYou continue on down the hallway ... \n";
  cout << "In front of you there are three doors. \n";
  cout << "Which do you choose ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. Purple                                                                         **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Red                                                                            **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    3. Black                                                                          **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
   if (choice==1)  //Purple
   {
    cout << "\nAs you open the door, you see a set of stairs that lead upwards. \n";
    cout << "While you climb, you notice that the wall is inscribed with a repetitive\n";
    cout << "series of numbers... 676 ...\n";
    cout << "You file this number away for later.\n";
   }
  else if (choice==2) // red
   {
    cout << "\nAs you open the door, you see a set of stairs that lead down. \n";
    cout << "The walls become damp as you walk down the spiral staircase. \n";
    cout << "As you reach the final step, you hear a noise and turn around. \n";  
    cout << "You are never heard from again and are presumed dead.\n"; 
    endGame();
   }
  else if (choice==3) // black
   {
    cout << "\nAs you open the door, you see a set of stairs that lead upwards. \n";
    cout << "While you climb, you notice that the wall is inscribed with a repetitive\n";
    cout << "series of numbers... 834 ...\n";
    cout << "You file this number away for later \n";
   }
  cout << "\nAt the end of the stairs, there is no exit. \n";
  cout << "Feeling around blindly in the dark, you find a ring hanging on the wall. \n";
  cout << "You pull, and a trap door swings open. \n";
  cout << "Clamoring through the opening, you are now in a beautifully decorated room. \n";
  cout << "To your right, there is a large wooden door. \n";
  cout << "In the center of the room, there is a large, steel chest. \n";
  cout << "There is a padlock with three spaces on it ... \n";
  cout << "Please enter the correct combination number, then hit <ENTER> : ";
  choice = 0;  //reset
  //cin.clear();
  cin >> choice;

  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than 676 or 834
    if(cin.fail() || (choice != 676 && choice != 834))
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cout << "\n\nWrong combination!  \n";
       cout << "A trapdoor opens and you fall to your death. \n";
       endGame();
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
   if (choice == 834)  //834
   {
    cout << "Correct! \n";
    cout << "Inside the chest, there is a small ornate key. \n";
    cout << "Quickly, you run over to the door to test it out ... \n";
   }
   else if (choice == 676) // 676
   {
    cout << "You have been tricked! \n";
    cout << "A trapdoor opens and you fall to your death. \n";
    endGame();
   }
  cout << "\nThe door swings open and you finally find her – Anette Jabal. \n";
  cout << "She is more than beautiful – every feature of her face is perfect. \n";
  cout << "Clearly startled by your appearance, she sits in silence at the other end of the room. \n";
  cout << "As it seems cruel to kill something so beautiful, you begin to consider your options ... \n";
  cout << "What will you do ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. End her life and collect your payment                                          **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Question her circumstances to buy you some time                                **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    3. Whisk her away                                                                 **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3)
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
   if (choice==1)  //kill - check weapon
   {
    cout << "\nUnfortunately, you are duty bound to carry out your mission. \n";
    if (weaponText == "Poison")
      {
       cout << "You reach forward to touch her face, and with the other hand you slip the Poison \n";
       cout << "into her wine and force her to drink it. \n";
       cout << "She dies instantly \n";
      }
    else 
      {
       cout << "You reach forward to touch her face, and with the other hand you kill her with your " << weaponText << ". \n";
      }
   }
  else if (choice==2) // question
   {
    cout << "\nWith a voice as beautiful as her face, she begins to explain her circumstances.\n";
    cout << "Her husband is a jealous man, and has deemed her too rebellious to continue to exist. \n";
    cout << "Once meeting his mistress, he had Anette locked away, and left town in order to have an alibi. \n";  
    cout << "You are to finish his dirty work. \n"; 
    cout << "You decide that you cannot kill this beautiful creature. \n";
    cout << "You leave without killing her - you have failed! \n";
   }
  else if (choice==3) // whisk
   {
    cout << "\nYou realize that you are in love with her. \n";
    cout << "Before she begins to speak, you explain what you are willing to do. \n";
    cout << "\"If we leave now, I can get you out of the city before daybreak - your husband will be convinced you \n";
    cout << "are dead and buried. This is your only chance to make it out of this situation alive.\" \n";
    cout << "She agrees. \n";
    cout << "You run away together and live happily ever after. \n";
   }

endGame();
return;
} // end of getAnette

// getHareem
void getHareem()
{
  int choice = 0;
  char ch;
  //screenSpace(30);
  cout << "\nHareem is a very dificult target - the castle is nearly impenetrable...\n";
  cout << "You decide to stake out the castle for a few days. \n";
  cout << "Five nights later, you make your move. \n";
  cout << "You begin to climb up the trellis that connects to the third floor of the castle. \n";
  cout << "Suddenly, the vine begins to tear! You only have seconds to react...\n";
  cout << "Quick! What do you do ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "     / \\               / \\                                                              **\n";
  cout << "    /   \\             /   \\                                                             **\n";
  cout << "   (_____)           (_____)                                                            **\n";
  cout << "    |   |  _   _   _  |   |      1.  Shimmy up the vine in the hopes of reaching        **\n";
  cout << "    | O |_| |_| |_| |_| O |          the third floor before it breaks                   **\n";
  cout << "    |-  |          _  | - |                                                             **\n";
  cout << "    |   |   - _^_     |   |                                                             **\n";
  cout << "    |  _|    //|\\\\  - |   |                                                             **\n";
  cout << "    |   |   ///|\\\\\\   |  -|      2.  Attempt to find a foothold in the stone wall       **\n";
  cout << "    |-  |_  |||||||   |   |                                                             **\n";
  cout << "    |   |   |||||||   |-  |                                                             **\n";
  cout << "    |___|___|||||||___|___|                                                             **\n";
  cout << "               \\      \\                                                                 **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  
  while(1)  // Loop until input is good then break
    {
     // If user enters something other than a whole number between 1 & 2
     if(cin.fail() || choice < 1 || choice > 2)
       {
        cin.clear();
        cin.ignore(1000,'\n');
        cin >> choice;
       }
     // If Input is good
     else if(!cin.fail())
     break;
    }
  //screenSpace(30);
  if (choice==1 )
   {  
   cout << "\nAs you rush up the vine, it begins to tremble. \n";
   cout << "You fill with dread as the vine snaps. \n";
   cout << "Falling to the stone walkway, you feel the wind whipping past...\n";
   cout << "You die on impact.\n";
   endGame();
   }
  else if (choice==2)
  {
    cout << "\nYour fingers begin to bleed as you scramble to find a grip on the wall. \n";
    cout << "At the very last second, you shift your weight off the vine as it snaps. \n";
    cout << "Clinging to the wall, you make another split-second decision - \n";
    cout << "Throwing your weight violently to the left, you crash through a \n";
    cout << "window on the 2nd floor. \n\n";
    cout << "Fearing that your entrance may have been heard, you pause in the middle \n";
    cout << "of the darkened room. \n";
    cout << "Once sure your mission has not been compromised, you proceed to the door \n";
    cout << "and out into the hallway. \n\n";
    // create random result (1, 2 or 3) to see who you meet
    getComputerChoice();
    // 1 = maid
    // 2 = Official
    // 3 = guard
    cout << "The game will randomly select the next option... \n";
    cout << "Press <ENTER> key to continue ";
    cin.ignore();
    ch = cin.get();
    while (ch != '\n')
     {
      ch = cin.get();
     }
        
    if (compChoice==1 )// maid
     {
      cout << "\nOn the stairs, you meet a maid. \n";
      cout << "One look at you, bloodied and armed to the teeth, and the maid attempts to run away.\n";
      cout << "You grab her hand and force her to guide you to the prince's room. \n";
      cout << "Once you arrive at the correct hallway, you swiftly inject the maid with a serum. \n";
      cout << "She is soon incapacitated, and you lock her in a closet. \n\n";
     }
    else if (compChoice==2) // official
     {
      cout << "\nOn the stairs, you meet an official. \n";
      cout << "One look at you, bloodied and armed to the teeth, and the official attempts to run away.\n";
      cout << "You grab his hand and force him to guide you to the prince's room. \n";
      cout << "Once you arrive at the correct hallway, you swiftly inject the official with a serum. \n";
      cout << "He is soon incapacitated, and you lock him in a closet. \n\n";
     }
    else if (compChoice==3) // guard
     {
      cout << "\nOn the stairs, you meet a guard. In an instant the guard is upon you. \n";
      cout << "He has the upper hand, as his weapon was already drawn when you approached him. \n";
      cout << "You are quickly subdued ... \n";
      cout << "You are led to the dungeon and thrown into a cell... never to be seen again \n\n";
      endGame();
     }

  } // end of choice 2
  
  cout << "\nFour armed soldiers guard the prince's door. \n";
  cout << "How will you get past them? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "         ,-'""`-,                                                                         **\n";
  cout << "       ,'        `.                    1. Distract them                                 **\n";
  cout << "      /    _,,,_   \\                                                                    **\n";
  cout << "     /   ,'  |  `\\/\\\\                                                                   **\n";
  cout << "    /   /,--' `--.  `                                                                   **\n";
  cout << "    |   /      ___\\_                   2. Fight them                                    **\n";
  cout << "    |  | /  ______|                                                                     **\n";
  cout << "    |  | |  |_' \\'|                                                                     **\n"; 
  cout << "    \\ ,' (   _) -`|                                                                     **\n";
  cout << "     '--- \\ '-.-- /                    3. Disguise yourself                             **\n";
  cout << "    ______/`--'--<                                                                      **\n";
  cout << "    |    |`-.  ,;/``--._                                                                **\n";
  cout << "    |    |-. _///     ,'`\\                                                              **\n";
  cout << "    |    |`-Y;'/     /  ,-'\\                                                            **\n";
  cout << "    |    | // <_    / ,'  ,-'\\                                                          **\n";
  cout << "    '----'// -- `-./,' ,-'  \\/                                                          **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
    {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3) 
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
    else if(!cin.fail())
    break;
  }
  //screenSpace(4);
  if (choice==1)  //distract
   {
    cout << "\nYou yell \"Fire!\" and hope for a miracle. \n";
    cout << "Surprisingly, it works. The soldiers rush off to protect the king (after all,\n";
    cout << "he writes their paycheck). \n";
    cout << "Unobstructed, you step into the prince's room. \n\n";
   }
  else if (choice==2) // Fight
   {
    cout << "\nYou've always been a bit too cocky, and choose to confront them head on. \n";
    cout << "In a blur of blades, you hurl yourselves into the soldiers ... \n";
    cout << "You leave the destruction in your wake, stepping into the prince's room.\n\n";   
   }
  else if (choice==3) //Disguise
  {
    cout << "\nYou quickly step into the closet and swap clothes with the incapacitated victim. \n";
    cout << "It is difficult to hide your weapons in this new getup, but you soon step into view of the soldiers. \n";
    cout << " \"Delivery for the prince\" you say.\n";  
    cout << "You are almost past them when you hear a clatter - one of your knives has fallen to the floor.\n";
    cout << "The guards are on you in an instant - they kill you with a sword. \n\n";
    endGame();
   }

  cout << "\nAs you open the door, Prince Hareem whirls around to face you. \n";
  cout << "\"Ah, I knew you would arrive soon\" he says. \n";
  cout << "While assessing the room for potential danger, you ponder his words ... \n";
  cout << "\"What do you mean\" you ask suspiciously. \n";
  cout << "For the next few minutes, Hareem explains the plot against his life is headed by his own father.\n";
  cout << "The king fears Hareem's popularity, and sees the prince's death as the only way to avoid a coup.\n";
  cout << "Hareem appears to be a compassionate, good man. \n";
  cout << "Does he really deserve death?  \n";
  cout << "What will you do ? \n\n";
  cout << "******************************************************************************************\n";
  cout << "**                                                                                      **\n";
  cout << "**    1. End his life and collect your payment                                          **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    2. Ask Hareen if he wants to put a bounty on his father's head                    **\n";
  cout << "**                                                                                      **\n";
  cout << "**                                                                                      **\n";
  cout << "**    3. Help Hareem escape the castle                                                  **\n";
  cout << "**                                                                                      **\n";
  cout << "******************************************************************************************\n";
  cout << "**  Select the number for your choice, then hit <ENTER> :  ";
  choice = 0;  //reset
  cin.clear();
  cin >> choice;
  //while loop to determine user input validity
  while(1)  // Loop until input is good then break
   {
    // If user enters something other than a whole number between 1 & 3
    if(cin.fail() || choice < 1 || choice > 3) 
      {
       cin.clear();
       cin.ignore(1000,'\n');
       cin >> choice;
      }
    // If Input is good
        else if(!cin.fail())
        break;
   }
  //screenSpace(30);
  if (choice==1)  //kill him
   {
    if (weapon==1) 
     {
      cout << "\nEnough listening. As you prepare your poison, Hareem seemingly accepts his fate. \n";
      cout << "You put the Poison into his chalice of wine and the prince dies immediately. \n";
     }
    else if (weapon==2 )
     {
      cout << "\nEnough listening. As you prepare your dagger, Hareem seemingly accepts his fate. \n";
      cout << "You slit his throat - the prince dies immediately. \n";
     }
    else if (weapon==3 )
     {
      cout << "\nEnough listening. As you prepare your pistol, Hareem seemingly accepts his fate. \n";
      cout << "You shoot him in the head - the prince dies immediately. \n";
     }
   }
  else if (choice==2) //father
   {
    cout << "\n" << "\"Well, it does not have to be this way,\" you say. \n";
    cout << "\"All I came here to do was kill. Whether it is you or your father does not matter.\". \n";
    cout << "\"If you match his payment, I will kill him instead of you\". \n";
    cout << "Hareem agrees and leads you to his father where you kill him instantly. \n";
   }
  else if (choice==3) //escape
   {
    cout << "\nThis man could truly change the kingdom for the better.\n";
    cout << "\"I can get you out\" you tell prince Hareem.\n";
    cout << "Who better than an assassin to slip someone out of the city? \n";
    cout << "Hareem agrees to match his father's payment and you lead him out of the castle. \n";
    cout << "You successfully get Hareem to safety and out of the city. \n";
   }

cout << "You have completed the game \n";
endGame();
return;
}
// end of getHareem





int main() {

startGame();
getFirstName();
gameSetup();
chooseMark();
chooseWeapon();
// for testing
/* 
cout << "First Name = " << firstName << "\n";
cout << "Mark = " << mark << "\n";
cout << "Weapon = " << weapon << "\n";
cout << "weaponText =  " << weaponText << "\n";
cout << "Test Pause - take this out after testing \n";
*/ 

if (mark==3)
 {
  getHareem();
 }
if (mark==4)
 {
  getAnette();
 } 

if (mark==1)
 {
  getMarlo();
 }

if (mark==2)
 {
  getDenise();
 }
endGame();

return 0;
}
