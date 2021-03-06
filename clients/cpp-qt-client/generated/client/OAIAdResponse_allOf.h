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

/*
 * OAIAdResponse_allOf.h
 *
 * Creation fields
 */

#ifndef OAIAdResponse_allOf_H
#define OAIAdResponse_allOf_H

#include <QJsonObject>

#include "OAIEntityStatus.h"
#include "OAITrackingUrls.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdResponse_allOf : public OAIObject {
public:
    OAIAdResponse_allOf();
    OAIAdResponse_allOf(QString json);
    ~OAIAdResponse_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdGroupId() const;
    void setAdGroupId(const QString &ad_group_id);
    bool is_ad_group_id_Set() const;
    bool is_ad_group_id_Valid() const;

    QString getAndroidDeepLink() const;
    void setAndroidDeepLink(const QString &android_deep_link);
    bool is_android_deep_link_Set() const;
    bool is_android_deep_link_Valid() const;

    QList<QString> getCarouselAndroidDeepLinks() const;
    void setCarouselAndroidDeepLinks(const QList<QString> &carousel_android_deep_links);
    bool is_carousel_android_deep_links_Set() const;
    bool is_carousel_android_deep_links_Valid() const;

    QList<QString> getCarouselDestinationUrls() const;
    void setCarouselDestinationUrls(const QList<QString> &carousel_destination_urls);
    bool is_carousel_destination_urls_Set() const;
    bool is_carousel_destination_urls_Valid() const;

    QList<QString> getCarouselIosDeepLinks() const;
    void setCarouselIosDeepLinks(const QList<QString> &carousel_ios_deep_links);
    bool is_carousel_ios_deep_links_Set() const;
    bool is_carousel_ios_deep_links_Valid() const;

    QString getClickTrackingUrl() const;
    void setClickTrackingUrl(const QString &click_tracking_url);
    bool is_click_tracking_url_Set() const;
    bool is_click_tracking_url_Valid() const;

    QString getCreativeType() const;
    void setCreativeType(const QString &creative_type);
    bool is_creative_type_Set() const;
    bool is_creative_type_Valid() const;

    QString getDestinationUrl() const;
    void setDestinationUrl(const QString &destination_url);
    bool is_destination_url_Set() const;
    bool is_destination_url_Valid() const;

    QString getIosDeepLink() const;
    void setIosDeepLink(const QString &ios_deep_link);
    bool is_ios_deep_link_Set() const;
    bool is_ios_deep_link_Valid() const;

    bool isIsPinDeleted() const;
    void setIsPinDeleted(const bool &is_pin_deleted);
    bool is_is_pin_deleted_Set() const;
    bool is_is_pin_deleted_Valid() const;

    bool isIsRemovable() const;
    void setIsRemovable(const bool &is_removable);
    bool is_is_removable_Set() const;
    bool is_is_removable_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getPinId() const;
    void setPinId(const QString &pin_id);
    bool is_pin_id_Set() const;
    bool is_pin_id_Valid() const;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    OAITrackingUrls getTrackingUrls() const;
    void setTrackingUrls(const OAITrackingUrls &tracking_urls);
    bool is_tracking_urls_Set() const;
    bool is_tracking_urls_Valid() const;

    QString getViewTrackingUrl() const;
    void setViewTrackingUrl(const QString &view_tracking_url);
    bool is_view_tracking_url_Set() const;
    bool is_view_tracking_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_group_id;
    bool m_ad_group_id_isSet;
    bool m_ad_group_id_isValid;

    QString android_deep_link;
    bool m_android_deep_link_isSet;
    bool m_android_deep_link_isValid;

    QList<QString> carousel_android_deep_links;
    bool m_carousel_android_deep_links_isSet;
    bool m_carousel_android_deep_links_isValid;

    QList<QString> carousel_destination_urls;
    bool m_carousel_destination_urls_isSet;
    bool m_carousel_destination_urls_isValid;

    QList<QString> carousel_ios_deep_links;
    bool m_carousel_ios_deep_links_isSet;
    bool m_carousel_ios_deep_links_isValid;

    QString click_tracking_url;
    bool m_click_tracking_url_isSet;
    bool m_click_tracking_url_isValid;

    QString creative_type;
    bool m_creative_type_isSet;
    bool m_creative_type_isValid;

    QString destination_url;
    bool m_destination_url_isSet;
    bool m_destination_url_isValid;

    QString ios_deep_link;
    bool m_ios_deep_link_isSet;
    bool m_ios_deep_link_isValid;

    bool is_pin_deleted;
    bool m_is_pin_deleted_isSet;
    bool m_is_pin_deleted_isValid;

    bool is_removable;
    bool m_is_removable_isSet;
    bool m_is_removable_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString pin_id;
    bool m_pin_id_isSet;
    bool m_pin_id_isValid;

    OAIEntityStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAITrackingUrls tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    QString view_tracking_url;
    bool m_view_tracking_url_isSet;
    bool m_view_tracking_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdResponse_allOf)

#endif // OAIAdResponse_allOf_H
