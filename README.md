# AOS RCA Video Controller
## Overview
This is a simple video controller for my [AOS operating system](https://github.com/OrangeFlash81/AOS). It listens to the hardware serial port and outputs bytes it receives to a connected PAL television using a composite video jack.

## Usage
For this to work, set up a circuit as described on the [TVout library documentation](https://playground.arduino.cc/Main/TVout) and then simply send the Arduino data over serial. (For a Toshiba TV I didn't need the extra resistor between VID and GND.)

## Remarks
There is definitely optimisation work that could be done; letters are skipped quite often when attempting to use a 9600 baud connection. I'm playing it safe and using a 600 baud connection currently, which makes the output look noticably juddery; it could probably go a fair bit higher safely.

## Notices
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.