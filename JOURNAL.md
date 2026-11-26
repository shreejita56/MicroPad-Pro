## November 22  -   2.5 hour
### MADE THE SCHEMATICS 

So I started with making the schematics . First I added switch and diode symbol <br><img width="400" height="295" alt="Screenshot 2026-11-25 030242" src="https://github.com/user-attachments/assets/9134db36-5f19-413f-92fe-31311a5af7f0" /> 
<br>and added the footprints onto it then I made a  3X3 Switch Matrix out of it 
  <img width="577" height="500" alt="Screenshot 2026-11-25 030454" src="https://github.com/user-attachments/assets/9df5695c-c889-4df9-ad2e-ba8de55aa145" /><br>
 then I added three rotor encoder
 <img width="951" height="298" alt="Screenshot 2026-11-25 030940" src="https://github.com/user-attachments/assets/454395c0-7fec-4208-8831-9d2881983e13" /> <br>
 after that I routed the Rows and columns of the matric and added labels onto it also I added the respective labels onto the encoders 
 <img width="352" height="553" alt="Screenshot 2026-11-25 031203" src="https://github.com/user-attachments/assets/e353da68-88c8-4c06-b9ce-f851eca0006d" /><br> then I added the PRO-MICRO and labeled everything onto it and this is the final schematics  look 
 <img width="795" height="571" alt="Screenshot 2026-11-25 032035" src="https://github.com/user-attachments/assets/99ff48c7-6049-4677-a441-0f2cbcccee07" /><br>
NOW We will make the PCB layout 

## November 22  -   1.75 hour
### MAKING THE PCB LAYOUT

SO I started with making the layout for the PCB . First I Updated the PCB editor and I saw that few components were missing because I forgot to add footprints to them this is how it looks now<br> <img width="453" height="483" alt="Screenshot 2026-11-25 051804" src="https://github.com/user-attachments/assets/90cbc367-1fc6-4714-9e56-7e202ff3c9cd" /><br> then I started with aligning the Switches . Which was a tricky job as switches didn't snaped together . SO I had to use multiple grid of different size to do that <img width="1030" height="661" alt="Screenshot 2026-11-25 052100" src="https://github.com/user-attachments/assets/0fc6faae-39b3-446c-b5cf-bc519f41a393" /><br> after that I aligned the Diodes respective to the connected switch <img width="627" height="482" alt="Screenshot 2026-11-25 052242" src="https://github.com/user-attachments/assets/6831be8b-88c5-4769-8c58-730065469a82" /><br> then I placed the Pro Micro and the three rotor encoder and made sure that the board remains compact <img width="492" height="665" alt="Screenshot 2026-11-25 052323" src="https://github.com/user-attachments/assets/d6a6bf98-03ac-4fce-aaad-767302541b2f" /><br>then at the end I added the curved boundary and text LOGO onto it <img width="536" height="660" alt="Screenshot 2026-11-25 052723" src="https://github.com/user-attachments/assets/74b89d4b-7985-49ab-b276-5525c262f5f0" /><br> <img width="425" height="640" alt="Screenshot 2026-11-25 052732" src="https://github.com/user-attachments/assets/179ac8f5-cfcf-4f06-bc18-d52a3348da38" /> <br> the diodes were on upside SO I moved them down FINAL LOOK<br> <img width="482" height="677" alt="Screenshot 2026-11-25 052848" src="https://github.com/user-attachments/assets/cb24c212-39d2-4581-a19e-e2bae698563a" /><br> NOW We Will rout the PCB 

## November 23  -   2.0 hour
### Routing the PCB 

