## Part list 


 <!-- For details on options of how to purchase/produce these components, go to the Part Procurement page of this wiki. -->

The core of TINIscope consists of a Rigid-Flex PCB, filter set, objective GRIN lens set, half-ball lens, and machined or printed housing, slider and baseplate. Below outlines the details of each of these components.
![Section diagram of TINIscope](../assets/tiniscope_diagram.png)

<img src="https://github.com/zhoupc/TINIscope/assets/51817953/3250388c-eef1-4473-91dc-a9a9d50e34c2" alt="animation of neural activity recorded in a mouse using the TINIscope" width="300" align="right" />

* BL: blue LED
* HL, half-ball lens
* ExF, excitation filter
* DM, dichroic mirror
* GL, GRIN objective lens
* CL, convex lens
* EmF, emission filter
* CC, CMOS camera.


<video src="../assets/tiniscope_parts.mp4" controls title="Title" width=400></video>
## Machined or Printer Parts 
The print and CNC files for the TINIscope housing and base plate can be found in the "TINIscope_Housing" folder of this repository. 

There are 3 parts 3D printed by the printer Form 2 from formlabs. The material is their normal blackresin. Form3 has also been tested to achieve better printing resolution with same material. The optional materials could be PU Rigid 1000/650 Resin, which are more durable from their description. However, these materials were unable to be purchased from our areas and therefore we did not test them.

The baseplate is CNC machined.

### Housing
<img src="../assets/parts of head scope/housing.png" alt="housing" width="150" align="right" />
The main housing of TINIscope fits all the optical parts. A intruction will help to illustrate how to assemble it with these optical parts, pleaase refer to the [Step-by-step assembly](./TINIscope_Documents/Assembly.md).
<br><br>

### Slider
<img src="../assets/parts of head scope/slider.png" alt="slider" width="100" align="right" />
The slider is used to fit the CMOS image sensor and mate with the housing to adjust the focal plane of TINIscope. A longer slider range could achieve wider adjustment range of focal palne. The slider has a hole to fit with with a M1 self-tapping screw, after the adjustment of focal plane is finished, the screw help to secure it with the housing.

### Led cap
<img src="../assets/parts of head scope/led cap.png" alt="led cap" width="100" align="right" />
The illumination path is highly dependent on the precise placement of hall ball lens and LED, so a led cap is utilized after the hall ball lens is placed right in the middle of the illumination path to keep the precise placement of LED.

### Led cap
<img src="../assets/parts of head scope/baseplate.png" alt="baseplate" width="100" align="right" />
The baseplate is CNC machined mainly due to consideration of keep durability of its 2 M1 screw thread. The hole to fit the GRIN objective lens should be as precise as possile to obtain good image quality.
<br><br>

## PCB 
The fabrication files for the TINIscope PCB can be found in the "TINIscope_PCB" folder of this repository. 

### Rigid-flex PCB 
<img src="../assets/50cm cable.jpg" alt="50cm cable" width="1000" />
<img src="../assets/pcb to daq.jpg" alt="pcb to daq" width="150" align="right" />
A rigid-flex PCB is fabricated to connect the CMOS image sensor and DAQ board. The flex cable part is 50/70 cm to keep flexibility when the animal moves freely. The layer stack excel file should be strictly followed to simultaneously keep the stability of data transmission and the agility of animal.

The BOM is provided for the necessary components needed to be soldered on this PCB. After soldering them on PCB, 4 PCBs will be connected to 2 DAQ boards. These 2 DAQ boards will be then fixed on the 3D printed U-shape Bracekt.

### FPC for LED

## Optical filters 
