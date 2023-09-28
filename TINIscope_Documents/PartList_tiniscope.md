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
The print and CNC files for the TINIscope housing and baseplate are located in the [TINIscope_Housing](../TINIscope_Housing/) folder of this repository.

Three parts were 3D printed using the Form 2 printer from formlabs, utilizing their normal black resin material. Additionally, testing was conducted with the Form 3 printer to achieve enhanced printing resolution while using the same material. Optional materials such as PU Rigid 1000/650 Resin, which offer improved durability according to their description, were considered. However, due to unavailability in our local area, we were unable to purchase these materials for testing purposes.


The baseplate is CNC machined.

### Body
<img src="../assets/parts of head scope/housing.png" alt="body" width="150" align="right" />
The main body of TINIscope fits all the optical parts. A intruction will help to illustrate how to assemble it with these optical parts, pleaase refer to the [Step-by-step assembly](./Assembly.md).
<br><br>

### Slider
<img src="../assets/parts of head scope/slider.png" alt="slider" width="100" align="right" />
The slider serves the purpose of accommodating the CMOS image sensor and aligning with the body to enable focal plane adjustments for the TINIscope. A wider range of focal plane adjustment can be achieved by utilizing a longer slider range. The slider features a hole designed to fit an M1 self-tapping screw, which helps secure it to the body once the focal plane adjustment is complete.

### Led cap
<img src="../assets/parts of head scope/led cap.png" alt="led cap" width="100" align="right" />
The precise positioning of the hall ball lens and LED is crucial for ensuring an optimal illumination path. To maintain the accurate placement of the LED, a led cap is used after correctly positioning the hall ball lens in the middle of the illumination path.

### Baseplate
<img src="../assets/parts of head scope/baseplate.png" alt="baseplate" width="100" align="right" />
The baseplate is primarily CNC machined to ensure the durability of its two M1 screw threads. Additionally, the hole for fitting the GRIN objective lens is designed with high precision to achieve optimal image quality.
<br><br>

## PCB 
The fabrication files for the TINIscope PCB can be found in the [TINIscope_PCB](../TINIscope_PCB/) folder of this repository. 

### Rigid-flex PCB 
<img src="../assets/50cm cable2.jpg" alt="50cm cable" width="150" align="right"/>

To establish a connection between the CMOS image sensor and DAQ board, a rigid-flex PCB is created. The flex cable portion of the PCB is designed to be 50/70 cm in length, ensuring flexibility when the animal moves freely. It is crucial to follow strictly to the layer stack excel file to maintain both stable data transmission and accommodate the animal's agility simultaneously.

The Bill of Materials (BOM) includes all the essential components required to be soldered onto this PCB. Once these components are soldered onto the PCB, four PCBs will be connected to two DAQ boards. Subsequently, these two DAQ boards will be securely mounted on the 3D printed U-shaped Bracket.

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
