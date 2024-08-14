Welcome to the Tabletop Bot project! This Arduino-based robot is designed to navigate a flat surface using infrared (IR) sensors to detect the edges, ensuring it stays on the table. The bot is controlled by an Arduino board, with motor pins connected to 2, 3, 4, 5 and two IR sensors connected to pins 6 and 7.

Features
Edge Detection: Utilizes two IR sensors to detect the edges of the table, preventing the bot from falling off.
Simple Control: The bot is controlled by an Arduino board, making it easy to program and modify.
Customizable: You can easily adjust the sensor sensitivity or motor speed to suit different surfaces.

*Components
  Arduino Board
  2 DC Motors
  2 IR Sensors
  Motor Driver Module
  Chassis and Wheels
  Power Supply (Battery Pack)
*Pin Configuration
  Motor Pins:
  Motor 1: Pin 5 (IN1), Pin 4 (IN2)
  Motor 2: Pin 3 (IN3), Pin 2 (IN4)
  IR Sensors:
  Sensor 1: Pin 6
  Sensor 2: Pin 7

*Code Overview
  The code for this project controls the motors based on input from the IR sensors. 
  When a sensor detects the edge of the table, the corresponding motor stops or reverses direction, steering the bot away from the edge.

*Uploading the Code
  1. Connect your Arduino: Use the USB cable to connect your Arduino board to your computer.
  2. Select your board and port: In the Arduino IDE, go to Tools > Board and select your Arduino board. Then, go to Tools > Port and select the correct port for your Arduino.
  3. Upload the code: Click the upload button (right arrow) in the Arduino IDE to compile and upload the code to your Arduino board.

*Contributing
  If you would like to contribute to this project, feel free to fork the repository and submit a pull request. Contributions are welcome!

*Contact
  For any questions or suggestions, please feel free to open an issue or contact me at nasincubator@gmail.com or whatsapp us at +91 95990 63468/ 8920562814

By following these instructions, you should be able to successfully control an edge avoider bot with your Arduino board. Happy coding!

