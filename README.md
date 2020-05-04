# UTF-8 Graphic Font Library for Microcontroller.
<table border="0">
    <td width="50%">
        <img src="http://i.imgur.com/WlAtoPe.jpg"></img>
    </td>
    <td width="50%">
        <img src="http://i.imgur.com/tTaVG7u.jpg"></img>
    </td>
</table>
รายละเอียดการใช้งาน
ไลบรารี่นี้สร้างเพื่อการเรนเดอร์ตัวอักษรตามมาตรฐาน UTF-8 , โดยสามารถแปลงฟอนต์นามสกุล .ttf หรือ otf ผ่านแอป DW Font Exporter
ไลบรารี่ตัวนี้สามารถใช้งานได้กับทุกๆรูปแบบ แต่ขณะนี้ทางเราออกแบบให้ใช้กับ Arduino บน ESP8266 ก่อน

ขั้นตอนการติดตั้งตัวอย่างบน Arduino สำหรับ ESP8266
1. คัดลอกโฟลเดอร์ทั้งหมดใน src/arduino/libraries ไปยัง Documents/Arduino/libraries
2. เปิดโปรแกรม Arduino
3. เปิดตัวอย่าง File -> Examples -> dw_utf8_gfont_library -> OLED_ESP8266 สำหรับใช้งาน OLED บน ESP8266 และ เปิดตัวอย่าง  File -> Examples -> dw_utf8_gfont_library -> OLED_MEGA2560 สำหรับ OLED บน Arduino MEGA2560

การสร้างฟอนต์ 
สำหรับ Windows
ดาวน์โหลดซอฟต์แวร์ตรงๆ ได้จากลิงก์
(https://github.com/deaware/dw_utf8_gfont_library/blob/master/generator_app/dwFontExporter/dwFontExporter_win32_release_v1.0.zip?raw=true)

สำหรับ Mac : ยังไม่รองรับตอนนี้ แต่สามารถคอมไพล์ผ่าน Qt direct จากซอร์สโค้ด โดยจะต้องติดตั้ง freetype library ก่อนการคอมไพล์ 
สำหรับ Linux : ยังไม่รองรับตอนนี้ แต่สามารถคอมไพล์ผ่าน Qt direct จากซอร์สโค้ด โดยจะต้องติดตั้ง freetype library ก่อนการคอมไพล์ 

ข้อจำกัด
สำหรับฟอนต์ไทยบางฟอนต์ยังมีปัญหาเรื่องสระและวรรณยุกต์YUK.
การแก้ปัญหาในเวอร์ชั่นถัดไป
- แก้ไขข้อจำกัดต่างๆ 
- เพิ่มฟอนต์ให้ครอบคลุมนานาชาติมากขึ้นเช่น จีน ญี่ปุ่น 
