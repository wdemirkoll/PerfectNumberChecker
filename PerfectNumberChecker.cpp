#include <iostream>

int main()
{

    int number,i,sum=0;

    // Getting a number from the user
    std::cout<<"Enter a number: ";
    std::cin>>number;

     // Iterate from 1 to number/2
     // No need to check beyond number/2
     // because a number cannot be divided evenly by a number greater than its half (excluding itself)
     for(i=1;i<=number/2;i++){
        // // Check if i is a divisor of number
        if(number % i == 0)
            sum += i; // Add divisor to the sum
     }

      // Check if the sum of divisors equals the original number
      if(sum == number){
        std::cout << number << " is a perfect number\n";
      }

      else{
        std::cout << number << " is not a perfect number\n";
      }


  return 0;
}
