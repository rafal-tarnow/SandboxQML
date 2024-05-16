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

    Rectangle {
        id: yellowRectangle
        x: 100
        y: 100
        width: root.width * 0.5
        height: root.height * 0.5
        color: "yellow"
        Component.onCompleted: {
            greenWidget.onYellowRectangleChanged(yellowRectangle.x,
                                                 yellowRectangle.y,
                                                 yellowRectangle.width,
                                                 yellowRectangle.height)
        }
        onXChanged: {
            greenWidget.onYellowRectangleChanged(yellowRectangle.x,
                                                 yellowRectangle.y,
                                                 yellowRectangle.width,
                                                 yellowRectangle.height)
        }
        onYChanged: {
            greenWidget.onYellowRectangleChanged(yellowRectangle.x,
                                                 yellowRectangle.y,
                                                 yellowRectangle.width,
                                                 yellowRectangle.height)
        }
        onWidthChanged: {
            greenWidget.onYellowRectangleChanged(yellowRectangle.x,
                                                 yellowRectangle.y,
                                                 yellowRectangle.width,
                                                 yellowRectangle.height)
        }
        onHeightChanged: {
            greenWidget.onYellowRectangleChanged(yellowRectangle.x,
                                                 yellowRectangle.y,
                                                 yellowRectangle.width,
                                                 yellowRectangle.height)
        }
    }
}
