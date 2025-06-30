#include <iostream>
using namespace std;

int main()
{

  int playGame;
  char userChoice;

  int specialToken = 30, wrongToken = 32;
  int map = 30, ring = 24, bracellete = 45, beamOflight = 1;
  int specialKey = 51, wrongKey1 = 12, wrongKey2 = 33;
  int playerToken = 0, playerKey = 0, playerSpecialitem = 0;
  char choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8, choice9, choice10, choice11, choice12, choice13, choice14, choice15, choice16, choice17, choice18, choice19, choice20, choice21, choice22, choice23, choice24, choice25, choice26, choice27, choice28, choice29, choice30;

  cout << "       Ghulam Latif Presents\n------The Ultimate Logic Maze------\n";
  cout << "Press 1 to play the Game, Press Any other Key to Exit\n";
  cin >> playGame;

  if (playGame == 1)
  {
    cout << "Game Tip: Press The Letter Written Inside The Brackets Besides The Choices To Select Your Choice. Make Sure to enter capital Letters.\n";
    cout << "-------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "You have escaped from the monsters of Mordor and entered inside a dark cave, Do you want to go Left(L), Right(R) or Forward(F)\n";
    cin >> choice1;
    if (choice1 == 'L')
    {
      cout << "You Have Entered a room with two Ways, Do you want to go Forward(F) or enter the Dark Tunnel(T)\n";
      cin >> choice2;
      if (choice2 == 'F')
      {
        cout << "You have entered a room with a red key on the ground. Do you want to Pick Up the Key and Move Forward(Y/N)\n";
        cin >> choice3;
        if (choice3 == 'Y')
        {
          playerKey = wrongKey1;
          cout << "There is a chest infront of you, Do you want to Open(O) it or Ignore it and Move Forward(F)\n";
          cin >> choice4;
          if (choice4 == 'O')
          {
            cout << "The worst of All monsters is greed, it was a trap chest and you have Died.\n";
          }
        }
        else if (choice3 == 'N')
        {
          cout << "There is a chest infront of you but you dont have any key to use, Press(F) to move forward\n";
          cin >> choice4;
        }
      }
      else if (choice2 == 'T')
      {
        cout << "You have entered a room full of skulls, and in the middle lies a golden token\n";
        cout << "Do you want to pick up the token and move forward(Y/N)\n";
        cin >> choice9;
        if (choice9 == 'Y')
        {
          playerToken = specialToken;
          cout << "You are in luck, another token lies infront of you, Do you want to Drop the current Token and pick up the new one(Y/N)\n";
          cin >> choice10;
          if (choice10 == 'Y')
          {
            cout << "New Token Picked Up and Proceeded To Next Room\n";
            playerToken = wrongToken;
          }
          else if (choice10 == 'N')
          {
            cout << "You have Entered the next room with your old token\n";
          }
        }
        else if (choice9 == 'N')
        {
          cout << "Life has given you another Chance, another token lies infront of you, Do you want to pick it(Y/N)\n";
          cin >> choice10;
          if (choice10 == 'Y')
          {
            cout << "Token Picked Up and Proceeded To Next Room\n";
            playerToken = wrongToken;
          }
          else if (choice10 == 'N')
          {
            cout << "You have Entered the next room without any token\n";
          }
        }
      }
    }
    else if (choice1 == 'R')
    {
      cout << "You have entered a blocked Room. Pick up a Pickaxe(P) to break through it or Blast(B) the blockage\n";
      cin >> choice5;
      if (choice5 == 'P')
      {
        cout << "You have entered an empty room, Proceed Forward(F)\n";
        cin >> choice6;
        if (choice6 == 'F')
        {
          cout << "You have Entered a room with a monster from Mordor and have nothing to defend yourself with\n";
          cout << "The Monster has sliced you in half, You are Dead.\n";
        }
      }
      else if (choice5 == 'B')
      {
        cout << "--------------------------BOOOOOOM----------------------------------------\n";
        cout << "A secret Entrance has open up and you have found a gold ring on the ground\n";
        cout << "Do you want to Pick Up the ring and move forward(Y/N)\n";
        cin >> choice7;
        if (choice7 == 'N')
        {
          cout << "You have Entered a room with a monster from Mordor and have nothing to defend yourself with\n";
          cout << "The Monster has sliced you in half, You are Dead.\n";
        }
        else if (choice7 == 'Y')
        {
          playerSpecialitem = ring;
          cout << "You have Entered a room with a monster from Mordor, Your Gold ring shines and kills the monster\n";
          cout << "The Dead Monster lies infront of the Gate to another hallway, Jump(J) To Proceed To the next room\n";
          cin >> choice8; // To BE USED IN FUTURE
        }
      }
    }
    else if (choice1 == 'F')
    {
      cout << "You have entered a room full of skulls, and in the middle lies a golden token\n";
      cout << "Do you want to pick up the token and move forward(Y/N)\n";
      cin >> choice9;
      if (choice9 == 'Y')
      {
        playerToken = specialToken;
        cout << "You are in luck, another token lies infront of you, Do you want to Drop the current Token and pick up the new one(Y/N)\n";
        cin >> choice10;
        if (choice10 == 'Y')
        {
          cout << "New Token Picked Up and Proceeded To Next Room\n";
          playerToken = wrongToken;
        }
        else if (choice10 == 'N')
        {
          cout << "You have Entered the next room with your old token\n";
        }
      }
      else if (choice9 == 'N')
      {
        cout << "Life has given you another Chance, another token lies infront of you, Do you want to pick it(Y/N)\n";
        cin >> choice10;
        if (choice10 == 'Y')
        {
          cout << "Token Picked Up and Proceeded To Next Room\n";
          playerToken = wrongToken;
        }
        else if (choice10 == 'N')
        {
          cout << "You have Entered the next room without any token\n";
        }
      }
    }
    // The three Surviving Choices lead to this common Hallway
    if ((choice10 == 'N') || (choice10 == 'Y') || (choice4 == 'F') || (choice8 == 'J'))
    {
      cout << "You have Entered a Giant Room full of sleeping ORCS\n";
      cout << "Quitely Move Either Left(L) or Right(R)\n";
      cin >> choice11;
      if (choice11 == 'L')
      {
        if (playerSpecialitem != 0)
          cout << "You have entered a cartographers room and found Maps.\nDrop your Ring to Pick up a map from the Shelves(Y/N)\n";
        else if (playerSpecialitem == 0)
          cout << "You have entered a cartographers room and found Maps.\nPick up a map from the Shelves(Y/N)\n";
        cin >> choice12;
        if (choice12 == 'Y')
        {
          playerSpecialitem = map;
          cout << "Congrats! The Map Helped You Skip 2 Very Dangerous Rooms\n";
          cout << "You find yourself infront of a golden Gate. Proceed To Enter the room(F)\n";
          cin >> choice13;
        }
        else if (choice12 == 'N')
        {
          if (playerKey != 0)
          {
            cout << "Without the map you lost your way and dropped your Picked Key somewhere\n";
            playerKey = 0;
          }
          else if (playerKey == 0)
          {
            cout << "Without the map you lost your way. ";
          }
          cout << "And you find yourself infront of a small broken Gate. Proceed To Enter the room(F)\n";
          cin >> choice14;
          if (choice14 == 'F')
          {
            cout << "You have entered a room with a key on the ground. Pick up the key(Y/N)\n";
            cin >> choice17;
            if (choice17 == 'Y')
            {
              playerKey = wrongKey2;
              cout << "Picking up the this key has dropped, if any, previous key from your inventory\n";
            }
            else if (choice17 == 'N')
            {
              cout << "You Moved On without picking up the key\n";
            }
            cout << "You find yourself infront of a golden Gate. Proceed To Enter the room(F)\n";
          }
        }
      }
      else if (choice11 == 'R')
      {
        cout << "You have entered into a treasure room and found a beutiful bracellete\n";
        if (playerSpecialitem != 0)
        {
          cout << "Drop your Ring and Pick up the Bracellete(Y/N)\n";
        }
        else if (playerSpecialitem == 0)
        {
          cout << "Pick up the Bracellete(Y/N)\n";
        }
        cin >> choice15;
        if (choice15 == 'Y')
          playerSpecialitem = bracellete;
        cout << "You hear rustling coming from a room, Do you want to Enter the room(E) or take the other(O) path\n";
        cin >> choice16;
        if (choice16 == 'E')
        {
          cout << "Curiousity Killed the cat. The Room was full of rattlesnakes and you have died.\n";
        }
        else if (choice16 == 'O')
        {
          cout << "You have entered a room with a key on the ground. Pick up the key(Y/N)\n";
          cin >> choice17;
          if (choice17 == 'Y')
          {
            playerKey = wrongKey2;
            cout << "Picking up the this key has dropped, if any, previous key from your inventory\n";
          }
          else if (choice17 == 'N')
          {
            cout << "You Moved On without picking up the key\n";
          }
          cout << "You find yourself infront of a golden Gate. Proceed To Enter the room(F)\n";
          cin >> choice13;
        }
      }
    }

    if ((choice17 == 'Y') || (choice17 == 'N') || (choice13 == 'F'))
    {
      cout << "The Golden Gates Open ups to a Huge Treasure Room\n";
      cout << "You find a chest(C) and a golden key(K) lying on the ground, but you can choose only one\n";
      cin >> choice18;
      if (choice18 == 'C')
      {
        cout << "All this work for nothingness. The chest had a hidden trap, You Are Dead.\n";
      }
      else if (choice18 == 'K')
      {
        playerKey = specialKey;
        if (((playerKey ^ playerToken) == playerSpecialitem))
        { // Hidden Room
          cout << "Something is happening. The items in your inventory have allowed you to access a hidden room\n";
          cout << "You Find the Light of truth in the hidden room. Do you want to pick it up(Y/N)\n";
          cin >> choice19;
          if (choice19 == 'Y')
          {
            playerSpecialitem = beamOflight;
          }
          cout << "The room's mechanism pushes you out of the room\n";
        }
        cout << "You Find yourself infront of a Talking Orc\n";
        cout << "The Orc tells you to trust him and he will help you find the way out, Do you trust him(Y/N)\n";
        cin >> choice20;
        if (choice20 == 'Y')
        {
          if (playerSpecialitem == beamOflight)
          {
            cout << "The Orc was Lying to You but the Light Of Truth Saved you from his lies.\n";
          }
          else
          {
            cout << "Thy Should Never Trust Thy Enemies. The Orc betrayed You and handed you over to Mordor. You are Dead\n";
          }
        }
        else if (choice20 == 'N')
        {
          cout << "The orc was telling a lie, You did good by not trusting him\n";
          cout << "You see a beam of light entering through a door, Enter Any Button To Proceed Forward\n";
          cin >> choice1;
          cout << "Congratulations, You have made it out alive!\n";
        }
      }
    }
  }
  return 0;
}
