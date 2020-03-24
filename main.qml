import QtQuick 2.12
import QtQuick.Window 2.12
import Felgo 3.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Felgo")

    Text {
        anchors.centerIn: parent
        text: qsTr("Hello Felgo")
    }
}
