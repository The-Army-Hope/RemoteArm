What is the "The Army" project?

The Army is a school project born out of the "Hope" (Hands on Physics Experience) initiative, proposed by our school (La Briola) in collaboration with the Massachusetts Institute of Technology (MIT). The goal of the project is to develop a mechanical arm that can be remotely controlled over long distances (via an internet connection) or short distances using Bluetooth.


---

Phase 1: Planning

After brainstorming basic ideas, we decided to adapt an old school project, which consisted of a simple motorized gripper, into something much more functional: a complete arm, including an elbow, entirely based on Arduino and its ecosystem. The addition of "Arduino Cloud" allows communication between the controls and the arm, even across entire continents.

Our six-person team divided the main tasks as follows:

Communication

3D Modeling

Assembly

Programming



---

Phase 2: Gathering Resources for the Initial Sketch

The 3D modeling team immediately began searching for a base model to work from, finding it at https://www.thingiverse.com/thing:2269115.
Meanwhile, the communication team researched how to use Arduino Cloud and collaborated with the programming team to transmit initial inputs through Arduino Cloud. This enabled the physical movement of servo motors provided by school funds.

The first draft of the mobile app was created using MIT App Inventor but was set aside since the application will only be used in the final project for short-distance communications.


---

Phase 3: Developing the First Prototype (Current Phase)

Using the school's 3D printer, the modeling team completed the printing of all essential parts, enabling the assembly team to begin their work. Compared to the original model, some parts were refined and modified using Blender. Notably, the last 3D-printed parts were combined to improve grip strength.

The communication and programming teams wrote the necessary code for data transmission between two Arduinos connected via Arduino Cloud. They also implemented the code required to input passwords, allowing the Arduinos to connect to Wi-Fi.

Additionally, the first draft of the project's website was created, aiming to serve as a wiki for the project. It is currently viewable but still a work-in-progress at: 
the-army-hope.github.io


---

Next Steps

At this stage, our goal is to fully control the arm remotely. Once all connectivity issues are resolved, we will proceed to a final polishing phase, improving both the code and the physical design of the parts.

While we were developing the final connection for the 3 united fingers,  Edd suggested to try integrating VIRTUAL REALITY into our project, including feedback for grabbing objects;  This suggestion is inspired  from Lucas de bonet's glove, and even thought it sounds pretty difficult, well'try to do it.

We also decided to split the three fingers once more, so that the final hand has 2 united, and longer fingers along with a free middle finger  (we can finally flip people off! :> )
