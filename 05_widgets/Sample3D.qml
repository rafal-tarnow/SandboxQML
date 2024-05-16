import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtCore
import QtQuick3D
import QtQuick3D.Helpers

View3D {
    id: view

    //anchors.fill: parent
    x: 0
    y: 0
    //z: 1
    width: 200
    height: 200

    environment: SceneEnvironment {
        clearColor: "#000000"
        backgroundMode: SceneEnvironment.Color
        antialiasingMode: SceneEnvironment.MSAA
        antialiasingQuality: SceneEnvironment.High
    }

    PerspectiveCamera {
        position: Qt.vector3d(0, 200, 300)
        eulerRotation.x: -30
    }

    DirectionalLight {
        eulerRotation.x: -30
    }

    Model {
        //! [3dcube]
        id: cube
        source: "#Cube"
        materials: DefaultMaterial {
            diffuseColor: Qt.rgba(0.5, 1.0, 0.1, 1.0)
        }
        eulerRotation.y: 90

        //! [3dcube]
        Vector3dAnimation on eulerRotation {
            loops: Animation.Infinite
            duration: 5000
            from: Qt.vector3d(0, 0, 0)
            to: Qt.vector3d(360, 0, 360)
        }
    }
}
