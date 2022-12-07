# C# Notes
These are self notes. <br>
I've made references to other languages that I know for better understanding.*
<br>
<br>

## Methods
```cs
using System;

namespace Github_Notes
{
  class Program
  {
    static Main(string[] args)
    {
      Console.WriteLine(Calculate("S", 34, 17));
      Console.WriteLine(Calculate("M", 9432, 6.45));
      Console.WriteLine(Calculate("A", 432, 93));
    }

    static double Calculate(char action, double number1, double number2)
    {
      double result;
      
      switch (action)
      {
        case "A":
         result = (number1 + number2);
         break;
        
        case "S":
          result = (number1 - number2);
          break;
          
         case "M":
          result = (numebr1 * number2);
          break;
          
         case "D":
          result = (number1 / number2);
          break;
          
         default:
          // error handling
          result = 00;                  // not ideal for this example
          break;
      }
      return result;

    }
  }
}
```
