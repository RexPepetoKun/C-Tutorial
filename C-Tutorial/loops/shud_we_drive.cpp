#include <iostream>
//derived from AI
int main()
{
  std::cout << "Enter the current weather conditions (sunny, cloudy, rainy, snowy): ";
  std::string weather;
  std::cin >> weather;

  std::cout << "Enter the distance of your destination in miles: ";
  int distance;
  std::cin >> distance;

  std::cout << "Enter your driving experience (beginner, intermediate, advanced): ";
  std::string experience;
  std::cin >> experience;

  bool should_drive = true;
  if (weather == "snowy" && experience == "beginner")
  {
    should_drive = false;
  }
  else if (weather == "rainy" && distance > 50)
  {
    should_drive = false;
  }
  else if (weather == "cloudy" && distance > 100)
  {
    should_drive = false;
  }

  if (should_drive)
  {
    std::cout << "You can drive to your destination." << std::endl;
  }
  else
  {
    std::cout << "It is not safe to drive. Stay at home." << std::endl;
  }

  return 0;
}

//This program prompts the user to enter the current weather conditions, the distance of their destination, and their driving experience. Based on this input, the program determines whether it is safe to drive or not. If it is not safe to drive, the program advises the user to stay at home. Otherwise, the program advises the user that it is safe to drive.
//The program uses simple if-else statements to make its decision. For example, if the weather is snowy and the user's driving experience is beginner, the program advises the user to stay at home. Similarly, if the weather is rainy and the distance to the destination is more than 50 miles, the program advises the user to stay at home. The program makes similar decisions for other weather and distance combinations.
//This is just one way to write a program to help you decide whether to drive or stay at home. You can modify the conditions and decisions in the program to suit your needs.