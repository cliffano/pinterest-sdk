/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsProductGroupFiltersAllOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupFiltersAllOf::OAICatalogsProductGroupFiltersAllOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupFiltersAllOf::OAICatalogsProductGroupFiltersAllOf() {
    this->initializeModel();
}

OAICatalogsProductGroupFiltersAllOf::~OAICatalogsProductGroupFiltersAllOf() {}

void OAICatalogsProductGroupFiltersAllOf::initializeModel() {

    m_all_of_isSet = false;
    m_all_of_isValid = false;
}

void OAICatalogsProductGroupFiltersAllOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroupFiltersAllOf::fromJsonObject(QJsonObject json) {

    m_all_of_isValid = ::OpenAPI::fromJsonValue(all_of, json[QString("all_of")]);
    m_all_of_isSet = !json[QString("all_of")].isNull() && m_all_of_isValid;
}

QString OAICatalogsProductGroupFiltersAllOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroupFiltersAllOf::asJsonObject() const {
    QJsonObject obj;
    if (all_of.size() > 0) {
        obj.insert(QString("all_of"), ::OpenAPI::toJsonValue(all_of));
    }
    return obj;
}

QList<OAICatalogsProductGroupFilterKeys> OAICatalogsProductGroupFiltersAllOf::getAllOf() const {
    return all_of;
}
void OAICatalogsProductGroupFiltersAllOf::setAllOf(const QList<OAICatalogsProductGroupFilterKeys> &all_of) {
    this->all_of = all_of;
    this->m_all_of_isSet = true;
}

bool OAICatalogsProductGroupFiltersAllOf::is_all_of_Set() const{
    return m_all_of_isSet;
}

bool OAICatalogsProductGroupFiltersAllOf::is_all_of_Valid() const{
    return m_all_of_isValid;
}

bool OAICatalogsProductGroupFiltersAllOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (all_of.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProductGroupFiltersAllOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_all_of_isValid && true;
}

} // namespace OpenAPI
