# EMG-Controlled Bionic Hand Prototype

Arduino-based bionic hand prototype using EMG signal reading, servo motor control, and 3D-printed prosthetic components. The project includes Arduino code for reading electromyography-based analog input and controlling servo-driven hand movement, as well as STL files for the mechanical prosthetic parts.

This project was developed as an academic biomedical engineering prototype and later organized as part of a technical portfolio focused on prosthetics, embedded systems, medical device design, and assistive technology.

## Features

* Reads EMG-related analog input using an Arduino analog pin.
* Controls servo motor movement according to the detected signal threshold.
* Sends EMG values through serial communication for visualization and debugging.
* Includes 3D-printable STL files for prosthetic hand and forearm components.
* Contains two mechanical prototype versions:

  * Prototype 1: separated prosthetic components.
  * Prototype 2: final assembled prosthesis model.
* Demonstrates integration between electronics, programming, and mechanical design.

## Technologies Used

* Arduino / C++
* Servo motor control
* Analog signal acquisition
* Serial communication
* EMG signal-based control logic
* 3D modeling
* STL files for 3D printing
* Biomedical engineering prototyping

## Project Structure

```text
.
├── Plot.ino                  # Arduino code for EMG reading and servo control
├── Antebrazo.stl             # Forearm component
├── Chico.stl                 # Prototype component
├── Dedos.stl                 # Finger component
├── Escaneo.stl               # Scanned/model component
├── Palma.stl                 # Palm component
├── Pernos.stl                # Fastener/bolt component
├── Pines.stl                 # Pin component
├── Pulgar.stl                # Thumb component
└── protesis_vfinal (1).stl   # Final prosthesis prototype model
```

Recommended structure:

```text
.
├── README.md
├── src/
│   └── emg_bionic_hand_control.ino
├── 3d-models/
│   ├── prototype-1/
│   └── prototype-2/
└── docs/
    └── images/
```

## How It Works

1. The Arduino reads an analog EMG-related signal from pin `A1`.
2. The signal value is sent through the serial port at `9600` baud.
3. The program compares the EMG value against a threshold.
4. If the signal is above the threshold, the servo moves to the active hand position.
5. If the signal is below the threshold, the servo returns to the relaxed position.
6. The serial output can be used to observe signal behavior and tune the activation threshold.

## Basic Control Logic

```cpp
EMG = analogRead(A1);

if (EMG > 250) {
    myservo.write(180);
    delay(100);
} else {
    myservo.write(50);
    delay(100);
}
```

The threshold value can be adjusted depending on the EMG signal amplitude, sensor placement, and calibration conditions.

## Servo and Signal Mapping

| Component         | Arduino Pin  | Function                          |
| ----------------- | ------------ | --------------------------------- |
| EMG analog signal | A1           | Reads muscle activation signal    |
| Servo motor       | D3           | Controls prosthetic hand movement |
| Serial monitor    | USB / Serial | Displays EMG signal values        |

## Prototype Versions

| Prototype   | Description                                                                                                       |
| ----------- | ----------------------------------------------------------------------------------------------------------------- |
| Prototype 1 | Prosthetic model divided into separate STL components such as forearm, palm, fingers, thumb, pins, and fasteners. |
| Prototype 2 | Final prosthesis model included as a complete STL file.                                                           |

## Learning Outcomes

Through this project, I practiced:

* Arduino programming for biomedical prototypes.
* Analog signal acquisition from EMG-related input.
* Servo motor control based on threshold logic.
* Serial communication for signal visualization.
* Integration of electronics and mechanical prosthetic components.
* 3D-printable prosthesis design using STL models.
* Iterative prototyping for assistive technology.
* Biomedical engineering documentation and testing.

## Possible Improvements

* Rename `Plot.ino` to `emg_bionic_hand_control.ino`.
* Organize STL files into `3d-models/prototype-1/` and `3d-models/prototype-2/`.
* Add photos or renders of the assembled prosthesis.
* Add a wiring diagram showing the EMG input and servo connection.
* Add calibration notes for EMG threshold selection.
* Replace fixed threshold logic with adaptive thresholding.
* Add signal filtering to reduce noise in the EMG input.
* Expand the active control from one servo to multiple finger servos.
* Add a bill of materials for electronics and mechanical components.
* Add testing notes describing the movement range and response behavior.

## Notes

This project is an academic biomedical engineering prototype and is not intended to be used as a certified medical device. The design and code were developed for learning, prototyping, and demonstration purposes.
