/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsProductGroupPricingCriteria.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupPricingCriteria::OAICatalogsProductGroupPricingCriteria(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupPricingCriteria::OAICatalogsProductGroupPricingCriteria() {
    this->initializeModel();
}

OAICatalogsProductGroupPricingCriteria::~OAICatalogsProductGroupPricingCriteria() {}

void OAICatalogsProductGroupPricingCriteria::initializeModel() {

    m_inclusion_isSet = false;
    m_inclusion_isValid = false;

    m_values_isSet = false;
    m_values_isValid = false;

    m_negated_isSet = false;
    m_negated_isValid = false;
}

void OAICatalogsProductGroupPricingCriteria::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroupPricingCriteria::fromJsonObject(QJsonObject json) {

    m_inclusion_isValid = ::OpenAPI::fromJsonValue(inclusion, json[QString("inclusion")]);
    m_inclusion_isSet = !json[QString("inclusion")].isNull() && m_inclusion_isValid;

    m_values_isValid = ::OpenAPI::fromJsonValue(values, json[QString("values")]);
    m_values_isSet = !json[QString("values")].isNull() && m_values_isValid;

    m_negated_isValid = ::OpenAPI::fromJsonValue(negated, json[QString("negated")]);
    m_negated_isSet = !json[QString("negated")].isNull() && m_negated_isValid;
}

QString OAICatalogsProductGroupPricingCriteria::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroupPricingCriteria::asJsonObject() const {
    QJsonObject obj;
    if (m_inclusion_isSet) {
        obj.insert(QString("inclusion"), ::OpenAPI::toJsonValue(inclusion));
    }
    if (m_values_isSet) {
        obj.insert(QString("values"), ::OpenAPI::toJsonValue(values));
    }
    if (m_negated_isSet) {
        obj.insert(QString("negated"), ::OpenAPI::toJsonValue(negated));
    }
    return obj;
}

bool OAICatalogsProductGroupPricingCriteria::isInclusion() const {
    return inclusion;
}
void OAICatalogsProductGroupPricingCriteria::setInclusion(const bool &inclusion) {
    this->inclusion = inclusion;
    this->m_inclusion_isSet = true;
}

bool OAICatalogsProductGroupPricingCriteria::is_inclusion_Set() const{
    return m_inclusion_isSet;
}

bool OAICatalogsProductGroupPricingCriteria::is_inclusion_Valid() const{
    return m_inclusion_isValid;
}

double OAICatalogsProductGroupPricingCriteria::getValues() const {
    return values;
}
void OAICatalogsProductGroupPricingCriteria::setValues(const double &values) {
    this->values = values;
    this->m_values_isSet = true;
}

bool OAICatalogsProductGroupPricingCriteria::is_values_Set() const{
    return m_values_isSet;
}

bool OAICatalogsProductGroupPricingCriteria::is_values_Valid() const{
    return m_values_isValid;
}

bool OAICatalogsProductGroupPricingCriteria::isNegated() const {
    return negated;
}
void OAICatalogsProductGroupPricingCriteria::setNegated(const bool &negated) {
    this->negated = negated;
    this->m_negated_isSet = true;
}

bool OAICatalogsProductGroupPricingCriteria::is_negated_Set() const{
    return m_negated_isSet;
}

bool OAICatalogsProductGroupPricingCriteria::is_negated_Valid() const{
    return m_negated_isValid;
}

bool OAICatalogsProductGroupPricingCriteria::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_inclusion_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_values_isSet) {
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

bool OAICatalogsProductGroupPricingCriteria::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_inclusion_isValid && m_values_isValid && m_negated_isValid && true;
}

} // namespace OpenAPI
