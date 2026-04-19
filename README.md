# Finger Detection with MediaPipe & Arduino

Detects how many fingers are held up using a webcam or phone camera, and sends the count to an Arduino via serial.

## Features
- Detects both hands (0–5 fingers each)
- Sends finger count to Arduino over serial (COM9)
- Supports phone camera via IP Webcam app

## Requirements
- Python 3.11
- OpenCV, MediaPipe, pyserial
- Arduino connected to COM9
- (Optional) IP Webcam app for Android

## Setup
```bash
pip install opencv-python mediapipe pyserial
```

## Usage
```bash
python finger_count.py
```
To use phone camera, replace `VideoCapture(0)` with your phone's IP stream URL.

## Press `q` to quit
