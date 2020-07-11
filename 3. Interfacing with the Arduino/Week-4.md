<h1>INTRUDER DETECTION SYSTEM</h1>
<br><b>Requirements:</b><br>
1.	Arduino: Open-source electronic prototyping platform enabling users to create interactive electronic objects.<br>
2.	Arduino Wi-Fi Shield: The Arduino WiFi shield allows an Arduino board to connect to the internet using the WiFi library and to read and write an SD card using the SD library.<br> 
3.	Motion Sensors: Passive Infra Red sensors can detect movement of objects that radiate IR light (like human bodies). Therefore, using these sensors to detect human movement or occupancy in security systems is very common. Initial setup and calibration of these sensors takes about 10 to 60 seconds.<br>
4.	CCTV:  Closed-circuit television (CCTV), also known as video surveillance, is the use of video cameras to transmit a signal to a specific place, on a limited set of monitors.<br>
5.	Ultrasonic Sensors: An ultrasonic sensor is an electronic device that measures the distance of a target object by emitting ultrasonic sound waves, and converts the reflected sound into an electrical signal.<br>
<br><b>Description:</b><br>
This strives to be a slightly improved home security system. Uses a Wi-Fi shield and sensors such as the motion sensor (PIR), CCTVs and Ultrasonic distance sensors. 
All the before-mentioned sensors are connected to the Arduino through the Wi-Fi Shield. The CCTV footage is continously sent to cloud data servers for storage and later monitoring use. The motion sensor is set to trigger a notification/ sound alert or another event to alert the user of detected movement. Also, the CCTV data sent to the cloud server is monitored by an object detection algorithm which on detecting an intruder, sends the footage to the nearest police station with address details for immediate help.  
The ultrasonic sensors are placed on strategic areas of the fence, so as to cover the whole area and is placed on the ground facing upwards, incase of the distance detection being too close the owner is notified via a notification or sound alert or another event. This feature alone will only be activated when the user is not at home and at night time. The rest are always active.
<br><br><b>Need for network connection:</b><br>
1.	Storage of CCTV footage.<br>
2.	Transmission of footage to nearby police stations during call for help.<br>
3.	Sending online notification to the user to alert them.<br>
4.	To run the object detection algorithm on the CCTV footage continously.<br>


