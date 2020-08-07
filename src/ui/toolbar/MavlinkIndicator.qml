import QtQuick          2.11
import QtQuick.Layouts  1.11

import QGroundControl                       1.0
import QGroundControl.Controls              1.0
import QGroundControl.MultiVehicleManager   1.0
import QGroundControl.ScreenTools           1.0
import QGroundControl.Palette               1.0

//-------------------------------------------------------------------------
//-- Mavlink Indicator
Item {
    id:             _root
    width:          (mavlinkValuesColumn.x + mavlinkValuesColumn.width) * 1.1
    anchors.top:    parent.top
    anchors.bottom: parent.bottom

    property bool showIndicator: true

    Component {
        id: mavlinkInfo

        Rectangle {
            width:  mavlinkCol.width   + ScreenTools.defaultFontPixelWidth  * 3
            height: mavlinkCol.height  + ScreenTools.defaultFontPixelHeight * 2
            radius: ScreenTools.defaultFontPixelHeight * 0.5
            color:  qgcPal.window
            border.color:   qgcPal.text

            Column {
                id:                 mavlinkCol
                spacing:            ScreenTools.defaultFontPixelHeight * 0.5
                width:              Math.max(gpsGrid.width, gpsLabel.width)
                anchors.margins:    ScreenTools.defaultFontPixelHeight
                anchors.centerIn:   parent

                QGCLabel {
                    id:             mavlinkLabel
                    text:           (activeVehicle && activeVehicle.mavlinkReceivedCount > 0) ? qsTr("MAVLink Status") : qsTr("MAVLink Data Unavailable")
                    font.family:    ScreenTools.demiboldFontFamily
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                GridLayout {
                    id:                 mavlinkGrid
                    visible:            (activeVehicle && activeVehicle.mavlinkReceivedCount > 0)
                    anchors.margins:    ScreenTools.defaultFontPixelHeight
                    columnSpacing:      ScreenTools.defaultFontPixelWidth
                    anchors.horizontalCenter: parent.horizontalCenter
                    columns: 2

                    QGCLabel { text: qsTr("Total messages sent:") }
                    QGCLabel { text: activeVehicle ? activeVehicle.mavlinkSentCount : qsTr("N/A", "No data to display") }
                    QGCLabel { text: qsTr("Total messages received:") }
                    QGCLabel { text: activeVehicle ? activeVehicle.mavlinkReceivedCount : qsTr("N/A", "No data to display") }
                    QGCLabel { text: qsTr("Total message loss:") }
                    QGCLabel { text: activeVehicle ? activeVehicle.mavlinkLossCount : qsTr("N/A", "No data to display") }
                    QGCLabel { text: qsTr("Loss rate:") }
                    QGCLabel { text: activeVehicle ? activeVehicle.mavlinkLossPercent.toFixed(0) + '%' : qsTr("N/A", "No data to display") }
                }
            }
        }
    }

    QGCColoredImage {
        id:                 mavlinkIcon
        width:              height
        anchors.top:        parent.top
        anchors.bottom:     parent.bottom
        source:             "/qmlimages/Mavlink.png"
        fillMode:           Image.PreserveAspectFit
        sourceSize.height:  height
        opacity:            (activeVehicle && activeVehicle.mavlinkReceivedCount > 0) ? 1 : 0.5
        color:              qgcPal.buttonText
    }

    Column {
        id:                     mavlinkValuesColumn
        anchors.verticalCenter: parent.verticalCenter
        anchors.leftMargin:     ScreenTools.defaultFontPixelWidth / 2
        anchors.left:           mavlinkIcon.right

        QGCLabel {
            id:         mavlinkLossValue
            visible:    activeVehicle && !isNaN(activeVehicle.mavlinkLossCount)
            color:      qgcPal.buttonText
            text:       activeVehicle ? (100.0 - activeVehicle.mavlinkLossPercent.toFixed(0)) + '%' : ""
        }
    }

    MouseArea {
        anchors.fill:   parent
        onClicked: {
            mainWindow.showPopUp(_root, mavlinkInfo)
        }
    }
}
