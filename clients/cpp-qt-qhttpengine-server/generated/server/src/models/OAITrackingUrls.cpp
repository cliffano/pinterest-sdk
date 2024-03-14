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

#include "OAITrackingUrls.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITrackingUrls::OAITrackingUrls(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITrackingUrls::OAITrackingUrls() {
    this->initializeModel();
}

OAITrackingUrls::~OAITrackingUrls() {}

void OAITrackingUrls::initializeModel() {

    m_impression_isSet = false;
    m_impression_isValid = false;

    m_click_isSet = false;
    m_click_isValid = false;

    m_engagement_isSet = false;
    m_engagement_isValid = false;

    m_buyable_button_isSet = false;
    m_buyable_button_isValid = false;

    m_audience_verification_isSet = false;
    m_audience_verification_isValid = false;
}

void OAITrackingUrls::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITrackingUrls::fromJsonObject(QJsonObject json) {

    m_impression_isValid = ::OpenAPI::fromJsonValue(impression, json[QString("impression")]);
    m_impression_isSet = !json[QString("impression")].isNull() && m_impression_isValid;

    m_click_isValid = ::OpenAPI::fromJsonValue(click, json[QString("click")]);
    m_click_isSet = !json[QString("click")].isNull() && m_click_isValid;

    m_engagement_isValid = ::OpenAPI::fromJsonValue(engagement, json[QString("engagement")]);
    m_engagement_isSet = !json[QString("engagement")].isNull() && m_engagement_isValid;

    m_buyable_button_isValid = ::OpenAPI::fromJsonValue(buyable_button, json[QString("buyable_button")]);
    m_buyable_button_isSet = !json[QString("buyable_button")].isNull() && m_buyable_button_isValid;

    m_audience_verification_isValid = ::OpenAPI::fromJsonValue(audience_verification, json[QString("audience_verification")]);
    m_audience_verification_isSet = !json[QString("audience_verification")].isNull() && m_audience_verification_isValid;
}

QString OAITrackingUrls::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITrackingUrls::asJsonObject() const {
    QJsonObject obj;
    if (impression.size() > 0) {
        obj.insert(QString("impression"), ::OpenAPI::toJsonValue(impression));
    }
    if (click.size() > 0) {
        obj.insert(QString("click"), ::OpenAPI::toJsonValue(click));
    }
    if (engagement.size() > 0) {
        obj.insert(QString("engagement"), ::OpenAPI::toJsonValue(engagement));
    }
    if (buyable_button.size() > 0) {
        obj.insert(QString("buyable_button"), ::OpenAPI::toJsonValue(buyable_button));
    }
    if (audience_verification.size() > 0) {
        obj.insert(QString("audience_verification"), ::OpenAPI::toJsonValue(audience_verification));
    }
    return obj;
}

QList<QString> OAITrackingUrls::getImpression() const {
    return impression;
}
void OAITrackingUrls::setImpression(const QList<QString> &impression) {
    this->impression = impression;
    this->m_impression_isSet = true;
}

bool OAITrackingUrls::is_impression_Set() const{
    return m_impression_isSet;
}

bool OAITrackingUrls::is_impression_Valid() const{
    return m_impression_isValid;
}

QList<QString> OAITrackingUrls::getClick() const {
    return click;
}
void OAITrackingUrls::setClick(const QList<QString> &click) {
    this->click = click;
    this->m_click_isSet = true;
}

bool OAITrackingUrls::is_click_Set() const{
    return m_click_isSet;
}

bool OAITrackingUrls::is_click_Valid() const{
    return m_click_isValid;
}

QList<QString> OAITrackingUrls::getEngagement() const {
    return engagement;
}
void OAITrackingUrls::setEngagement(const QList<QString> &engagement) {
    this->engagement = engagement;
    this->m_engagement_isSet = true;
}

bool OAITrackingUrls::is_engagement_Set() const{
    return m_engagement_isSet;
}

bool OAITrackingUrls::is_engagement_Valid() const{
    return m_engagement_isValid;
}

QList<QString> OAITrackingUrls::getBuyableButton() const {
    return buyable_button;
}
void OAITrackingUrls::setBuyableButton(const QList<QString> &buyable_button) {
    this->buyable_button = buyable_button;
    this->m_buyable_button_isSet = true;
}

bool OAITrackingUrls::is_buyable_button_Set() const{
    return m_buyable_button_isSet;
}

bool OAITrackingUrls::is_buyable_button_Valid() const{
    return m_buyable_button_isValid;
}

QList<QString> OAITrackingUrls::getAudienceVerification() const {
    return audience_verification;
}
void OAITrackingUrls::setAudienceVerification(const QList<QString> &audience_verification) {
    this->audience_verification = audience_verification;
    this->m_audience_verification_isSet = true;
}

bool OAITrackingUrls::is_audience_verification_Set() const{
    return m_audience_verification_isSet;
}

bool OAITrackingUrls::is_audience_verification_Valid() const{
    return m_audience_verification_isValid;
}

bool OAITrackingUrls::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (impression.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (click.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (engagement.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (buyable_button.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (audience_verification.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITrackingUrls::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
