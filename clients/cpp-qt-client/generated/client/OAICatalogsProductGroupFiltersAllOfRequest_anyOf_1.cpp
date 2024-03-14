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

#include "OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1() {
    this->initializeModel();
}

OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::~OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1() {}

void OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::initializeModel() {

    m_all_of_isSet = false;
    m_all_of_isValid = false;
}

void OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::fromJsonObject(QJsonObject json) {

    m_all_of_isValid = ::OpenAPI::fromJsonValue(m_all_of, json[QString("all_of")]);
    m_all_of_isSet = !json[QString("all_of")].isNull() && m_all_of_isValid;
}

QString OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::asJsonObject() const {
    QJsonObject obj;
    if (m_all_of.size() > 0) {
        obj.insert(QString("all_of"), ::OpenAPI::toJsonValue(m_all_of));
    }
    return obj;
}

QList<OAICatalogsProductGroupFilterKeys> OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::getAllOf() const {
    return m_all_of;
}
void OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::setAllOf(const QList<OAICatalogsProductGroupFilterKeys> &all_of) {
    m_all_of = all_of;
    m_all_of_isSet = true;
}

bool OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::is_all_of_Set() const{
    return m_all_of_isSet;
}

bool OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::is_all_of_Valid() const{
    return m_all_of_isValid;
}

bool OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_all_of.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_all_of_isValid && true;
}

} // namespace OpenAPI
