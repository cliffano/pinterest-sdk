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

#include "OAIProductType0Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductType0Filter::OAIProductType0Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductType0Filter::OAIProductType0Filter() {
    this->initializeModel();
}

OAIProductType0Filter::~OAIProductType0Filter() {}

void OAIProductType0Filter::initializeModel() {

    m_product_type_0_isSet = false;
    m_product_type_0_isValid = false;
}

void OAIProductType0Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductType0Filter::fromJsonObject(QJsonObject json) {

    m_product_type_0_isValid = ::OpenAPI::fromJsonValue(product_type_0, json[QString("PRODUCT_TYPE_0")]);
    m_product_type_0_isSet = !json[QString("PRODUCT_TYPE_0")].isNull() && m_product_type_0_isValid;
}

QString OAIProductType0Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductType0Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_product_type_0_isSet) {
        obj.insert(QString("PRODUCT_TYPE_0"), ::OpenAPI::toJsonValue(product_type_0));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringListCriteria OAIProductType0Filter::getProductType0() const {
    return product_type_0;
}
void OAIProductType0Filter::setProductType0(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_0) {
    this->product_type_0 = product_type_0;
    this->m_product_type_0_isSet = true;
}

bool OAIProductType0Filter::is_product_type_0_Set() const{
    return m_product_type_0_isSet;
}

bool OAIProductType0Filter::is_product_type_0_Valid() const{
    return m_product_type_0_isValid;
}

bool OAIProductType0Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_product_type_0_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductType0Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_product_type_0_isValid && true;
}

} // namespace OpenAPI
