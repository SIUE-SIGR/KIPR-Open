__authors__ = 'Ryan Owens'
__Creation_Date__ = '07/03/2016'
__Last_Update__ = '07/03/2016'

try:
    import RPi.GPIO as GPIO
except RuntimeError:
    print("Error importing RPi.GPIO!  This is probably because you need superuser privileges.  You can achieve this by using 'sudo' to run your script")

class Raspi:
    def __init__(self, led_pin = 21, debug = True):
        self.__HIGH = GPIO.HIGH
        self.__LOW = GPIO.LOW
        self.__IN = GPIO.IN
        self.__OUT = GPIO.OUT
        self.__mode_set = []
        self.__output_pins = []
        self.__input_pins = []
        self._DEBUG = debug
        self.__LED = led_pin
        for i in range(1, 28):
            # If we change a pin to output/input don't allow it to be changed again
            self.__mode_set.append(False)

        GPIO.setmode(GPIO.BCM) # So we can use normal pin numbers
        GPIO.setwarnings(False) # no warnings about output pin modes
        self.set_led_pin_on()

    def set_pin_to_output(self, pin):
        if 1 < pin < 28:
            if self.__mode_set[pin] is False:
                self.__mode_set[pin] = True
                self.__output_pins.append(pin)
                GPIO.setup(pin, self.__OUT)
            elif self._DEBUG is True:
                print("Unable to set " +  str(pin) + " to output, it has already been set")
        elif self._DEBUG is True:
            print(str(pin) + " is not a valid pin")

    def set_pin_to_input(self, pin):
        if 1 < pin < 28:
            if self.__mode_set[pin] is False:
                self.__mode_set[pin] = True
                self.__input_pins.append(pin)
                GPIO.setup(pin, self.__IN)
            elif self._DEBUG is True:
                print("Unable to set " +  str(pin) + " to input, it has already been set")
        elif self._DEBUG is True:
            print(str(pin) + " is not a valid pin")

    def set_pin_to_high(self, pin):
        if pin in self.__output_pins:
            GPIO.output(pin, self.__HIGH)
        elif self._DEBUG is True:
            print("Pin is not in the list of output pins.")

    def set_pin_to_low(self, pin):
        if pin in self.__output_pins:
            GPIO.output(pin, self.__LOW)
        elif self._DEBUG is True:
            print("Pin is not in the list of output pins.")

    def get_pin_input(self, pin):
        if pin in self.__input_pins:
            return GPIO.input(pin)
        elif self._DEBUG is True:
            print("Pin is not in the list of input pins.")

    def raspi_info(self):
        return GPIO.RPI_INFO

    def raspi_version(self):
        return GPIO.VERSION

    def set_all_pins_to_low(self):
        for x in range(1, 28):
            self.set_all_pins_to_low(x)

    def end(self):
        GPIO.cleanup()

    def set_led_pin_on(self):
        self.set_pin_to_output(self.__LED)
        self.set_pin_to_high(self.__LED)
