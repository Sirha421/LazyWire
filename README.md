# LazyWire
A micro robot that runs wire quickly, efficiently, and easily.

INTRO:

LazyWire, a Four Wheel Drive motorized vehicle cable running assistant. It was design/built to specifically expedite the time it takes to run one or even multiple cables through drop ceilings drastically and extremely cost effective.


HOW IT WAS BUILT:

We used the multi chassis 4WD as the base of our robot, connected that to an Arduino that had an Arduino motor shield attached which would regulate the power to and from the 4 DC motors and the board. Also attached to the board via the transmission and reception ports on the shield is a HC-06 Bluetooth receiver. On the back, there is an CAT-5 port that the user can plug the cable they want to run into. We programed the robot using Arduino and MITAppInventor. Arduino was used to make the base functions of the robot, like go forwards, and to look for a Bluetooth output. MITAppInventor was used to build a mini app called LazyWire, which gives the user command over the robot via the Bluetooth adapter. Once in the app and connected to the receiver, the user can give the robot a variety of commands, making it possible to run wire through the ceiling more easily for the user.


FUTURE DIRECTIONS: 

We have many ideas in mind for our projects future. The first upgrade that we would like to prioritize is the addition of an onboard camera. Not only would we like to add a camera to this motorized vehicle, but we would also like to make it more compact and lightweight. With a more compact LazyWire and a camera, one would be able to efficiently maneuver within a ceiling and avoid various obstacles they may come across. After these necessary upgrades, more upgrades to the performance of the LazyWire shall come such as increases to speed, an increase to the number of wires able to be pulled at once, as well as an improvement to battery life and most important the ability to move vertically. We loved this hack so much we already have the blue prints to make vertical movements a reality. Two ways we already found how, is one super lightweight body with fans that propel the unit to stick to the wall. Second would be specially designed suction cups on the devices (mimicking a chameleons movement).


CHALLENGES FACED:

In the production of our LazyWire, we faced many options and difficult choices. To begin, the most major obstacle we had faced was our lack of knowledge in robotics. Coming from our Cyber Security background, prior to this MLH Hackathon, we had no robotics experiences whatsoever. Moving on from our lack of robotics knowledge, we had the options to control the LazyWire with either an IR sensor with a remote control, a GameCube controller, a joystick, WiFi, antonymous code accompanied by sensors, or control it via Bluetooth accompanied by a mobile application. After getting familiar with the intricacies of the GameCube controller to operate with an Arduino Uno board, we ran into a problem with an outdated and incompatible library involving Nintendo controllers. After performing various researched troubleshooting attempts, we decided to experiment with an on-board joystick in attempts to test our code we had written for the 4 wheel drive motor controls. We didn't make any progress with this at all so we chose to move on from this, take an extra step, and install an HC06 Bluetooth Module, which would later be controlled by a mobile application. Upon writing a full code, creating an application, and mounting everything to our chassis kit, we had issues uploading the code to our Arduino Uno board for the testing phase of our project. We were consistently receiving error codes when trying to compile and upload the code to the board. Since we were having so many issues with the Arduino Uno board, 2 of our team members began experimenting with a Redboard which we were told was similar to the micro controller board we were currently working with. Finally, after some troubleshooting, we got the Arduino Uno working and were able to upload our code to it. Now we had ran into our next problem. Our next problem involved the motor controls and them not operating properly. After hours of peer-review of our code, within our team, we were able to verify, compile, and upload a code that allows our LazyWire to move forwards, backwards, and pivot both right and left.

More Information About LazyWire's Creation in the WelcomeToLazyWire Folder!
