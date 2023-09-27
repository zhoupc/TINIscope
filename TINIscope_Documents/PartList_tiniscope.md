## Part list 


 <!-- For details on options of how to purchase/produce these components, go to the Part Procurement page of this wiki. -->

The core of TINIscope consists of a Rigid-Flex PCB, filter set, objective GRIN lens set, half-ball lens, and machined or printed housing, slider and baseplate. Below outlines the details of each of these components.
![Section diagram of TINIscope](../assets/tiniscope_diagram.png)


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
<img src="../assets/50cm cable2.jpg" alt="50cm cable" width="150" align="right"/>

A rigid-flex PCB is fabricated to connect the CMOS image sensor and DAQ board. The flex cable part is 50/70 cm to keep flexibility when the animal moves freely. The layer stack excel file should be strictly followed to simultaneously keep the stability of data transmission and the agility of animal.

The BOM is provided for the necessary components needed to be soldered on this PCB. After soldering them on PCB, 4 PCBs will be connected to 2 DAQ boards. These 2 DAQ boards will be then fixed on the 3D printed U-shape Bracekt.

<img src="../assets/pcb to daq.jpg" alt="pcb to daq" width="300"/>

### FPC for LED
This FPC is for a easier solder of LED twisted pair. The twisted pair should be as thinner as possible to keep the agility of animal.

<img src="../assets/LED fpc.jpg" alt="LED fpc" width="200"/> <img src="../assets/twisted pair.jpg" alt="twisted pair" width="200"/>

## Optical parts
### Half ball lens
<img src="../assets/parts of head scope/hall ball lens.png" alt="half ball lens" height="100" align="right"/>
The diamiter of half ball lens is 2 mm. This part can be purchased from:

* Edmund optics
* #45-933

### Excitation filter
<img src="../assets/parts of head scope/excitation filter.png" alt="excitation filter" height="100" align="right"/>
The size of excitation filter is diced to 2.8 * 1.8 mm. This part can be purchased from:

* Chroma
* ET470/40x

The size of it can be customized at Chroma, or be diced off at Sunlight-tech from a complete filter.
### Dichroic mirror
<img src="../assets/parts of head scope/dichroic mirror.png" alt="dichroic mirror" height="100" align="right"/>
The size of dichroic mirror is diced to 2.8 * 4 mm. This part can be purchased from:

* Chorma
* 59002bs

The size of it can be customized at Chroma, or be diced off at Sunlight-tech from a complete filter.
### GRIN objective lens
<img src="../assets/parts of head scope/grin objective lens.png" alt="GRIN objective lensr" height="100" align="right"/>
The VIS coating of this lens can help to deal with the stray light. This part can be purchased from:

* Edmund optics
* 64#537
### Plano-convex lens
<img src="../assets/parts of head scope/dichroic mirror.png" alt="dichroic mirror" height="100" align="right"/>
This part can be purchased from:

* Edmund optics
* #88-775
### Emission filter
<img src="../assets/parts of head scope/emision filter.png" alt="emission filter" height="100" align="right"/>
The size of emission filter is diced to 2.8 * 3 mm. This part can be purchased from:

* Chorma
* ET525/50m

The size of it can be customized at Chroma, or be diced off at Sunlight-tech from a complete filter.
