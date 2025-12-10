# Corner Grocer Item-Tracking Program

## Project Summary
For this project, I built a C++ console application called Corner Grocer that tracks how often different grocery items are purchased. The program reads data from an input file, stores the items and their frequencies in a `std::map`, and allows the user to search for specific items, print all frequencies, or view a histogram. The problem it solves is helping a grocery store quickly analyze purchase trends in a simple, menu-driven way.

## What I Did Well
I think I did a good job organizing the program into a class (`GroceryTracker`) and keeping the code readable. I also made sure to format the output neatly with aligned columns and added comments so another developer could understand the logic.

## Areas for Enhancement
One improvement I could make is adding better error handling for user input. For example, if someone types an item name that doesn’t exist in the file, the program could give a clearer message or suggest similar items. I could also expand the program to handle larger datasets more efficiently by using file streams with better performance.

## Challenges and Resources
The most challenging part was debugging file path issues and making sure the program could read and write files correctly. I overcame this by testing with different file locations and reviewing examples from zyBooks. I also relied on Visual Studio’s debugger to step through the code and confirm that the map was storing items correctly.

## Transferable Skills
This project helped me practice class design, file handling, and using associative containers like maps. These skills will transfer directly to future projects in C++ and other languages, especially when I need to organize data or build menu-driven applications.

## Maintainability and Readability
I made the program maintainable by using clear variable names, consistent indentation, and comments that explain each function. The menu-driven design makes it adaptable, since new options could be added without changing the overall structure.
