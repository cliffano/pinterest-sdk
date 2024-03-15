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

#include "OAIAccount.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAccount::OAIAccount(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAccount::OAIAccount() {
    this->initializeModel();
}

OAIAccount::~OAIAccount() {}

void OAIAccount::initializeModel() {

    m_account_type_isSet = false;
    m_account_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_profile_image_isSet = false;
    m_profile_image_isValid = false;

    m_website_url_isSet = false;
    m_website_url_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_about_isSet = false;
    m_about_isValid = false;

    m_business_name_isSet = false;
    m_business_name_isValid = false;

    m_board_count_isSet = false;
    m_board_count_isValid = false;

    m_pin_count_isSet = false;
    m_pin_count_isValid = false;

    m_follower_count_isSet = false;
    m_follower_count_isValid = false;

    m_following_count_isSet = false;
    m_following_count_isValid = false;

    m_monthly_views_isSet = false;
    m_monthly_views_isValid = false;
}

void OAIAccount::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAccount::fromJsonObject(QJsonObject json) {

    m_account_type_isValid = ::OpenAPI::fromJsonValue(account_type, json[QString("account_type")]);
    m_account_type_isSet = !json[QString("account_type")].isNull() && m_account_type_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_profile_image_isValid = ::OpenAPI::fromJsonValue(profile_image, json[QString("profile_image")]);
    m_profile_image_isSet = !json[QString("profile_image")].isNull() && m_profile_image_isValid;

    m_website_url_isValid = ::OpenAPI::fromJsonValue(website_url, json[QString("website_url")]);
    m_website_url_isSet = !json[QString("website_url")].isNull() && m_website_url_isValid;

    m_username_isValid = ::OpenAPI::fromJsonValue(username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_about_isValid = ::OpenAPI::fromJsonValue(about, json[QString("about")]);
    m_about_isSet = !json[QString("about")].isNull() && m_about_isValid;

    m_business_name_isValid = ::OpenAPI::fromJsonValue(business_name, json[QString("business_name")]);
    m_business_name_isSet = !json[QString("business_name")].isNull() && m_business_name_isValid;

    m_board_count_isValid = ::OpenAPI::fromJsonValue(board_count, json[QString("board_count")]);
    m_board_count_isSet = !json[QString("board_count")].isNull() && m_board_count_isValid;

    m_pin_count_isValid = ::OpenAPI::fromJsonValue(pin_count, json[QString("pin_count")]);
    m_pin_count_isSet = !json[QString("pin_count")].isNull() && m_pin_count_isValid;

    m_follower_count_isValid = ::OpenAPI::fromJsonValue(follower_count, json[QString("follower_count")]);
    m_follower_count_isSet = !json[QString("follower_count")].isNull() && m_follower_count_isValid;

    m_following_count_isValid = ::OpenAPI::fromJsonValue(following_count, json[QString("following_count")]);
    m_following_count_isSet = !json[QString("following_count")].isNull() && m_following_count_isValid;

    m_monthly_views_isValid = ::OpenAPI::fromJsonValue(monthly_views, json[QString("monthly_views")]);
    m_monthly_views_isSet = !json[QString("monthly_views")].isNull() && m_monthly_views_isValid;
}

QString OAIAccount::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAccount::asJsonObject() const {
    QJsonObject obj;
    if (m_account_type_isSet) {
        obj.insert(QString("account_type"), ::OpenAPI::toJsonValue(account_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_profile_image_isSet) {
        obj.insert(QString("profile_image"), ::OpenAPI::toJsonValue(profile_image));
    }
    if (m_website_url_isSet) {
        obj.insert(QString("website_url"), ::OpenAPI::toJsonValue(website_url));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::OpenAPI::toJsonValue(username));
    }
    if (m_about_isSet) {
        obj.insert(QString("about"), ::OpenAPI::toJsonValue(about));
    }
    if (m_business_name_isSet) {
        obj.insert(QString("business_name"), ::OpenAPI::toJsonValue(business_name));
    }
    if (m_board_count_isSet) {
        obj.insert(QString("board_count"), ::OpenAPI::toJsonValue(board_count));
    }
    if (m_pin_count_isSet) {
        obj.insert(QString("pin_count"), ::OpenAPI::toJsonValue(pin_count));
    }
    if (m_follower_count_isSet) {
        obj.insert(QString("follower_count"), ::OpenAPI::toJsonValue(follower_count));
    }
    if (m_following_count_isSet) {
        obj.insert(QString("following_count"), ::OpenAPI::toJsonValue(following_count));
    }
    if (m_monthly_views_isSet) {
        obj.insert(QString("monthly_views"), ::OpenAPI::toJsonValue(monthly_views));
    }
    return obj;
}

QString OAIAccount::getAccountType() const {
    return account_type;
}
void OAIAccount::setAccountType(const QString &account_type) {
    this->account_type = account_type;
    this->m_account_type_isSet = true;
}

bool OAIAccount::is_account_type_Set() const{
    return m_account_type_isSet;
}

bool OAIAccount::is_account_type_Valid() const{
    return m_account_type_isValid;
}

QString OAIAccount::getId() const {
    return id;
}
void OAIAccount::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIAccount::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAccount::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIAccount::getProfileImage() const {
    return profile_image;
}
void OAIAccount::setProfileImage(const QString &profile_image) {
    this->profile_image = profile_image;
    this->m_profile_image_isSet = true;
}

bool OAIAccount::is_profile_image_Set() const{
    return m_profile_image_isSet;
}

bool OAIAccount::is_profile_image_Valid() const{
    return m_profile_image_isValid;
}

QString OAIAccount::getWebsiteUrl() const {
    return website_url;
}
void OAIAccount::setWebsiteUrl(const QString &website_url) {
    this->website_url = website_url;
    this->m_website_url_isSet = true;
}

bool OAIAccount::is_website_url_Set() const{
    return m_website_url_isSet;
}

bool OAIAccount::is_website_url_Valid() const{
    return m_website_url_isValid;
}

QString OAIAccount::getUsername() const {
    return username;
}
void OAIAccount::setUsername(const QString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

bool OAIAccount::is_username_Set() const{
    return m_username_isSet;
}

bool OAIAccount::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIAccount::getAbout() const {
    return about;
}
void OAIAccount::setAbout(const QString &about) {
    this->about = about;
    this->m_about_isSet = true;
}

bool OAIAccount::is_about_Set() const{
    return m_about_isSet;
}

bool OAIAccount::is_about_Valid() const{
    return m_about_isValid;
}

QString OAIAccount::getBusinessName() const {
    return business_name;
}
void OAIAccount::setBusinessName(const QString &business_name) {
    this->business_name = business_name;
    this->m_business_name_isSet = true;
}

bool OAIAccount::is_business_name_Set() const{
    return m_business_name_isSet;
}

bool OAIAccount::is_business_name_Valid() const{
    return m_business_name_isValid;
}

qint32 OAIAccount::getBoardCount() const {
    return board_count;
}
void OAIAccount::setBoardCount(const qint32 &board_count) {
    this->board_count = board_count;
    this->m_board_count_isSet = true;
}

bool OAIAccount::is_board_count_Set() const{
    return m_board_count_isSet;
}

bool OAIAccount::is_board_count_Valid() const{
    return m_board_count_isValid;
}

qint32 OAIAccount::getPinCount() const {
    return pin_count;
}
void OAIAccount::setPinCount(const qint32 &pin_count) {
    this->pin_count = pin_count;
    this->m_pin_count_isSet = true;
}

bool OAIAccount::is_pin_count_Set() const{
    return m_pin_count_isSet;
}

bool OAIAccount::is_pin_count_Valid() const{
    return m_pin_count_isValid;
}

qint32 OAIAccount::getFollowerCount() const {
    return follower_count;
}
void OAIAccount::setFollowerCount(const qint32 &follower_count) {
    this->follower_count = follower_count;
    this->m_follower_count_isSet = true;
}

bool OAIAccount::is_follower_count_Set() const{
    return m_follower_count_isSet;
}

bool OAIAccount::is_follower_count_Valid() const{
    return m_follower_count_isValid;
}

qint32 OAIAccount::getFollowingCount() const {
    return following_count;
}
void OAIAccount::setFollowingCount(const qint32 &following_count) {
    this->following_count = following_count;
    this->m_following_count_isSet = true;
}

bool OAIAccount::is_following_count_Set() const{
    return m_following_count_isSet;
}

bool OAIAccount::is_following_count_Valid() const{
    return m_following_count_isValid;
}

qint32 OAIAccount::getMonthlyViews() const {
    return monthly_views;
}
void OAIAccount::setMonthlyViews(const qint32 &monthly_views) {
    this->monthly_views = monthly_views;
    this->m_monthly_views_isSet = true;
}

bool OAIAccount::is_monthly_views_Set() const{
    return m_monthly_views_isSet;
}

bool OAIAccount::is_monthly_views_Valid() const{
    return m_monthly_views_isValid;
}

bool OAIAccount::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_account_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_profile_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_website_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_about_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pin_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_follower_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_following_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_monthly_views_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAccount::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
