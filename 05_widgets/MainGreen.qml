import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtCore
import QtQuick3D
import QtQuick3D.Helpers

Rectangle {
    id: root
    width: 600
    height: 300
    color: "green"
    Button {
        id: button
        text: "Click"
    }

    Sample3D {
        id: view
        //anchors.fill: parent
        anchors.top: button.bottom
        anchors.left: button.left
        // x: 0
        // y: 0
        // z: 1
        width: 200
        height: 200
    }
}
