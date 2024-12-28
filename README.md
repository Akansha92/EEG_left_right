Project Overview: EOG-Based Direction Detection with Arduino

Introduction

This project utilizes an Arduino microcontroller to interpret Electrooculography (EOG) signals and determine the direction of a person’s gaze. The program processes input signals and outputs the detected direction (“Left” or “Right”) to the Arduino Serial Monitor. This system can be used for various applications such as assistive technology, human-computer interaction, or control systems.

Features

Detects gaze direction (left or right) using EOG signals.

Outputs direction in real-time to the Arduino Serial Monitor.

Modular and easily adaptable for additional functionality.

Files

eog_LR.ino: The Arduino sketch file containing the code for processing EOG signals and determining the gaze direction.

Prerequisites

Hardware Requirements:

Arduino board (e.g., Arduino Uno, Nano, etc.)

EOG signal acquisition system (electrodes and amplifier circuit).

USB cable for programming and data transfer.

Software Requirements:

Arduino IDE installed on your computer.

Serial Monitor to view real-time output.

Installation and Setup

Connect the hardware components:

Attach the EOG electrodes as per the manufacturer’s instructions.

Connect the output of the amplifier circuit to an analog pin on the Arduino.

Open the Arduino IDE and load the eog_LR.ino file.

Select the appropriate COM port and board in the Arduino IDE.

Upload the code to the Arduino.

Open the Serial Monitor in the Arduino IDE to view the output.

Usage

Ensure the EOG electrodes are properly positioned to capture horizontal eye movements.

Run the system and observe the Serial Monitor output.

The Serial Monitor will display:

"Left" when the person looks to the left.

"Right" when the person looks to the right.

Customization

The code can be modified to include additional functionalities such as detecting upward or downward gaze.

Adjust the threshold values in the code to fine-tune the detection accuracy based on your hardware setup.

Troubleshooting

If the system is not detecting directions accurately:

Verify the connections of the EOG electrodes and amplifier circuit.

Ensure the Arduino is correctly receiving the analog signals.

Adjust signal processing parameters in the code as needed.

Future Enhancements

Integrating machine learning for more precise gaze direction classification.

Adding support for more complex gaze patterns or multi-direction detection.

Developing a graphical user interface (GUI) for real-time visualization.

License

This project is open-source and available for personal and educational use.
