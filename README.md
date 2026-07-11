# Smart Street Lighting System

## Overview

The Smart Street Lighting System is a C++ console-based project that simulates an intelligent street lighting system. It automatically controls street lights based on the time of day and vehicle detection, helping to reduce unnecessary energy consumption.

## Features

- Detects Day and Night mode.
- Turns street lights OFF during the day.
- Uses Sensor 1 to detect vehicles entering the road section.
- Supports up to 10 vehicles in a 100-meter road section.
- Keeps track of the number of vehicles inside the road section.
- Uses Sensor 2 to detect vehicles leaving the road section.
- Turns street lights OFF automatically when all vehicles have left.
- Displays the current system status throughout the simulation.

## Technologies Used

- C++
- Visual Studio Code
- Git
- GitHub

## How It Works

1. The user selects Day or Night mode.
2. During the day, the street lights remain OFF.
3. During the night, Sensor 1 checks for incoming vehicles.
4. If a vehicle is detected, the street lights turn ON.
5. The program counts the number of vehicles inside the 100-meter road section.
6. Sensor 2 monitors vehicles leaving the road.
7. When the last vehicle exits, the street lights automatically turn OFF.

## Project Information

- Language: C++
- IDE: Visual Studio Code
- Version Control: Git
- Repository: GitHub

## Author

**Muhammad Faizan**
