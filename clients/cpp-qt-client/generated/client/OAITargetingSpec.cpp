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

#include "OAITargetingSpec.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITargetingSpec::OAITargetingSpec(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITargetingSpec::OAITargetingSpec() {
    this->initializeModel();
}

OAITargetingSpec::~OAITargetingSpec() {}

void OAITargetingSpec::initializeModel() {

    m_age_bucket_isSet = false;
    m_age_bucket_isValid = false;

    m_apptype_isSet = false;
    m_apptype_isValid = false;

    m_audience_exclude_isSet = false;
    m_audience_exclude_isValid = false;

    m_audience_include_isSet = false;
    m_audience_include_isValid = false;

    m_gender_isSet = false;
    m_gender_isValid = false;

    m_geo_isSet = false;
    m_geo_isValid = false;

    m_interest_isSet = false;
    m_interest_isValid = false;

    m_locale_isSet = false;
    m_locale_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_shopping_retargeting_isSet = false;
    m_shopping_retargeting_isValid = false;

    m_targeting_strategy_isSet = false;
    m_targeting_strategy_isValid = false;
}

void OAITargetingSpec::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITargetingSpec::fromJsonObject(QJsonObject json) {

    m_age_bucket_isValid = ::OpenAPI::fromJsonValue(m_age_bucket, json[QString("AGE_BUCKET")]);
    m_age_bucket_isSet = !json[QString("AGE_BUCKET")].isNull() && m_age_bucket_isValid;

    m_apptype_isValid = ::OpenAPI::fromJsonValue(m_apptype, json[QString("APPTYPE")]);
    m_apptype_isSet = !json[QString("APPTYPE")].isNull() && m_apptype_isValid;

    m_audience_exclude_isValid = ::OpenAPI::fromJsonValue(m_audience_exclude, json[QString("AUDIENCE_EXCLUDE")]);
    m_audience_exclude_isSet = !json[QString("AUDIENCE_EXCLUDE")].isNull() && m_audience_exclude_isValid;

    m_audience_include_isValid = ::OpenAPI::fromJsonValue(m_audience_include, json[QString("AUDIENCE_INCLUDE&#39;")]);
    m_audience_include_isSet = !json[QString("AUDIENCE_INCLUDE&#39;")].isNull() && m_audience_include_isValid;

    m_gender_isValid = ::OpenAPI::fromJsonValue(m_gender, json[QString("GENDER")]);
    m_gender_isSet = !json[QString("GENDER")].isNull() && m_gender_isValid;

    m_geo_isValid = ::OpenAPI::fromJsonValue(m_geo, json[QString("GEO")]);
    m_geo_isSet = !json[QString("GEO")].isNull() && m_geo_isValid;

    m_interest_isValid = ::OpenAPI::fromJsonValue(m_interest, json[QString("INTEREST")]);
    m_interest_isSet = !json[QString("INTEREST")].isNull() && m_interest_isValid;

    m_locale_isValid = ::OpenAPI::fromJsonValue(m_locale, json[QString("LOCALE")]);
    m_locale_isSet = !json[QString("LOCALE")].isNull() && m_locale_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(m_location, json[QString("LOCATION")]);
    m_location_isSet = !json[QString("LOCATION")].isNull() && m_location_isValid;

    m_shopping_retargeting_isValid = ::OpenAPI::fromJsonValue(m_shopping_retargeting, json[QString("SHOPPING_RETARGETING")]);
    m_shopping_retargeting_isSet = !json[QString("SHOPPING_RETARGETING")].isNull() && m_shopping_retargeting_isValid;

    m_targeting_strategy_isValid = ::OpenAPI::fromJsonValue(m_targeting_strategy, json[QString("TARGETING_STRATEGY")]);
    m_targeting_strategy_isSet = !json[QString("TARGETING_STRATEGY")].isNull() && m_targeting_strategy_isValid;
}

QString OAITargetingSpec::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITargetingSpec::asJsonObject() const {
    QJsonObject obj;
    if (m_age_bucket.size() > 0) {
        obj.insert(QString("AGE_BUCKET"), ::OpenAPI::toJsonValue(m_age_bucket));
    }
    if (m_apptype.size() > 0) {
        obj.insert(QString("APPTYPE"), ::OpenAPI::toJsonValue(m_apptype));
    }
    if (m_audience_exclude.size() > 0) {
        obj.insert(QString("AUDIENCE_EXCLUDE"), ::OpenAPI::toJsonValue(m_audience_exclude));
    }
    if (m_audience_include.size() > 0) {
        obj.insert(QString("AUDIENCE_INCLUDE&#39;"), ::OpenAPI::toJsonValue(m_audience_include));
    }
    if (m_gender.size() > 0) {
        obj.insert(QString("GENDER"), ::OpenAPI::toJsonValue(m_gender));
    }
    if (m_geo.size() > 0) {
        obj.insert(QString("GEO"), ::OpenAPI::toJsonValue(m_geo));
    }
    if (m_interest.size() > 0) {
        obj.insert(QString("INTEREST"), ::OpenAPI::toJsonValue(m_interest));
    }
    if (m_locale.size() > 0) {
        obj.insert(QString("LOCALE"), ::OpenAPI::toJsonValue(m_locale));
    }
    if (m_location.size() > 0) {
        obj.insert(QString("LOCATION"), ::OpenAPI::toJsonValue(m_location));
    }
    if (m_shopping_retargeting.size() > 0) {
        obj.insert(QString("SHOPPING_RETARGETING"), ::OpenAPI::toJsonValue(m_shopping_retargeting));
    }
    if (m_targeting_strategy.size() > 0) {
        obj.insert(QString("TARGETING_STRATEGY"), ::OpenAPI::toJsonValue(m_targeting_strategy));
    }
    return obj;
}

