# ansiMode
Changes Text Modes

**Compilation:**

`g++ ansiMode.cpp -o colorizer`

**Run:**

`colorizer [mode] [action] [action]`

*mode 0*

takes no action arguments and clears all formatting of text

*mode 1*

takes a color from 0 to 15 (see wikipedia for ansi escape color table) and puts FG color

*mode 2*

takes a color from 0 to 15 and puts BG color

*mode 3*

sets position of cursor with second two arguments as x and y coords.

*mode 4*

clears the console window to cursor, optional argument
