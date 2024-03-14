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

#include "OAIGoogleProductCategory5Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGoogleProductCategory5Filter::OAIGoogleProductCategory5Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGoogleProductCategory5Filter::OAIGoogleProductCategory5Filter() {
    this->initializeModel();
}

OAIGoogleProductCategory5Filter::~OAIGoogleProductCategory5Filter() {}

void OAIGoogleProductCategory5Filter::initializeModel() {

    m_google_product_category_5_isSet = false;
    m_google_product_category_5_isValid = false;
}

void OAIGoogleProductCategory5Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGoogleProductCategory5Filter::fromJsonObject(QJsonObject json) {

    m_google_product_category_5_isValid = ::OpenAPI::fromJsonValue(m_google_product_category_5, json[QString("GOOGLE_PRODUCT_CATEGORY_5")]);
    m_google_product_category_5_isSet = !json[QString("GOOGLE_PRODUCT_CATEGORY_5")].isNull() && m_google_product_category_5_isValid;
}

QString OAIGoogleProductCategory5Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGoogleProductCategory5Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_google_product_category_5_isSet) {
        obj.insert(QString("GOOGLE_PRODUCT_CATEGORY_5"), ::OpenAPI::toJsonValue(m_google_product_category_5));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringListCriteria OAIGoogleProductCategory5Filter::getGoogleProductCategory5() const {
    return m_google_product_category_5;
}
void OAIGoogleProductCategory5Filter::setGoogleProductCategory5(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_5) {
    m_google_product_category_5 = google_product_category_5;
    m_google_product_category_5_isSet = true;
}

bool OAIGoogleProductCategory5Filter::is_google_product_category_5_Set() const{
    return m_google_product_category_5_isSet;
}

bool OAIGoogleProductCategory5Filter::is_google_product_category_5_Valid() const{
    return m_google_product_category_5_isValid;
}

bool OAIGoogleProductCategory5Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_google_product_category_5_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGoogleProductCategory5Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_google_product_category_5_isValid && true;
}

} // namespace OpenAPI