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

#include "OAIGoogleProductCategory1Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGoogleProductCategory1Filter::OAIGoogleProductCategory1Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGoogleProductCategory1Filter::OAIGoogleProductCategory1Filter() {
    this->initializeModel();
}

OAIGoogleProductCategory1Filter::~OAIGoogleProductCategory1Filter() {}

void OAIGoogleProductCategory1Filter::initializeModel() {

    m_google_product_category_1_isSet = false;
    m_google_product_category_1_isValid = false;
}

void OAIGoogleProductCategory1Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGoogleProductCategory1Filter::fromJsonObject(QJsonObject json) {

    m_google_product_category_1_isValid = ::OpenAPI::fromJsonValue(m_google_product_category_1, json[QString("GOOGLE_PRODUCT_CATEGORY_1")]);
    m_google_product_category_1_isSet = !json[QString("GOOGLE_PRODUCT_CATEGORY_1")].isNull() && m_google_product_category_1_isValid;
}

QString OAIGoogleProductCategory1Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGoogleProductCategory1Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_google_product_category_1_isSet) {
        obj.insert(QString("GOOGLE_PRODUCT_CATEGORY_1"), ::OpenAPI::toJsonValue(m_google_product_category_1));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringListCriteria OAIGoogleProductCategory1Filter::getGoogleProductCategory1() const {
    return m_google_product_category_1;
}
void OAIGoogleProductCategory1Filter::setGoogleProductCategory1(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_1) {
    m_google_product_category_1 = google_product_category_1;
    m_google_product_category_1_isSet = true;
}

bool OAIGoogleProductCategory1Filter::is_google_product_category_1_Set() const{
    return m_google_product_category_1_isSet;
}

bool OAIGoogleProductCategory1Filter::is_google_product_category_1_Valid() const{
    return m_google_product_category_1_isValid;
}

bool OAIGoogleProductCategory1Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_google_product_category_1_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGoogleProductCategory1Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_google_product_category_1_isValid && true;
}

} // namespace OpenAPI
