/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsProductGroupMultipleCountriesCriteria.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupMultipleCountriesCriteria::OAICatalogsProductGroupMultipleCountriesCriteria(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupMultipleCountriesCriteria::OAICatalogsProductGroupMultipleCountriesCriteria() {
    this->initializeModel();
}

OAICatalogsProductGroupMultipleCountriesCriteria::~OAICatalogsProductGroupMultipleCountriesCriteria() {}

void OAICatalogsProductGroupMultipleCountriesCriteria::initializeModel() {

    m_values_isSet = false;
    m_values_isValid = false;

    m_negated_isSet = false;
    m_negated_isValid = false;
}

void OAICatalogsProductGroupMultipleCountriesCriteria::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroupMultipleCountriesCriteria::fromJsonObject(QJsonObject json) {

    m_values_isValid = ::OpenAPI::fromJsonValue(m_values, json[QString("values")]);
    m_values_isSet = !json[QString("values")].isNull() && m_values_isValid;

    m_negated_isValid = ::OpenAPI::fromJsonValue(m_negated, json[QString("negated")]);
    m_negated_isSet = !json[QString("negated")].isNull() && m_negated_isValid;
}

QString OAICatalogsProductGroupMultipleCountriesCriteria::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroupMultipleCountriesCriteria::asJsonObject() const {
    QJsonObject obj;
    if (m_values.size() > 0) {
        obj.insert(QString("values"), ::OpenAPI::toJsonValue(m_values));
    }
    if (m_negated_isSet) {
        obj.insert(QString("negated"), ::OpenAPI::toJsonValue(m_negated));
    }
    return obj;
}

QList<OAICountry> OAICatalogsProductGroupMultipleCountriesCriteria::getValues() const {
    return m_values;
}
void OAICatalogsProductGroupMultipleCountriesCriteria::setValues(const QList<OAICountry> &values) {
    m_values = values;
    m_values_isSet = true;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::is_values_Set() const{
    return m_values_isSet;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::is_values_Valid() const{
    return m_values_isValid;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::isNegated() const {
    return m_negated;
}
void OAICatalogsProductGroupMultipleCountriesCriteria::setNegated(const bool &negated) {
    m_negated = negated;
    m_negated_isSet = true;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::is_negated_Set() const{
    return m_negated_isSet;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::is_negated_Valid() const{
    return m_negated_isValid;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_values.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_negated_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProductGroupMultipleCountriesCriteria::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_values_isValid && true;
}

} // namespace OpenAPI