QList<QString> OAITargetingSpec::getAgeBucket() const {
    return m_age_bucket;
}
void OAITargetingSpec::setAgeBucket(const QList<QString> &age_bucket) {
    m_age_bucket = age_bucket;
    m_age_bucket_isSet = true;
}

bool OAITargetingSpec::is_age_bucket_Set() const{
    return m_age_bucket_isSet;
}

bool OAITargetingSpec::is_age_bucket_Valid() const{
    return m_age_bucket_isValid;
}

QList<QString> OAITargetingSpec::getApptype() const {
    return m_apptype;
}
void OAITargetingSpec::setApptype(const QList<QString> &apptype) {
    m_apptype = apptype;
    m_apptype_isSet = true;
}

bool OAITargetingSpec::is_apptype_Set() const{
    return m_apptype_isSet;
}

bool OAITargetingSpec::is_apptype_Valid() const{
    return m_apptype_isValid;
}

QList<QString> OAITargetingSpec::getAudienceExclude() const {
    return m_audience_exclude;
}
void OAITargetingSpec::setAudienceExclude(const QList<QString> &audience_exclude) {
    m_audience_exclude = audience_exclude;
    m_audience_exclude_isSet = true;
}

bool OAITargetingSpec::is_audience_exclude_Set() const{
    return m_audience_exclude_isSet;
}

bool OAITargetingSpec::is_audience_exclude_Valid() const{
    return m_audience_exclude_isValid;
}

QList<QString> OAITargetingSpec::getAudienceInclude() const {
    return m_audience_include;
}
void OAITargetingSpec::setAudienceInclude(const QList<QString> &audience_include) {
    m_audience_include = audience_include;
    m_audience_include_isSet = true;
}

bool OAITargetingSpec::is_audience_include_Set() const{
    return m_audience_include_isSet;
}

bool OAITargetingSpec::is_audience_include_Valid() const{
    return m_audience_include_isValid;
}

QList<QString> OAITargetingSpec::getGender() const {
    return m_gender;
}
void OAITargetingSpec::setGender(const QList<QString> &gender) {
    m_gender = gender;
    m_gender_isSet = true;
}

bool OAITargetingSpec::is_gender_Set() const{
    return m_gender_isSet;
}

bool OAITargetingSpec::is_gender_Valid() const{
    return m_gender_isValid;
}

QList<QString> OAITargetingSpec::getGeo() const {
    return m_geo;
}
void OAITargetingSpec::setGeo(const QList<QString> &geo) {
    m_geo = geo;
    m_geo_isSet = true;
}

bool OAITargetingSpec::is_geo_Set() const{
    return m_geo_isSet;
}

bool OAITargetingSpec::is_geo_Valid() const{
    return m_geo_isValid;
}

QList<QString> OAITargetingSpec::getInterest() const {
    return m_interest;
}
void OAITargetingSpec::setInterest(const QList<QString> &interest) {
    m_interest = interest;
    m_interest_isSet = true;
}

bool OAITargetingSpec::is_interest_Set() const{
    return m_interest_isSet;
}

bool OAITargetingSpec::is_interest_Valid() const{
    return m_interest_isValid;
}

QList<QString> OAITargetingSpec::getLocale() const {
    return m_locale;
}
void OAITargetingSpec::setLocale(const QList<QString> &locale) {
    m_locale = locale;
    m_locale_isSet = true;
}

bool OAITargetingSpec::is_locale_Set() const{
    return m_locale_isSet;
}

bool OAITargetingSpec::is_locale_Valid() const{
    return m_locale_isValid;
}

QList<QString> OAITargetingSpec::getLocation() const {
    return m_location;
}
void OAITargetingSpec::setLocation(const QList<QString> &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAITargetingSpec::is_location_Set() const{
    return m_location_isSet;
}

bool OAITargetingSpec::is_location_Valid() const{
    return m_location_isValid;
}

QList<OAITargetingSpec_SHOPPING_RETARGETING_1_inner> OAITargetingSpec::getShoppingRetargeting() const {
    return m_shopping_retargeting;
}
void OAITargetingSpec::setShoppingRetargeting(const QList<OAITargetingSpec_SHOPPING_RETARGETING_1_inner> &shopping_retargeting) {
    m_shopping_retargeting = shopping_retargeting;
    m_shopping_retargeting_isSet = true;
}

bool OAITargetingSpec::is_shopping_retargeting_Set() const{
    return m_shopping_retargeting_isSet;
}

bool OAITargetingSpec::is_shopping_retargeting_Valid() const{
    return m_shopping_retargeting_isValid;
}

QList<QString> OAITargetingSpec::getTargetingStrategy() const {
    return m_targeting_strategy;
}
void OAITargetingSpec::setTargetingStrategy(const QList<QString> &targeting_strategy) {
    m_targeting_strategy = targeting_strategy;
    m_targeting_strategy_isSet = true;
}

bool OAITargetingSpec::is_targeting_strategy_Set() const{
    return m_targeting_strategy_isSet;
}

bool OAITargetingSpec::is_targeting_strategy_Valid() const{
    return m_targeting_strategy_isValid;
}

bool OAITargetingSpec::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_age_bucket.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_apptype.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_audience_exclude.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_audience_include.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_gender.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_geo.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_interest.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_locale.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_shopping_retargeting.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_targeting_strategy.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITargetingSpec::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
