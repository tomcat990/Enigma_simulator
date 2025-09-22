Enigma Machine Simulator

This is a simulator for the German Enigma machine, written in C++.

It follows the logic of the original device, including rotor stepping.
To decrypt a message, the program must be run again with the same rotor configuration.

You can uncomment the `srand(time(0));` line to generate a new rotor setup each time — useful for creating your own encryption key.

Plugboard support is not yet implemented, but it can be added later.

Only lowercase letters (`a`–`z`) are supported. Other characters are ignored.

