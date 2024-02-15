# Armando24

This keyboard controller was designed as a cheap alternative to the Gamo2 K28 controller.
I primarily intended to use it to play DJMAX Respect V, but it can be used to play a variety of games, such as any PC rhythm or fighting game.

The case, plate, T-shaped cover and the 2U keycaps are 3d printed in the picture below. The .step files are available in this folder for everything but the keycaps, which are a slightly modified version of [Riskable's design](https://www.printables.com/model/399607-complete-cherry-mx-stem-keycap-set-optimized-for-3).
The screws I used for the build are 2.5mm wide, so the models have appropriately sized holes for them.

For the other parts, I used XDA keycaps for the 1u, plate mounted stabilizers, Gateron Silvers and a raspberry pi pico.
My pico had enough digital pins available so I have soldered each switch to its own pin on the pico, without need of a matrix configuration with diodes.
As for the pinout configuration, you can see how I configured it in the file info.json.

The firmware I used for the pico is vial-qmk, so that I can rebind the keys with vial anytime I want without flashing a new firmware.

I'd also like to thank [Joe Scotto](https://www.youtube.com/@joe_scotto) for his amazing tutorials on 3d printed, handwired keyboards!

![Armando24](https://github.com/Armandik/Controllers/assets/64152437/e2dbad65-b453-4587-b2e6-06e57337a23d)
