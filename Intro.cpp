// INTRODUCTION TO C++

//a computer's CPU cannot comprehend C++
//  instead, it uses machine code/machine language
//  EXAMPLE: 10110000 0110001
// ASSEMBLY LANGUAGE: each instruction is identified by a short abbreviation
//  EXAMPLE: mov al, 061h
// HIGH LEVEL LANGUAGES: designed to allow the programmer to write instructions with less confusion
//  EXAMPLE: a = 97 (same instruction as mov al, 061h
//each new formal release of C++ is called a "language standard"/"language specification"

//USES OF C++...
//  video games
//  real-time systems
//  high-performance financial applications
//  graphical applications & simulations
//  productivity/office applications
//  embedded software
//  audio and video processing
//  artificial intelligence & neural networks

//C++ TROUBLESHOOTING PROCESS...
//  1. Define the problem
//  2. Design the solution
//  3. Write the program that implements the solution
//  4. Compile the program
//  5. Link the object files
//  6. Test the program
//  7. Debug (Repeat back to Step 4)

//WRITING A PROGRAM
//  - programs written are called "source code"
//  - chosen Integrated Development Environment (IDE) is called a "code editor"
//  - a typical code editor has two main features to make coding easier:
//    - line numbering
//    - syntax highlighting
// EXAMPLE:
#include <iostream>

int main()
{
    std:cout << "Colored text!";
    return 0;
}
//  - the C++ compiler checks the source code for errors and translates it into an "object file" to communicate to the computer
//      - C++ files should ALWAYS contain .cpp at the end
//  - to compile the program, press RUN, press F7, press Ctrl+F9, or press Ctrl+Shift+B (depends on IDE)

//DEBUG METHOD if program runs but console window closes...
// add these lines at the top of the program:
#include <iostream>
#include <limits>
// then add the following code at the end of main() function and before return():
std::cin.clear(); //resets any error flags
std::cin.ignore(std::numeric_limits<std:;streamsize>::max(), '\n'); //ignores characteristics in the input buffer
std::cin.get(); //gets one more char from the user (waits for user to press ENTER)
//alternative solution is the system("pause") command, but should be avoided on most OS

//NEED TO KNOW: C++ Language Standard Code Names...
//  c++1x = C++11   [ver. 11]
//  c++1y = C++14   [ver. 14]
//  c++1z = C++17   [ver. 17]
//  c++2a = C++20   [ver. 20]   <-- preferred language standard for C++
//  c++2b = C++23   [ver. 23]

//TESTING YOUR COMPILER FOR C++20 COMPATIBILITY...
//  after enabling the C++20 language standard, the following code should compile with no errors
#include <array>
#include <iostream>
#include <span>

struct Foo
{
    int a{};
    int b{};
    int c{};
}

consteval int sum(std::span<const int> a) //std::span and consteval
{
    int s{ 0 };
    for (auto n : a)
        s += n;
    return s;
}

auto sum(auto x, auto y) -> decltype(x + y) //abbreviated function templates
{
    return x + y;
}

int main()
{
    constexpr std::array a{ 3, 2, 1 };
    constexpr int s{ sum(a) };
    std::cout << s << '\n';
    
    Foo f1{ .a = 1, .c = 3 }; //designated initializers
    std::cout << sum(f1.a, f1.c) << '\n';
    
    return 0;
}

//  END OF INTRO NOTES
