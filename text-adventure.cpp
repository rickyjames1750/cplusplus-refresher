#include <iostream>

int main() {
  
//Intro Story   
  std::cout << "It's been a strange day indeed. You've fallen down a golden mine hole, happened across a strange taco party, and had many other absurd adventures.\n";
  std::cout << "But now, you are called to a trial of some sort, ushered in by a Golden Bear.\n";
  std::cout << "The King (Don Ricardo) and Queen (Calafia) of California are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
  std::cout << "The Golden Robot is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";

// Little animation 
  std::cout << "\n";
  std::cout << "     \\\\\n";
  std::cout << "      \\\\_\n";
  std::cout << "      ( _\\Dn==(\n";
  std::cout << "      / \\__|\n";
  std::cout << "     / _/`\"`\n";
  std::cout << "    {\\  )_\n";
  std::cout << "     `\"\"\"`\n";

// Finishes the intro story 
  std::cout << "\n";
  std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
  std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
  std::cout << "*      *      *\n";
  std::cout << "What do you do?\n";


  char choice1;

  for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {


    std::cout << "Enter A if you ask the Golden Bear next to you what the jurors are doing\n";
    std::cout << "Enter B if you sneak a tart.\n";
    std::cout << "Enter C if you sit and wait for the trial to begin.\n";
    std::cin >> choice1;

  }
  switch (choice1) {
    case 'A':
      std::cout << "The Gryphon explains that the jurors are writing down their names for fear they should forget before the end of the trial.\n";
      std::cout << "'How stupid!' you say in a loud voice, but you are cut off.\n";
      std::cout << "'SILENCE IN THE COURT!' shrieks the White Rabbit. The king puts on his glasses and looks around anxiously to see who was talking.\n";
      std::cout << "You manage to keep your mouth shut and the King fails to notice you.\n";
      break;


    case 'B':
            std::cout << "Just as you get your hand on a sleak-looking macbook, you hear a bellowing voice that fills you with dread.\n";
            std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
            std::cout << "'I did what?' you ask.\n";
            std::cout << "'SHE stole the macbook! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
            std::cout << "Several cards dressed as guards carry you off to be executed.\n";
            std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
            std::cout << "THE END\n";
            return 0;

    case 'C':
            std::cout << "The court begins to settle down.\n";
            break;

    default:
      std::cout << "Sorry, you haven't entered a valid choice.\n";
      std::cout << "Goodbye.\n";
      return 0;
  }

    std::cout << "'Herald, read the accusation!' yells the King.\n";
    std::cout << "On this the Golden Robot blows three blasts on the trumpet, and then unrolls the parchment scroll, and reads as follows:\n";
    std::cout << "\n";
    std::cout << "'The Queen of California, she made some computers,\n";
    std::cout << "    All on a summer day:\n";
    std::cout << "The Knave of Alta California, he stole those tarts,\n";
    std::cout << "    And took them quite away!'\n";
    std::cout << "\n";
    std::cout << "'Consider your verdict,' says the King to the jury.\n";
    std::cout << "'Not yet, not yet,' the Robot hastily interrupts him.\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "As the first witness is called, you notice a wrapped taco in your pocket. You are still very hungry.\n";
    std::cout << "Do you eat the taco in your pocket?\n";



    // Character Choice 2 
    char choice2;
    
    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        std::cout << "Enter A if you eat the taco.\n";
        std::cout << "Enter B if you decide to wait until the trial is over.\n";
        std::cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice2 == 'B') {

        std::cout << "Your stomach rumbles audibly, interrupting the interrogation.\n";
        std::cout << "'YOU did it!' screams the Queen of California.\n";
        std::cout << "'I did what?' you ask.\n";
        std::cout << "'SHE stole the taco! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
        std::cout << "Several cards dressed as guards carry you off to be executed.\n";
        std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
        std::cout << "THE END\n";
        return 0;

    }

    std::cout << "You eat the taco and it really does make you feel better. Meanwhile, the trial proceeds...\n";
    std::cout << "The first witness is the Hatter.\n";
    std::cout << "'Give your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "While the Hatter answers nervously, you suddenly feel a very curious sensation — you are growing larger.\n";
    std::cout << "It must have been the taco you ate...\n";
    std::cout << "What do you do?\n";


    // Character Choice 3

    



  }


