#include <iostream>
using namespace std;

// ------------------------------------------------------
// Problem 1: Print Even Fibnacci Numbers Sum Upto n
// void evenFibonacciSum(int n) {
//   int a = 0, b = 1;
//   int sum = 0, next;

//   while (b <= n) {
//     if (b % 2 == 0)
//       sum += b;
//     next = a + b;
//     a = b;
//     b = next;
//   }

//   cout << "Sum of even fibonacci numbers up to ";
//   cout << n << ": " << sum << endl;
// }

// int main(void) {

//   int totalSum = 0;
//   for (int i = 1; i <= 5; i++) {
//     totalSum += i;
//     cout << "Current totalSum: " << totalSum << endl;
//     evenFibonacciSum(i * 2);
//   }

//   return 0;
// }

// -----------------------------------------------
// Problem 2: AB Pattern
// int main(void) {

//   for (char i = 'A'; i <= 'A'; i++) {
//     for (char j = 'A'; j <= 'A'; j++) {
//       for (char k = 'A'; k <= 'A'; k++) {
//         for (char l = 'A'; l <= 'B'; l++) {
//           for (char m = 'A'; m <= 'B'; m++) {
//             for (char n = 'A'; n <= 'A'; n++) {
//               cout << i << j << k << l << m << n << endl;
//             }
//           }
//         }
//       }
//     }
//   }

//   return 0;
// }
// -------------------------------------------------------------
// Problem 4: ### Pattern
// int main(void) {
//   // Code (with little conditions changed)
//   int n = 5;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       /* this condition is for printing hashes across
//       the borders of the square like this
//       # # # # #
//       #       #
//       #       #
//       #       #
//       # # # # #
//         */
//       if (i == 1 || i == n || j == 1 || j == n) {
//         cout << "# ";
//       } else {
//         /*
//           in this else clause(means the else keyword with its all statements)
//           in this 1st if condition we will print stars *
//           on each even line with dashes - , how we know
//           where to print dashes and stars exactly in each even line of square
//           we have dashes at the mid but in each odd line we have @ (in this
//           case since the iterations are only upto 5 and we are printing
//           hashes across the borders on the top as described so we will ignore
//           1st and last row of square ) so we have @ at each odd line in the
//           square and dash - in even line (Important) but in each even line at
//           each even point or element we have start but at odd point we have -
//           so this is the condition we have and also for each odd line we have
//           dashes at even points but @ at odd point (isko must read krna)
//          */
//         if (i % 2 == 0 && j % 2 == 0) {
//           cout << "* ";
//         } else if (i % 2 != 0 && j % 2 != 0) {
//           cout << "@ ";
//         } else {
//           cout << "- ";
//         }
//       }
//     }
//     cout << endl;
//   }
//   // this is loop for only printing PF with an extra space till 'n'
//   for (int i = 1; i <= n; i++) {
//     cout << "PF ";
//   }
//   cout << endl;

//   return 0;
// }
//----------------------------------------------------------------------------------------------------
// Problem 5: Hollow Diamond Pattern with Repeated Characters (Customised
// Conditions and Code)
/*
int main(void) {

  int n = 5;

  for (int i = 1; i <= n; i++) {
    // loop for printing spaces

    for (int j = n; j > i; j--) {
      cout << " ";
    }
    // condition for not to print a space in 1st line
    if (i != 1) {
      // for printing the repeated pattern (Note: ) where, there is repeatation
      // there is always modulus its use is like we (use it for incrementing
      // indices used in Circular Linked List a data structrte)
      if (i % 3 == 2) {
        cout << "* ";
      } else if (i % 3 == 0) {
        cout << "# ";
      } else {
        cout << "@ ";
      }
      // formula derivatin
      //
      //  i=2 , space=1  j = 0
      //  i=3, space=3   j = 1
      //  2*(i - 1) => 2*(2 - 1) - 1 =>1
      //  2*(i - 1) => 2*(3 -1) - 1 => 3


      for (int j = 1; j < (2 * (i - 1)) - 1; j++) {
        cout << " ";
      }
      cout << "@";
    } else {
      cout << "@";
    }
    // a next line
    cout << '\n';
  }
  for (int i = n - 1; i >= 1; i--) {
    // loop for printing spaces
    for (int j = n; j > i; j--) {
      cout << " ";
    }
    // condition for not to print a space in 1st line

    if (i != 1) {
      // for printing the repeated pattern (Note: ) where, there is repeatation
      // there is always modulus its use is like we (use it for incrementing
      // indices used in Circular Linked List a data structrte)
      if (i % 3 == 2) {
        cout << "* ";
      } else if (i % 3 == 0) {
        cout << "# ";
      } else {
        cout << "@ ";
      }

      // for printing spaces
      // formula derivatin
      //
      //  i=2 , space=1  j = 0
      //  i=3, space=3   j = 1
      //  2*(i - 1) => 2*(2 - 1) - 1 =>1
      //  2*(i - 1) => 2*(3 -1) - 1 => 3

      for (int j = 1; j < (2 * (i - 1)) - 1; j++) {
        cout << " ";
      }
      // for printing @ signs
      cout << "@";
    } else {
      cout << "@";
    }
    // a next line

    cout << '\n';
  }
  // @ * #
  return 0;
}
*/

// Last Question is Easiest they have provided formula like we do i++ to
// increment int (we can also write it as i += 1)  as it is they have given the
// formula C = C * (i - j) / (j + 1) to increment we can write it as C *= (i -
// j) / (j + 1) for incrementing to a specific number

// *(Note): In the programs they have used sometimes ++i/++j to confuse students
// and to make code hard to read you can change it and write it as i++/j++ for
// sake of these programs, However there working is completely different but
// both of these unary operators increment/decrement the are called post/pre or
// pre/post increment/decerement unary operators