So I started up with routing the PCB First I routed the Columns and the diodes to the switch  <img width="925" height="763" alt="Screenshot 2026-11-25 061003" src="https://github.com/user-attachments/assets/58cf9568-c960-41ef-8bd5-983d9931f3d0" /> <br> after that I routed the rows <img width="910" height="770" alt="Screenshot 2026-11-25 061031" src="https://github.com/user-attachments/assets/7d2de425-bb75-49ac-a47b-a20a4558c6c4" /> <br> then I saw a connection error on the PCB due to misconection of the label<br> <img width="1010" height="703" alt="Screenshot 2026-11-25 061357" src="https://github.com/user-attachments/assets/dc301d6b-96da-4b12-be39-1f7612409722" />
<br> which I solved then after that I started routing the Rows and the columns to the MCU and I used via where necessary and tried to make the routs clean , this is how it look it looks <br><img width="367" height="560" alt="Screenshot 2026-11-25 061520" src="https://github.com/user-attachments/assets/87127429-817e-4863-a33b-f135045b7186" /> <br>after that I connected all the connection for the 3 Rotor Encoders as well excapt the GND  <img width="436" height="592" alt="Screenshot 2026-11-25 061707" src="https://github.com/user-attachments/assets/98812b19-afb5-4589-8cac-f8f51bf635a7" /><br> FOr GND I used fillzone on both layer and this is how the board looks <img width="607" height="666" alt="Screenshot 2026-11-25 061747" src="https://github.com/user-attachments/assets/312a8566-3788-41d5-823f-531b8e7eb8e7" /> <img width="520" height="747" alt="Screenshot 2026-11-25 061758" src="https://github.com/user-attachments/assets/8ec7017a-b9ea-4adb-b96b-4ceec1494ece" /> <br> then I DRC the board and everything Looks Good to go with . NOW we will make the CAD for The MICROPAD

## November 24  -   0.75 hour
### Added all the 3D Components onto the PCB in Fusion 
So I didn't had 3D Files of the switches , Arduino Pro-Micro , and the rotor Encoder . So I downloaded all of them from the Web and in Fusion I added all those components onto the PCB on there desired position
<br><img width="632" height="682" alt="Screenshot 2026-11-25 175059" src="https://github.com/user-attachments/assets/e4c39d05-f3bf-46bb-813c-9fcd698b95a6" />



## November 24  -   2.5 hour
### Making The CASE 

So I sketches the outline of the PCB with some relief space and sketches it's boundary with screw holes and it looks like this <br> <img width="527" height="617" alt="Screenshot 2026-11-25 175519" src="https://github.com/user-attachments/assets/4dfa50d9-b82a-41b8-b602-bdd64e75434c" /><br> <img width="408" height="562" alt="Screenshot 2026-11-25 175526" src="https://github.com/user-attachments/assets/aa032c37-0214-4c9e-b372-3f7caba28aeb" /><br> then I started making the Bottom Case design <br> <img width="655" height="573" alt="Screenshot 2026-11-25 175545" src="https://github.com/user-attachments/assets/c6d45838-93fc-4a05-92c4-cd7a758d6d24" /> <br> <img width="783" height="562" alt="Screenshot 2026-11-25 175623" src="https://github.com/user-attachments/assets/3c60a35b-3004-4f71-b4f1-a64f82bc6a11" /> <br> after that I sketched the Top Case design<br> <img width="486" height="587" alt="Screenshot 2026-11-25 175830" src="https://github.com/user-attachments/assets/51545df7-214c-4b70-87a6-ef78f909a342" /><br> and made cuts onto it for switches<br>  <img width="567" height="542" alt="Screenshot 2026-11-25 175925" src="https://github.com/user-attachments/assets/fef0d367-226f-4263-be10-2b2e44ea5989" /> <br>and rotor encoder <br> <img width="557" height="536" alt="Screenshot 2026-11-25 180045" src="https://github.com/user-attachments/assets/54212b67-dfd9-4591-9fb9-5f6794c4d945" /><br> this is how it looks for now<br> <img width="692" height="510" alt="Screenshot 2026-11-25 180205" src="https://github.com/user-attachments/assets/7c47e75a-a89c-4634-a46e-18faf0a66051" />










 



 
