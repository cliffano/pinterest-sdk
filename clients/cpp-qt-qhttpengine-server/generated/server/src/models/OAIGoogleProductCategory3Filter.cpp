/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGoogleProductCategory3Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGoogleProductCategory3Filter::OAIGoogleProductCategory3Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGoogleProductCategory3Filter::OAIGoogleProductCategory3Filter() {
    this->initializeModel();
}

OAIGoogleProductCategory3Filter::~OAIGoogleProductCategory3Filter() {}

void OAIGoogleProductCategory3Filter::initializeModel() {

    m_google_product_category_3_isSet = false;
    m_google_product_category_3_isValid = false;
}

void OAIGoogleProductCategory3Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGoogleProductCategory3Filter::fromJsonObject(QJsonObject json) {

    m_google_product_category_3_isValid = ::OpenAPI::fromJsonValue(google_product_category_3, json[QString("GOOGLE_PRODUCT_CATEGORY_3")]);
    m_google_product_category_3_isSet = !json[QString("GOOGLE_PRODUCT_CATEGORY_3")].isNull() && m_google_product_category_3_isValid;
}

QString OAIGoogleProductCategory3Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGoogleProductCategory3Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_google_product_category_3_isSet) {
        obj.insert(QString("GOOGLE_PRODUCT_CATEGORY_3"), ::OpenAPI::toJsonValue(google_product_category_3));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringListCriteria OAIGoogleProductCategory3Filter::getGoogleProductCategory3() const {
    return google_product_category_3;
}
void OAIGoogleProductCategory3Filter::setGoogleProductCategory3(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_3) {
    this->google_product_category_3 = google_product_category_3;
    this->m_google_product_category_3_isSet = true;
}

bool OAIGoogleProductCategory3Filter::is_google_product_category_3_Set() const{
    return m_google_product_category_3_isSet;
}

bool OAIGoogleProductCategory3Filter::is_google_product_category_3_Valid() const{
    return m_google_product_category_3_isValid;
}

bool OAIGoogleProductCategory3Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_google_product_category_3_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGoogleProductCategory3Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_google_product_category_3_isValid && true;
}

} // namespace OpenAPI
