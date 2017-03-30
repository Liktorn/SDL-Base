# SDL-Base

First, we’ll tell Visual Studio where to look for the SDL2 header files, by adding the SDL2 include folder to the Include Directories in VC++ Directories:
[![image](http://gigi.nullneuron.net/gigilabs/wp-content/uploads/2015/11/sdl2-vs-include.png)]

In Linker -> General, set Additional Library Directories to the path to the SDL2 library – either x86 or x64:
[![image](http://gigi.nullneuron.net/gigilabs/wp-content/uploads/2015/11/sdl2-vs-library.png)]

Then in Linker -> Input, replace the value of Additional Dependencies with “SDL2.lib; SDL2main.lib“:
[![image](http://gigi.nullneuron.net/gigilabs/wp-content/uploads/2015/11/sdl2-vs-dependencies.png)]

Finally, in Linker -> System, set SubSystem to Windows (/SUBSYSTEM:WINDOWS):
[![image](http://gigi.nullneuron.net/gigilabs/wp-content/uploads/2015/11/sdl2-vs-subsystem.png)]

[![image]()]
