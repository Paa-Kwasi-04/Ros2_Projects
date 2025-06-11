# Example: Reading joystick input with PySDL2

import sys
import sdl2
import sdl2.ext

def main():
    sdl2.SDL_Init(sdl2.SDL_INIT_JOYSTICK)
    if sdl2.SDL_NumJoysticks() < 1:
        print("No joystick connected!")
        return

    joystick = sdl2.SDL_JoystickOpen(0)
    if not joystick:
        print("Could not open joystick!")
        return

    print("Joystick opened:", sdl2.SDL_JoystickName(joystick).decode())

    running = True
    event = sdl2.SDL_Event()
    while running:
        while sdl2.SDL_PollEvent(event):
            if event.type == sdl2.SDL_QUIT:
                running = False
            elif event.type == sdl2.SDL_JOYAXISMOTION:
                print(f"Axis {event.jaxis.axis} value: {event.jaxis.value}")
            elif event.type == sdl2.SDL_JOYBUTTONDOWN:
                print(f"Button {event.jbutton.button} pressed")

    sdl2.SDL_JoystickClose(joystick)
    sdl2.SDL_Quit()

if __name__ == "__main__":
    main()