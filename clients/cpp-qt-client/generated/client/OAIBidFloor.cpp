/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBidFloor.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBidFloor::OAIBidFloor(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBidFloor::OAIBidFloor() {
    this->initializeModel();
}

OAIBidFloor::~OAIBidFloor() {}

void OAIBidFloor::initializeModel() {

    m_bid_floors_isSet = false;
    m_bid_floors_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIBidFloor::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBidFloor::fromJsonObject(QJsonObject json) {

    m_bid_floors_isValid = ::OpenAPI::fromJsonValue(m_bid_floors, json[QString("bid_floors")]);
    m_bid_floors_isSet = !json[QString("bid_floors")].isNull() && m_bid_floors_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIBidFloor::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBidFloor::asJsonObject() const {
    QJsonObject obj;
    if (m_bid_floors.size() > 0) {
        obj.insert(QString("bid_floors"), ::OpenAPI::toJsonValue(m_bid_floors));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    return obj;
}

QList<qint32> OAIBidFloor::getBidFloors() const {
    return m_bid_floors;
}
void OAIBidFloor::setBidFloors(const QList<qint32> &bid_floors) {
    m_bid_floors = bid_floors;
    m_bid_floors_isSet = true;
}

bool OAIBidFloor::is_bid_floors_Set() const{
    return m_bid_floors_isSet;
}

bool OAIBidFloor::is_bid_floors_Valid() const{
    return m_bid_floors_isValid;
}

QString OAIBidFloor::getType() const {
    return m_type;
}
void OAIBidFloor::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBidFloor::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBidFloor::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIBidFloor::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_bid_floors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBidFloor::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
