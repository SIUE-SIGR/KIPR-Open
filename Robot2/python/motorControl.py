__author__ = 'Ryan Owens'
__Creation_Date__ ='06/25/2016'
__Last_Update__ = '06/25/2016'

import sys
import serial
import time

class MotorControl:
    def __init__(self, serialConnection, command_terminator, debug=True):
        self.__serialConnection = serialConnection
        self.__terminator = command_terminator
        self.__MAV = "a"
        self.__MOV = "b"
        self.__GETV = "c"
        self.__STOP = "l"
        self.__ENCODER_1_COUNT = "h"
        self.__EMCODER_2_COUNT = "i"
        self.__RESET_ENCODER_1_COUNT = "j"
        self.__RESET_ENCODER_2_COUNT = "k"
        self.__FORWARD = "m"
        self.__REVERSE = "n"
        self.__LEFT = "o"
        self.__RIGHT = "p"

        self.__DEBUG = debug
        self.__is_moving_forward = False
        self.__is_left = False;
        self.__is_stopped = True
        self.stop()

    def set_direction_Forward(self):
        self.__is_stopped = False
        self.__is_moving_forward = True
        self.__serialConnection.send_command(self.__FORWARD, self.__terminator)
        if self.__DEBUG:
            print("Setting direction to forward.")
            print(self.__serialConnection.get_response())

    def set_direction_Reverse(self):
        self.__is_stopped = False
        self.__is_moving_forward = False
        self.__serialConnection.send_command(self.__REVERSE, self.__terminator)
        if self.__DEBUG:
            print("Setting direction to reverse.")
            print(self.__serialConnection.get_response())

    def set_direction_Left(self):
        self.__is_left = True
        self.__serialConnection(self.__LEFT, self.__terminator)
        if self.__DEBUG:
            print("Setting direction to left.")
            print(self.__serialConnection.get_response())


    def set_direction_Right(self):
        self.__is_left = True
        self.__serialConnection(self.__RIGHT, self.__terminator)
        if self.__DEBUG:
            print("Setting direction to Right.")
            print(self.__serialConnection.get_response())


    def move_at_velocity(self, velocity):
        pass

    def move_at_percentage(self, percentage):
        self.__serialConnection.send_command(self.__MOV, percentage, self.__terminator)
        if self.__DEBUG:
            print("Moving at " + str(percentage) + " %")
            print(self.__serialConnection.get_response())

    def stop(self):
        if self.__is_stopped is False:
            self.__is_stopped = True
            self.__serialConnection.send_command(self.__STOP, self.__terminator)
            if self.__DEBUG:
                print("Stopping")
                print(self.__serialConnection.get_response())
        else:
            if self.__DEBUG:
                print("System is already stopped, ignoring command.")

    def get_velocity(self):
        if self.__is_stopped:
            return 0.0;
        else:
            self.__serialConnection.send_command(self.__GETV, self.__terminator)
            if self.__DEBUG:
                print("Getting current velocity.")
                print(self.__serialConnection.get_response())
            # TODO confirm the result should be a double
            return float(self.__serialConnection.get_response())

    def get_encoder_1_count(self):
        self.__serialConnection.send_command(self.__ENCODER_1_COUNT, self.__terminator)
        if self.__DEBUG:
            print("Getting encoder 1 count.")
            print(self.__serialConnection.get_response())
        # TODO confirm result
        return float(self.__serialConnection.get_response())

    def get_encoder_2_count(self):
        self.__serialConnection.send_command(self.__ENCODER_2_COUNT, self.__terminator)
        if self.__DEBUG:
            print("Getting encoder 2 count.")
            print(self.__serialConnection.get_response())
        # TODO confirm result
        return float(self.__serialConnection.get_response())

    def reset_encoder_1_count(self):
        self.__serialConnection.send_command(self.__RESET_ENCODER_1_COUNT)
        if self.__DEBUG:
            print("Resetting encoder 1 count")
            print(self.__serialConnection.get_response())

    def reset_encoder_2_count(self):
        self.__serialConnection.send_command(self.__RESET_ENCODER_2_COUNT)
        if self.__DEBUG:
            print("Resetting encoder 2 count")
            print(self.__serialConnection.get_response())

    def reset_encoders_count(self):
        if self.__DEBUG:
            print("Resetting both encoder counts.")
        self.reset_encoder_1_count()
        self.reset_encoder_2_count()
