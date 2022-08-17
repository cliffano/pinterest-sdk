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

#include "OAIProductType4Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductType4Filter::OAIProductType4Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductType4Filter::OAIProductType4Filter() {
    this->initializeModel();
}

OAIProductType4Filter::~OAIProductType4Filter() {}

void OAIProductType4Filter::initializeModel() {

    m_product_type_4_isSet = false;
    m_product_type_4_isValid = false;
}

void OAIProductType4Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductType4Filter::fromJsonObject(QJsonObject json) {

    m_product_type_4_isValid = ::OpenAPI::fromJsonValue(product_type_4, json[QString("PRODUCT_TYPE_4")]);
    m_product_type_4_isSet = !json[QString("PRODUCT_TYPE_4")].isNull() && m_product_type_4_isValid;
}

QString OAIProductType4Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductType4Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_product_type_4_isSet) {
        obj.insert(QString("PRODUCT_TYPE_4"), ::OpenAPI::toJsonValue(product_type_4));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringListCriteria OAIProductType4Filter::getProductType4() const {
    return product_type_4;
}
void OAIProductType4Filter::setProductType4(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_4) {
    this->product_type_4 = product_type_4;
    this->m_product_type_4_isSet = true;
}

bool OAIProductType4Filter::is_product_type_4_Set() const{
    return m_product_type_4_isSet;
}

bool OAIProductType4Filter::is_product_type_4_Valid() const{
    return m_product_type_4_isValid;
}

bool OAIProductType4Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_product_type_4_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductType4Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_product_type_4_isValid && true;
}

} // namespace OpenAPI
