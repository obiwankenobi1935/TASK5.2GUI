import tkinter as tk
from gpiozero import PWMLED

# Set up PWM control for the LEDs
red_led = PWMLED(17)
green_led = PWMLED(27)
blue_led = PWMLED(22)

def update_red_intensity(val):
    red_led.value = int(val) / 100  # Scale the slider value (0-100) to PWM (0-1)

def update_green_intensity(val):
    green_led.value = int(val) / 100  # Scale the slider value (0-100) to PWM (0-1)

def update_blue_intensity(val):
    blue_led.value = int(val) / 100  # Scale the slider value (0-100) to PWM (0-1)

root = tk.Tk()
root.title("LED Intensity Control")

red_slider = tk.Scale(root, from_=0, to=100, orient="horizontal", label="Red LED Intensity", command=update_red_intensity, fg="red")
red_slider.pack(padx=10, pady=5)

green_slider = tk.Scale(root, from_=0, to=100, orient="horizontal", label="Green LED Intensity", command=update_green_intensity, fg="green")
green_slider.pack(padx=10, pady=5)

blue_slider = tk.Scale(root, from_=0, to=100, orient="horizontal", label="Blue LED Intensity", command=update_blue_intensity, fg="blue")
blue_slider.pack(padx=10, pady=5)

root.mainloop()

