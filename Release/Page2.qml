import QtQuick 2.9
import QtQuick.Controls 2.2
Item {
    Page2Form {
        Button {
            id: button
            x: 47
            y: 88
            text: qsTr("open Joy")
            onClicked: {
                joystick.running = true;
            }
        }
        Button {
            id: button1
            x: 47
            y: 148
            text: qsTr("Close Joy")
            onClicked: {
                joystick.running = false;
            }
        }
        Button {
            id: button2
            x: 47
            y: 208
            text: qsTr("请求State信息")
            onClicked: {
                serial.sendState(1, 1, 1)
            }
        }
        Text {
            id: text1
            x: 288
            y: 102
            text: {
                serial.sendMove(joystick.axisZ, joystick.axisX, 3, joystick.axisQ, joystick.axisY, 0)
                return "axis:" + joystick.axis + "\n"
                   + "axisValue:" + joystick.axisValue + "\n"
                   + "button:"+ joystick.button + "\n"
                   + "buttonPressed:" + joystick.buttonPressed + "\n";
            }

            font.pixelSize: 12
        }
        Text {
            id: text2
            x: 288
            y: 182
            text: {
                serial.sendMove(joystick.axisZ, joystick.axisX, 3, joystick.axisQ, joystick.axisY, joystick.button_PATH)
               return "EAC:" + joystick.button_EAC + "\n"
                  + "RDR:" + joystick.button_RDR + "\n"
                  + "PATH:"+ joystick.button_PATH + "\n"
                  + "ALT:" + joystick.button_ALT + "\n"
                  + "APU:" + joystick.button_APU + "\n"
                  + "STOP:"+ joystick.button_STOP + "\n"
                  + "ENGAGE:" + joystick.button_ENGAGE + "\n";
            }
            font.pixelSize: 12
        }
        Timer{
            id:t
            interval: 500
            repeat: true
            running: true
            onTriggered:{
                //serial.sendState(1, 1, 1)
                //serial.sendSoundControl(1, 1, 1)
            }
        }
    }
}
